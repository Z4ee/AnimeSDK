#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUISound_ServerSoundActionClearConfig; }
namespace MoleMole { class ConfigUISound_StateTriggerConfig; }
namespace MoleMole { class ConfigUISound_TransferSoundConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISOUND_RELOADDATA_OFFSET UNITYSDK_OFFSET(0xE9864A0)
#define MOLEMOLE_CONFIGUISOUND__CTOR_OFFSET UNITYSDK_OFFSET(0xE9864F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_TypeDefinitionIndex = 41776;

	class ConfigUISound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* bossStates; // 0x58
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* sectionsNotInterruptBGM; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::ConfigUISound_TransferSoundConfig*>* transferSoundConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>* npcTagsToSwitch; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::ConfigUISound_ServerSoundActionClearConfig*>* serverSoundActionClearConfigs; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigUISound_StateTriggerConfig*>* stateConfigs; // 0x80
		::System::Single cullingMarginPercent; // 0x88
		::System::Single cullingMinDurationExempt; // 0x8C
		::System::Collections::Generic::List_1<::System::String*>* cullingWhitelistTags; // 0x90
		::System::Collections::Generic::List_1<::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC>* gamePlayMixPriority; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND__CTOR_OFFSET))(this);
		}

		::System::Void ReloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_RELOADDATA_OFFSET))(this);
		}
	};
}
