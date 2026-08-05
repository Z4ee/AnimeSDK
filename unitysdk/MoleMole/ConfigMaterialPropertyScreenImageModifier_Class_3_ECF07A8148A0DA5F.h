#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyScreenImageModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1351DC10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1351DC20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_WRITE_OFFSET UNITYSDK_OFFSET(0x1351F210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D69890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F__CTOR_OFFSET UNITYSDK_OFFSET(0x19D69850)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex = 60595;

	class ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyScreenImageModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C090);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C098);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyScreenImageModifier_Class_3_ECF07A8148A0DA5F_TypeDefinitionIndex)->GetStaticField(0x4C0F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyScreenImageModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyScreenImageModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyScreenImageModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyScreenImageModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_CLASS_3_ECF07A8148A0DA5F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
