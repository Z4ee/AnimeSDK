#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM_PLAYPLAYERFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xC8AB8F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8AB4F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8AB990)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__GETRANKSTATENAME_OFFSET UNITYSDK_OFFSET(0xC8AB870)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC8AB3C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingScoreRankItem_TypeDefinitionIndex = 80649;

	class MonoB51RacingScoreRankItem : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* RANK_STATE_RANK1; // 0x0
		// static const ::System::String* RANK_STATE_RANK2; // 0x0
		// static const ::System::String* RANK_STATE_RANK3; // 0x0
		// static const ::System::String* RANK_STATE_NORMAL; // 0x0
		// static const ::System::String* PLAYER_STATE_MAIN; // 0x0
		// static const ::System::String* PLAYER_STATE_NORMAL; // 0x0
		// static const ::System::String* PLAYER_FADE_IN_ANIM_CLIP; // 0x0
		::RPG::Client::UIStateCtrl* _RankStateCtrl; // 0x38
		::RPG::Client::UIStateCtrl* _PlayerStateCtrl; // 0x40
		::RPG::Client::LocalizedText* _RankText; // 0x48
		::RPG::Client::LocalizedText* _NameText; // 0x50
		::RPG::Client::LocalizedText* _ScoreText; // 0x58
		::UnityEngine::Animation* _Animation; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM_SETUPVIEW_OFFSET))(this);
		}

		::System::Void PlayPlayerFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM_PLAYPLAYERFADEINANIMATION_OFFSET))(this);
		}

		static ::System::String* _GetRankStateName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSCORERANKITEM__GETRANKSTATENAME_OFFSET))(a1);
		}
	};
}
