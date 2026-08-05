#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9017D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9017E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_WRITE_OFFSET UNITYSDK_OFFSET(0x1B904490)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B905E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B905DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex = 49019;

	class ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackProperty*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39BF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_Class_3_B187DC64B66BB16E_TypeDefinitionIndex)->GetStaticField(0x39C78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackProperty*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackProperty*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLASS_3_B187DC64B66BB16E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
