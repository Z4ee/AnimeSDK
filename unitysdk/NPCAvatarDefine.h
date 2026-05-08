#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0xBDCABA0)
#define NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET UNITYSDK_OFFSET(0xBDCB3E0)
#define NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0xBDCB7C0)
#define NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0xBDCA700)
#define NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET UNITYSDK_OFFSET(0xBDCBE90)
#define NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET UNITYSDK_OFFSET(0xBDCBA00)
#define NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0xBDCA530)
#define NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xBDCAA60)
#define NPCAVATARDEFINE_GETPARTSID_OFFSET UNITYSDK_OFFSET(0xBDCA8D0)
#define NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0xBDCAF30)
#define NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET UNITYSDK_OFFSET(0xBDCAE00)
#define NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET UNITYSDK_OFFSET(0xBDCA190)
#define NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET UNITYSDK_OFFSET(0xBDCA360)
#define NPCAVATARDEFINE_ISRANDOMNPC_OFFSET UNITYSDK_OFFSET(0xBDCACB0)
#define NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET UNITYSDK_OFFSET(0xBDCA0D0)
#define NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET UNITYSDK_OFFSET(0xBDCAB20)
#define NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0xBDCABF0)
#define NPCAVATARDEFINE_PARSENUMBYID_OFFSET UNITYSDK_OFFSET(0xBDCAD90)
#define NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET UNITYSDK_OFFSET(0xBDCAAB0)
#define NPCAVATARDEFINE_SPLITPARTSID_OFFSET UNITYSDK_OFFSET(0xBDCA940)
#define NPCAVATARDEFINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDCBFA0)

inline static constexpr unsigned int NPCAvatarDefine_TypeDefinitionIndex = 56509;

struct alignas(1) NPCAvatarDefine
{
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_AllBodyPartEnums()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F70);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F78);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F80);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F88);
	}
	static ::System::String** StaticGet_Name_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F90);
	}
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_BlendShapePartTypes()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32F98);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FA0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FA8);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FB0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FB8);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FC0);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_BakedGPUAnimationWhiteList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FC8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FD0);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FD8);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_GPU_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FE0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FE8);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FF0);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_StandardDeviceSizeList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x32FF8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33000);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33008);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33010);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33018);
	}
	static ::System::String** StaticGet_Name_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33020);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33028);
	}
	static ::System::String** StaticGet_Name_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33030);
	}
	static ::System::String** StaticGet_Name_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x33038);
	}
	static ::System::Int32* StaticGet_RandomNpcCountBase()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xC6C0);
	}
	static ::System::Boolean* StaticGet_bUseExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xC6C4);
	}
	static ::System::Boolean* StaticGet_bUseSceneExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xC6C5);
	}
	static ::System::Single* StaticGet_FadeInTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xC6C8);
	}
	static ::System::Single* StaticGet_FadeOutTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xC6CC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARDEFINE__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsUseExtraSimpleMesh(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInBakedGPUAnimationWhiteList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInStandardDeviceSizeList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET))(gender, size);
	}

	static ::System::String* GetPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::String* GetGPUPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::Int32 GetPartsID(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTSID_OFFSET))(gender, size, part, number);
	}

	static ::System::Void SplitPartsID(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTSID_OFFSET))(id, gender, size, part, number);
	}

	static ::System::Int32 GetPartOverrideId(::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET))(part, number);
	}

	static ::System::Void SplitPartOverrideInfoId(::System::Int32 id, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET))(id, part, number);
	}

	static ::System::Void ParseBodyPartTypeById(::System::Int32 id, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET))(id, part);
	}

	static ::System::Int32 CombineGenderSizeById(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET))(gender, size);
	}

	static ::System::Void ParseGenderSizeById(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET))(id, gender, size);
	}

	static ::System::Boolean IsRandomNPC(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISRANDOMNPC_OFFSET))(id);
	}

	static ::System::Int32 GetRandomNPCId(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET))(gender, size, number);
	}

	static ::System::Void ParseNumById(::System::Int32 id, ::System::Int32& num)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSENUMBYID_OFFSET))(id, num);
	}

	static ::System::Boolean GetPureBodyPartTypeFromName(::System::String* inname, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET))(inname, part);
	}

	static ::System::Boolean GetBodyInfoFromName(::System::String* name, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET))(name, gender, size);
	}

	static ::ENPCAvatarBodyPart GetBodyPartTypeFromName(::System::String* inname)
	{
		return ((::ENPCAvatarBodyPart(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET))(inname);
	}

	static ::System::String* GetPartLOD0MeshName(::System::Int32 partId)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET))(partId);
	}

	static ::System::String* GetPartBlendShapeAnimName(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET))(gender, size, part);
	}
};
