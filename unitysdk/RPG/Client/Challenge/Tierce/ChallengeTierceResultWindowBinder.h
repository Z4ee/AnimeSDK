#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class RPGFadeAnimation; }
namespace RPG::Client::Challenge { class ChallengeResultRewardListControl; }
namespace RPG::Client::Challenge { class ChallengeTargetInfoRowControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultStageControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetListControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOWBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA04CD0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultWindowBinder_TypeDefinitionIndex = 80215;

	class ChallengeTierceResultWindowBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnimatorButton* BtnExit; // 0x18
		::RPG::Client::AnimatorButton* BtnRestart; // 0x20
		::RPG::Client::AnimatorButton* BtnContinue; // 0x28
		::RPG::Client::LocalizedText* TextContinue; // 0x30
		::RPG::Client::TextID TextIDNextStage; // 0x38
		::RPG::Client::TextID TextIDBackToMemory; // 0x48
		::RPG::Client::TextID TextIDBackToBoss; // 0x58
		::RPG::Client::TextID TextIDBackToStory; // 0x68
		::RPG::Client::LocalizedText* TextChallengeName; // 0x78
		::RPG::Client::LocalizedText* TextResult; // 0x80
		::RPG::Client::TextID TextIDFinished; // 0x88
		::RPG::Client::TextID TextIDSucceeded; // 0x98
		::RPG::Client::TextID TextIDFailed; // 0xA8
		::UnityEngine::RectTransform* NodeLeftRoundCount; // 0xB8
		::RPG::Client::LocalizedText* TextLeftRoundCount; // 0xC0
		::UnityEngine::RectTransform* NodeObtainedScore; // 0xC8
		::RPG::Client::LocalizedText* TextObtainedScore; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceResultStageControl*>* Stages; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* NodesNewBestRecord; // 0xE0
		::UnityEngine::RectTransform* NodeTargetsHeader; // 0xE8
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetListControl* TargetList; // 0xF0
		::UnityEngine::RectTransform* NodePassTargetHeader; // 0xF8
		::RPG::Client::Challenge::ChallengeTargetInfoRowControl* PassTarget; // 0x100
		::RPG::Client::TextID TextIDPassTargetBoss; // 0x108
		::RPG::Client::TextID TextIDPassTargetStory; // 0x118
		::RPG::Client::Challenge::ChallengeResultRewardListControl* RewardList; // 0x128
		::RPG::Client::RPGFadeAnimation* FadeAnimation; // 0x130
		::UnityEngine::Animation* Animation; // 0x138
		::UnityEngine::AnimationClip* AnimClipFailure; // 0x140
		::UnityEngine::UI::ScrollRect* ScrollRect; // 0x148
		::RPG::Client::MonoInControlButton* InControlBtnContinue; // 0x150
		::RPG::Client::MonoInControlTip* InControlTipContinue; // 0x158
		::RPG::Client::AnimatorButton* BtnRewardDetail; // 0x160
		::System::String* ActionNameContinue; // 0x168
		::System::String* ActionNameReturn; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOWBINDER__CTOR_OFFSET))(this);
		}
	};
}
