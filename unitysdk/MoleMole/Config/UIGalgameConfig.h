#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GalSplitScreenParam.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UIGALGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1487D8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIGalgameConfig_TypeDefinitionIndex = 72721;

	class UIGalgameConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::Config::GalSplitScreenParam NormalSplitScreenParam; // 0x58
		::System::Single doubleScreenImgShiftAmount; // 0x68
		::System::Single tripleScreenImgShiftAmount; // 0x6C
		::System::Single outsideScreenImgShiftAmount; // 0x70
		::System::Single tripleStageExitImgShiftAmount; // 0x74
		::System::Single singleStageFadeInBGDelay; // 0x78
		::System::Single singleStagefadeInBGAnimDuration; // 0x7C
		::UnityEngine::AnimationCurve* singleStageFadeInBGMoveCurve; // 0x80
		::System::Single singleStageFadeInAvatarDelay; // 0x88
		::System::Single singleStageFadeOutBGDelay; // 0x8C
		::System::Single singleStagefadeOutBGAnimDuration; // 0x90
		::UnityEngine::AnimationCurve* singleStageFadeOutBGMoveCurve; // 0x98
		::System::Single singleStageFadeOutAvatarDelay; // 0xA0
		::System::Single singleStageFadeOutPageAnimDelay; // 0xA4
		::System::Single singleStageBlackMaskFadeOutPageAnimDelay; // 0xA8
		::System::Single singleStageBlackMaskTransitionFadeOutPageAnimDelay; // 0xAC
		::System::Single doubleStageFadeInBGDelay; // 0xB0
		::System::Single doubleStageFadeInBGAnimDuration; // 0xB4
		::System::Single doubleStageFadeInBGAnimDistance; // 0xB8
		::UnityEngine::AnimationCurve* doubleStageFadeInBGMoveCurve; // 0xC0
		::System::Single doubleStageFadeOutBGDelay; // 0xC8
		::System::Single doubleStagefadeOutBGAnimDuration; // 0xCC
		::System::Single doubleStageFadeOutBGAnimDistance; // 0xD0
		::UnityEngine::AnimationCurve* doubleStageFadeOutBGMoveCurve; // 0xD8
		::System::Single doubleStageFadeOutAvatarDelay; // 0xE0
		::System::Single doubleStageFadeOutPageAnimDelay; // 0xE4
		::System::Single doubleStageBlackMaskFadeOutPageAnimDelay; // 0xE8
		::System::Single doubleStageBlackMaskTransitionFadeOutPageAnimDelay; // 0xEC
		::System::Single tripleStageFadeInBGDelay; // 0xF0
		::System::Single tripleStageFadeInAnimDuration; // 0xF4
		::System::Single tripleStageFadeOutBGDelay; // 0xF8
		::System::Single tripleStagefadeOutBGAnimDuration; // 0xFC
		::System::Single tripleStageFadeOutBGAnimDistance; // 0x100
		::UnityEngine::AnimationCurve* tripleStageFadeOutBGMoveCurve; // 0x108
		::System::Single tripleStageFadeOutAvatarDelay; // 0x110
		::System::Single tripleStageFadeOutPageAnimDelay; // 0x114
		::System::Single tripleStageBlackMaskFadeOutPageAnimDelay; // 0x118
		::System::Single tripleStageBlackMaskTransitionFadeOutPageAnimDelay; // 0x11C
		::System::Single tripleStageEnterAvatarPosModifyWhenFadeInNewStage; // 0x120
		::System::Single tripleStageExitAvatarPosModifyWhenFadeInNewStage; // 0x124
		::System::Single tripleStageExitBgMoveFactor; // 0x128
		::System::Single smallFigureFOV; // 0x12C
		::System::Single bgEnlargeFactor; // 0x130
		::System::Single ArgueEnterPerformDelay_SwitchScene; // 0x134
		::MoleMole::Config::GalSplitScreenParam ArgueNormalSplitScreenParam; // 0x138
		::MoleMole::Config::GalSplitScreenParam ArgueShakeSplitScreenParam; // 0x148
		::System::Single DEFAULT_AUTO_CLICK_COUNT_DOWN; // 0x158
		::System::Single NARRATOR_AUTO_CLICK_COUNT_DOWN_PER_LINE; // 0x15C
		::System::Single NARRATOR_AUTO_CLICK_MIN_COUNT_DOWN; // 0x160
		::System::Single NARRATOR_AUTO_CLICK_MAX_COUNT_DOWN; // 0x164
		::System::Single subStoryNodeProtetTime; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
