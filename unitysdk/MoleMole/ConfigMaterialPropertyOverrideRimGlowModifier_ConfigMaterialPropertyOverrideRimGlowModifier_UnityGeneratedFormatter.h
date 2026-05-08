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

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x153DCD80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x153DCD90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x153DE550)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x153DF320)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x153DF2E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 73239;

	class ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x349F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverrideRimGlowModifier_ConfigMaterialPropertyOverrideRimGlowModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideRimGlowModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
