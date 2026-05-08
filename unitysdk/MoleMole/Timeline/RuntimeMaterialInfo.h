#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderMaterialType.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1387FF00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1387FF10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_03C9423DB0AB525F_OFFSET UNITYSDK_OFFSET(0x1388D640)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x138825B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_0A94652C700DE681_OFFSET UNITYSDK_OFFSET(0x13886D20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_157714A21849D308_OFFSET UNITYSDK_OFFSET(0x13884330)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x13880BF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_22A1AF9593D03312_OFFSET UNITYSDK_OFFSET(0x13889D50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_27768B158F54F431_OFFSET UNITYSDK_OFFSET(0x13886870)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x138844C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_3F6A1E1F41DFF304_OFFSET UNITYSDK_OFFSET(0x13880400)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_42D2DF4C887ADB2D_OFFSET UNITYSDK_OFFSET(0x138831D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x13887A80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4618384FA3BBF17B_OFFSET UNITYSDK_OFFSET(0x13882A10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_480B3AD7C7FF0861_OFFSET UNITYSDK_OFFSET(0x13884AD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_48B6CD53C9BCBAE3_OFFSET UNITYSDK_OFFSET(0x13884700)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4A1470E983727D48_OFFSET UNITYSDK_OFFSET(0x13885100)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4B374FDE77243500_OFFSET UNITYSDK_OFFSET(0x13887F80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6319F5A4521BE9B4_OFFSET UNITYSDK_OFFSET(0x13888260)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1388A4F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_8CD15E188C8FB3FB_OFFSET UNITYSDK_OFFSET(0x13883580)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_9328D933552B01D4_OFFSET UNITYSDK_OFFSET(0x138833B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x1388B990)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AEB85D9249402975_OFFSET UNITYSDK_OFFSET(0x138803A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AFEB0530F4ADCDCF_OFFSET UNITYSDK_OFFSET(0x1388DE70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_B03BC991FA3CFAB0_OFFSET UNITYSDK_OFFSET(0x13888100)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_BB1819C69467B3D0_OFFSET UNITYSDK_OFFSET(0x138848F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_C73125933564EC44_OFFSET UNITYSDK_OFFSET(0x13882550)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA09E5F34D65E9F3_OFFSET UNITYSDK_OFFSET(0x138878B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13884450)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138829D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD1D8725807FDBA7_OFFSET UNITYSDK_OFFSET(0x13887460)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1388CF60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D18ABDBF76456C4E_OFFSET UNITYSDK_OFFSET(0x1388DF20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D9858DD9EC2E33CE_OFFSET UNITYSDK_OFFSET(0x13887750)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_DFA330684A0231AB_OFFSET UNITYSDK_OFFSET(0x1388D890)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_E6ACCF89868B6814_OFFSET UNITYSDK_OFFSET(0x13883F60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F3347DA1A8C7E499_OFFSET UNITYSDK_OFFSET(0x13889ED0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F55104B9B863B6F0_OFFSET UNITYSDK_OFFSET(0x1388A0D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F96B1C7229DF29DF_OFFSET UNITYSDK_OFFSET(0x1388B850)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x1388DCF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13882030)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13881C80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1387FFB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_TypeDefinitionIndex = 64894;

	class RuntimeMaterialInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_colorSubKey()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addInstanceMaterialPathMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405B8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_PreZKeyWordList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405C0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipFloatKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipPropertyKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_keywords_enable()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405D8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SpShaderPassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405E0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AoParamPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_shader_pass()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405F0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_properties()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x405F8);
		}
		// static const ::System::Int32 RenderType_Hair = 0x2; // 0x0
		// static const ::System::Int32 RenderType_EyeBrows = 0x1; // 0x0
		// static const ::System::String* MaterialPropertyHeaderStr; // 0x0
		// static const ::System::String* TextureInfoSuffix; // 0x0
		::System::Boolean showDetail; // 0x10
		::System::Boolean newMaterialInfo; // 0x11
		::UnityEngine::Material* sourceMaterial; // 0x18
		::UnityEngine::Material* instanceMaterial; // 0x20
		::MoleMole::Timeline::RecorderMaterialType MaterialType; // 0x28
		::System::Int32 index; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* textureConfigs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* textureInfoConfigs; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* floatValConfigs; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* ColorValConfigs; // 0x48
		::System::Int32 RendererQueue; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* recorderKeyList; // 0x58
		::UnityEngine::Renderer* meshRenderer; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* init_textureConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* init_textureInfoConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* init_floatValConfigs; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* init_ColorValConfigs; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* textKeyList; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* floatKeyList; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* colorKeyList; // 0x98

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET))();
		}

		::UnityEngine::Renderer* get_MeshRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get__materialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void Method_1_C73125933564EC44(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_C73125933564EC44_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_4618384FA3BBF17B(::System::String* a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4618384FA3BBF17B_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Method_1_42D2DF4C887ADB2D(::UnityEngine::Material* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_42D2DF4C887ADB2D_OFFSET))(a1);
		}

		::System::Void Method_1_AEB85D9249402975(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AEB85D9249402975_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::ColorRecorderUnit* Method_1_9328D933552B01D4(::System::String* a1)
		{
			return ((::MoleMole::Timeline::ColorRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_9328D933552B01D4_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8CD15E188C8FB3FB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_8CD15E188C8FB3FB_OFFSET))(this, a1);
		}

		::System::Void Method_1_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_071850D2764E9D4C_OFFSET))(this);
		}

		static ::System::String* Method_1_157714A21849D308(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_157714A21849D308_OFFSET))(a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		static ::System::String* Method_1_48B6CD53C9BCBAE3(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_48B6CD53C9BCBAE3_OFFSET))(a1, a2);
		}

		::MoleMole::Timeline::RecorderUnitType Method_1_E6ACCF89868B6814(::System::String* a1)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_E6ACCF89868B6814_OFFSET))(this, a1);
		}

		::System::Void Method_1_480B3AD7C7FF0861(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_480B3AD7C7FF0861_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_4A1470E983727D48(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4A1470E983727D48_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* Method_1_BB1819C69467B3D0()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_BB1819C69467B3D0_OFFSET))(this);
		}

		::MoleMole::Timeline::FloatRecorderUnit* Method_1_CA09E5F34D65E9F3(::System::String* a1)
		{
			return ((::MoleMole::Timeline::FloatRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA09E5F34D65E9F3_OFFSET))(this, a1);
		}

		::System::Void Method_1_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
		}

		::UnityEngine::Material* Method_1_3F6A1E1F41DFF304()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_3F6A1E1F41DFF304_OFFSET))(this);
		}

		::System::Boolean Method_1_4B374FDE77243500(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4B374FDE77243500_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_B03BC991FA3CFAB0(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_B03BC991FA3CFAB0_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_6319F5A4521BE9B4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6319F5A4521BE9B4_OFFSET))(this);
		}

		::System::Void Method_1_CD1D8725807FDBA7(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD1D8725807FDBA7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_F3347DA1A8C7E499(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F3347DA1A8C7E499_OFFSET))(this, a1);
		}

		::System::Void Method_1_27768B158F54F431(::System::String* a1, ::UnityEngine::Texture* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_27768B158F54F431_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_821BBDC04720A2EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* Method_1_F55104B9B863B6F0()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F55104B9B863B6F0_OFFSET))(this);
		}

		::System::Void Method_1_F96B1C7229DF29DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F96B1C7229DF29DF_OFFSET))(this);
		}

		::System::Void Method_1_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_1_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_1_03C9423DB0AB525F(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_03C9423DB0AB525F_OFFSET))(this, a1);
		}

		::System::Void Method_1_DFA330684A0231AB(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_DFA330684A0231AB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0A94652C700DE681(::System::String* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_0A94652C700DE681_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_FD1A8012013ED9C5_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_D9858DD9EC2E33CE(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D9858DD9EC2E33CE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_AFEB0530F4ADCDCF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AFEB0530F4ADCDCF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_22A1AF9593D03312(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_22A1AF9593D03312_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D18ABDBF76456C4E(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_D18ABDBF76456C4E_OFFSET))(this, a1);
		}

		::System::Void Method_1_AB7ED27CAB69BE58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
		}
	};
}
