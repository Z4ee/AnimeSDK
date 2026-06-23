#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class BuffAttackProperty; }
namespace MoleMole::Config { class BuffVariantElementAttack; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F343A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F343B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18F34650)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F34840)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F34800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityUnderlyingAnimEvents_ConfigEntityUnderlyingAnimEvents_UnityGeneratedFormatter_TypeDefinitionIndex = 55244;

	class ConfigEntityUnderlyingAnimEvents_ConfigEntityUnderlyingAnimEvents_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAttackProperty*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAttackProperty*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityUnderlyingAnimEvents_ConfigEntityUnderlyingAnimEvents_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x303A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffVariantElementAttack*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffVariantElementAttack*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityUnderlyingAnimEvents_ConfigEntityUnderlyingAnimEvents_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x303A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityUnderlyingAnimEvents_ConfigEntityUnderlyingAnimEvents_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x303B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_CONFIGENTITYUNDERLYINGANIMEVENTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
