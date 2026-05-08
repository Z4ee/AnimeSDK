#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_When; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A9DA20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A9DA30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A9DCD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A9DEC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9DE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_When_ConfigSoundAction_When_UnityGeneratedFormatter_TypeDefinitionIndex = 79255;

	class ConfigSoundAction_When_ConfigSoundAction_When_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_When*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_ConfigSoundAction_When_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31FF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_ConfigSoundAction_When_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31FF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_ConfigSoundAction_When_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32000);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_When*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_When*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CONFIGSOUNDACTION_WHEN_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
