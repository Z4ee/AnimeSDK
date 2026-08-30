#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_PLAY_OFFSET UNITYSDK_OFFSET(0xE242FD0)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE242EE0)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETRANKUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xE242F30)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETRANKUPSLIDER_OFFSET UNITYSDK_OFFSET(0xE242F80)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0xE242B40)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xE2431E0)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__ONPLAYINGFINISH_OFFSET UNITYSDK_OFFSET(0xE242E70)
#define RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__ONPROGRESS_OFFSET UNITYSDK_OFFSET(0xE242C30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int MonoTrainPartyMeetingRankAnim_TypeDefinitionIndex = 74178;

	class MonoTrainPartyMeetingRankAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Duration; // 0x18
		::RPG::Client::LocalizedText* _TotalScoreText; // 0x20
		::RPG::Client::LocalizedText* _CurScoreText; // 0x28
		::UnityEngine::UI::Slider* _RankUpSlider; // 0x30
		::System::UInt32 _CurScore; // 0x38
		::System::UInt32 _TotalScore; // 0x3C
		::System::Boolean _IsPlaying; // 0x40
		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* _RankInfo; // 0x48
		::System::Single _CumulativeTime; // 0x50
		::System::Action_1<::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*>* _OnRankUpgrade; // 0x58
		::System::Action* _OnFinish; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_UPDATE_OFFSET))(this);
		}

		::System::Void SetFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetRankUpCallback(::System::Action_1<::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETRANKUPCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetRankUpSlider(::UnityEngine::UI::Slider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_SETRANKUPSLIDER_OFFSET))(this, a1);
		}

		::System::Void Play(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__ONPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _OnPlayingFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MONOTRAINPARTYMEETINGRANKANIM__ONPLAYINGFINISH_OFFSET))(this);
		}
	};
}
