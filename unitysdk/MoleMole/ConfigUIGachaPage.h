#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUIGACHAPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC1700)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIGachaPage_TypeDefinitionIndex = 43398;

	class ConfigUIGachaPage : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single rolePoolBlackMaskTime; // 0x58
		::System::Single delayShowRewardsTime; // 0x5C
		::System::Single showRewardInterval; // 0x60
		::System::Single activateAnimInterval; // 0x64
		::UnityEngine::AnimationCurve* activateAnimCurve; // 0x68
		::System::Single rewardItemPlaySoundDelay; // 0x70
		::System::Single showConfirmBtnDelay; // 0x74
		::System::Single enableClickMaskDelay; // 0x78
		::System::Single uiGroupIconSwitchInterval; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIGACHAPAGE__CTOR_OFFSET))(this);
		}
	};
}
