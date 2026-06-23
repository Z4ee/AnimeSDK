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

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x106CE360)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x106CE370)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x106D1170)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x106D2AD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x106D2A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex = 59114;

	class ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackProperty*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDataType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SpecialDamageTextType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitAnimDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicInt*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitStrengthType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitForwardType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_ConfigEntityAttackProperty_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackProperty*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackProperty*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CONFIGENTITYATTACKPROPERTY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
