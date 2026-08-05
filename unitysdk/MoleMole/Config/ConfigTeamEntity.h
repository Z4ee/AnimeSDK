#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/FeverBeingHitType.h"
#include "unitysdk/MoleMole/Config/FeverModifyType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"

namespace MoleMole::Config { class ConfigFeverLevel; }
namespace MoleMole::Config { class ConfigFeverMode; }
namespace MoleMole::Config { class ConfigTeamComboSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B918A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeamEntity_TypeDefinitionIndex = 85292;

	class ConfigTeamEntity : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DefaultAbilities; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* DefaultGlobalAbilities; // 0x60
		::System::Boolean EnableTeamNewFeverExQTELog; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* FeverGradeList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* FeverAvatarNumReviseRatioMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>* FeverSoundDict; // 0x80
		::System::Boolean EnableTeamComboFeverExQTELog; // 0x88
		::System::Single ComboFadeTickTime; // 0x8C
		::System::Boolean EnableComboFadeTick; // 0x90
		::System::Boolean EnableComboRatioFadeTick; // 0x91
		::System::Boolean EnableRatioToCrossFormat; // 0x92
		::System::Boolean EnableRatioUpFever; // 0x93
		::System::Single MaxFeverValue; // 0x94
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HitTagFeverMap; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>* TeamComboSettingList; // 0xA0
		::System::Collections::Generic::List_1<::System::String*>* ComboNumSpritePathList; // 0xA8
		::System::Boolean EnableFeverSystemLog; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>* FeverLevelConfigList; // 0xB8
		::MoleMole::Config::ConfigFeverMode* FeverModeConfig; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>* FeverBeHitEffectModifyDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>* FeverModifyDict; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY__CTOR_OFFSET))(this);
		}
	};
}
