#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AudioBasePath; }
namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D1BE20)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D1BE30)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D1C010)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D1C1B0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1C170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioBasePath_ConfigAudioBasePath_UnityGeneratedFormatter_TypeDefinitionIndex = 71495;

	class ConfigAudioBasePath_ConfigAudioBasePath_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAudioBasePath*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioBasePath_ConfigAudioBasePath_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47680);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioBasePath_ConfigAudioBasePath_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47688);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioBasePath*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioBasePath*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CONFIGAUDIOBASEPATH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
