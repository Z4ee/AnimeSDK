#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyTransitionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192B3DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192B3E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x192B50E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B5BE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B5BA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 47826;

	class ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyTransitionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E60);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E68);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyTransitionModifier_ConfigMaterialPropertyTransitionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyTransitionModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyTransitionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyTransitionModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyTransitionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
