#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_17BD8BEF8578C965;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DF56C65100F9B10F_1_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x155B3550)
#define CLASS_1_DF56C65100F9B10F_1_GET_CHESTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B3600)
#define CLASS_1_DF56C65100F9B10F_1_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x155B3620)
#define CLASS_1_DF56C65100F9B10F_1_GET_ELBOWLEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B3580)
#define CLASS_1_DF56C65100F9B10F_1_GET_ELBOWREFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35A0)
#define CLASS_1_DF56C65100F9B10F_1_GET_HEADEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B3570)
#define CLASS_1_DF56C65100F9B10F_1_GET_HIPLEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35D0)
#define CLASS_1_DF56C65100F9B10F_1_GET_HIPREFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35F0)
#define CLASS_1_DF56C65100F9B10F_1_GET_ID_OFFSET UNITYSDK_OFFSET(0x155B3540)
#define CLASS_1_DF56C65100F9B10F_1_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x155B3560)
#define CLASS_1_DF56C65100F9B10F_1_GET_ITEMEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B3610)
#define CLASS_1_DF56C65100F9B10F_1_GET_KNEEPARTLEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35C0)
#define CLASS_1_DF56C65100F9B10F_1_GET_KNEEPARTREFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35E0)
#define CLASS_1_DF56C65100F9B10F_1_GET_SHOULDERLEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B3590)
#define CLASS_1_DF56C65100F9B10F_1_GET_SHOULDERREFFECTPATH_OFFSET UNITYSDK_OFFSET(0x155B35B0)
#define CLASS_1_DF56C65100F9B10F_1_METHOD_1_79F87088A0710492_OFFSET UNITYSDK_OFFSET(0x155B3F70)
#define CLASS_1_DF56C65100F9B10F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155B3630)

inline static constexpr unsigned int Class_1_DF56C65100F9B10F_1_TypeDefinitionIndex = 80117;

class Class_1_DF56C65100F9B10F_1 : public ::System::Object
{
public:
	::System::String* _ShoulderLEffectPath_k__BackingField; // 0x10
	::System::String* _HeadEffectPath_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* _EffectParams_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftPartType, ::Il2CppArray<::System::String*>*>* JFNFJFCBFLF; // 0x28
	::System::String* _ElbowLEffectPath_k__BackingField; // 0x30
	::System::String* _HipREffectPath_k__BackingField; // 0x38
	::System::String* _ImagePath_k__BackingField; // 0x40
	::System::String* _KneePartREffectPath_k__BackingField; // 0x48
	::System::String* _ElbowREffectPath_k__BackingField; // 0x50
	::System::String* _KneePartLEffectPath_k__BackingField; // 0x58
	::System::String* _ChestEffectPath_k__BackingField; // 0x60
	::System::String* _HipLEffectPath_k__BackingField; // 0x68
	::System::String* _ShoulderREffectPath_k__BackingField; // 0x70
	::System::String* _ItemEffectPath_k__BackingField; // 0x78
	::System::UInt32 _ID_k__BackingField; // 0x80
	::RPG::Client::MechCraft::MechCraftAttributeType _AttributeType_k__BackingField; // 0x84

	::System::Void _ctor(::Class_1_17BD8BEF8578C965* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17BD8BEF8578C965*))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_ID_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType get_AttributeType()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_ATTRIBUTETYPE_OFFSET))(this);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_IMAGEPATH_OFFSET))(this);
	}

	::System::String* get_HeadEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_HEADEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ElbowLEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_ELBOWLEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ShoulderLEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_SHOULDERLEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ElbowREffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_ELBOWREFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ShoulderREffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_SHOULDERREFFECTPATH_OFFSET))(this);
	}

	::System::String* get_KneePartLEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_KNEEPARTLEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_HipLEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_HIPLEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_KneePartREffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_KNEEPARTREFFECTPATH_OFFSET))(this);
	}

	::System::String* get_HipREffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_HIPREFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ChestEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_CHESTEFFECTPATH_OFFSET))(this);
	}

	::System::String* get_ItemEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_ITEMEFFECTPATH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* get_EffectParams()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_GET_EFFECTPARAMS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* Method_1_79F87088A0710492(::RPG::Client::MechCraft::MechCraftPartType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1_METHOD_1_79F87088A0710492_OFFSET))(this, a1);
	}
};
