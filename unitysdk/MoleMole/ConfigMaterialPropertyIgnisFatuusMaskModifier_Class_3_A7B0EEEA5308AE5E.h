#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyIgnisFatuusMaskModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C4E80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C4E90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4C5B40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C62C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C6280)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex = 55147;

	class ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA20);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyIgnisFatuusMaskModifier_Class_3_A7B0EEEA5308AE5E_TypeDefinitionIndex)->GetStaticField(0x3CA50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_CLASS_3_A7B0EEEA5308AE5E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
