#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A98E50)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A98E60)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A99040)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A991E0)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A991A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRealtimeQTE_ConfigRealtimeQTE_UnityGeneratedFormatter_TypeDefinitionIndex = 62742;

	class ConfigRealtimeQTE_ConfigRealtimeQTE_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigRealtimeQTE*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigRealtimeQTE_ConfigRealtimeQTE_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigRealtimeQTE_ConfigRealtimeQTE_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigRealtimeQTE*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigRealtimeQTE*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CONFIGREALTIMEQTE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
