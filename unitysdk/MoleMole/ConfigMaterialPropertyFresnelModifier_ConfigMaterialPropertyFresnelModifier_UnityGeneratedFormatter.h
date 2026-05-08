#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyFresnelModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x183DD5C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x183DD5D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x183DE4F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183DEDB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x183DED70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 66884;

	class ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyFresnelModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43500);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43508);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43510);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43518);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43520);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43528);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyFresnelModifier_ConfigMaterialPropertyFresnelModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyFresnelModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyFresnelModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_CONFIGMATERIALPROPERTYFRESNELMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
