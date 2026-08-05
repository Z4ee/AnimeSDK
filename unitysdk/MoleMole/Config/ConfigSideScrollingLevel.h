#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Battle/SideScrollingHeatKillMonsterType.h"
#include "unitysdk/MoleMole/Battle/SideScrollingScoreGetType.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSideScrollingLevel_TypeDefinitionIndex = 49372;

	class ConfigSideScrollingLevel : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigSideScrollingCamera* CameraConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>* OverrideCameraConfigDict; // 0x60
		::System::Single PartnerAvatarCoAttackCDTime; // 0x68
		::System::Int32 PartnerAvatarSwitchInIndex; // 0x6C
		::System::String* PartnerAvatarSwitchInLockTarget; // 0x70
		::MoleMole::Config::ConfigPosRot* PartnerAvatarSwitchInDefaultPosRot; // 0x78
		::System::Int32 PartnerAvatarSwitchOutIndex; // 0x80
		::System::Single PartnerAvatarSwitchOutDelayTime; // 0x84
		::Foundation::AssetPath PartnerAvatarCoAttackBtnIconPath; // 0x88
		::System::String* ProvocationAnimatorBoolParamName; // 0x98
		::System::String* ProvocationCustomEventKey; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>* HeatKillMonsterTypeCountMap; // 0xA8
		::System::Int32 HeatNormalEnterConditionKillNum; // 0xB0
		::System::Single HeatNormalHoldTime; // 0xB4
		::System::Int32 HeatNormalBonusKillNum; // 0xB8
		::System::Single HeatNormalBonusTime; // 0xBC
		::System::Int32 HeatMaxEnterConditionKillNum; // 0xC0
		::System::Single HeatMaxEnterConditionKillTime; // 0xC4
		::System::Single HeatMaxHoldTime; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>* ScoreMap; // 0xD0
		::System::String* ScoreExPunchCustomEvenetKey; // 0xD8
		::System::Single ScoreGetAddRatioByAbyssHeatBuff; // 0xE0
		::System::Single MaxScore; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL__CTOR_OFFSET))(this);
		}
	};
}
