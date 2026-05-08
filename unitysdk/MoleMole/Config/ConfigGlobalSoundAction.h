#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186BA180)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_RUMTIMERELOAD_OFFSET UNITYSDK_OFFSET(0x186B9F30)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186BA340)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x186BA3A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundAction_TypeDefinitionIndex = 56309;

	class ConfigGlobalSoundAction : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* comments; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* actions; // 0x60
		::MoleMole::Config::ISoundActionTriggerCondition* condition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION__CTOR_OFFSET))(this);
		}

		::System::Void RumtimeReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_RUMTIMERELOAD_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
