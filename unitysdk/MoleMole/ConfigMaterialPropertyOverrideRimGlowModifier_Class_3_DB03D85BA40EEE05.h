#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyOverrideRimGlowModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF89D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF89E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_WRITE_OFFSET UNITYSDK_OFFSET(0x19FFA0E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FFAE90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFAE50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex = 41657;

	class ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C18);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C50);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_Class_3_DB03D85BA40EEE05_TypeDefinitionIndex)->GetStaticField(0x44C78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CLASS_3_DB03D85BA40EEE05_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
