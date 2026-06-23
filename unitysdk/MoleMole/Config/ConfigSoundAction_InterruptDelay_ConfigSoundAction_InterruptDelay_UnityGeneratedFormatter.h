#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_InterruptDelay; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A354930)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A354940)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A354B20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A354CC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A354C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_InterruptDelay_ConfigSoundAction_InterruptDelay_UnityGeneratedFormatter_TypeDefinitionIndex = 69301;

	class ConfigSoundAction_InterruptDelay_ConfigSoundAction_InterruptDelay_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_InterruptDelay*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_InterruptDelay_ConfigSoundAction_InterruptDelay_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D6E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_InterruptDelay*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_InterruptDelay*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_InterruptDelay*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_InterruptDelay*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_CONFIGSOUNDACTION_INTERRUPTDELAY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
