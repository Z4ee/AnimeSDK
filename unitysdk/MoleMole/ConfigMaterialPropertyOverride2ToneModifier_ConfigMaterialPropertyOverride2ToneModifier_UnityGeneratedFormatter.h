#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueLightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValuePointSpace.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigMaterialPropertyOverride2ToneModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D78460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D78470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D79AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D7A7C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7A780)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 49839;

	class ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA58);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyOverride2ToneModifier_ConfigMaterialPropertyOverride2ToneModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EAC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverride2ToneModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
