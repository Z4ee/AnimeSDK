#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_41DC55EACF71282F;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7C2F10)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C4520)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__GETPLAYERSTATENAME_OFFSET UNITYSDK_OFFSET(0xC7C43B0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__GETRANKSTATENAME_OFFSET UNITYSDK_OFFSET(0xC7C42D0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7C44D0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7C3FA0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__SHOULDSHOWSCORE_OFFSET UNITYSDK_OFFSET(0xC7C4450)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingResultRankItem_TypeDefinitionIndex = 81949;

	class MonoB51RacingResultRankItem : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* RANK_STATE_RANK1; // 0x0
		// static const ::System::String* RANK_STATE_RANK2; // 0x0
		// static const ::System::String* RANK_STATE_RANK3; // 0x0
		// static const ::System::String* RANK_STATE_NORMAL; // 0x0
		// static const ::System::String* PLAYER_STATE_MAIN_WIN; // 0x0
		// static const ::System::String* PLAYER_STATE_MAIN_LOSE; // 0x0
		// static const ::System::String* PLAYER_STATE_NORMAL; // 0x0
		// static const ::System::String* INFO_STATE_RESULT; // 0x0
		// static const ::System::String* INFO_STATE_READY; // 0x0
		::RPG::Client::UIStateCtrl* _RankStateCtrl; // 0x40
		::RPG::Client::UIStateCtrl* _PlayerStateCtrl; // 0x48
		::RPG::Client::UIStateCtrl* _InfoStateCtrl; // 0x50
		::RPG::Client::LocalizedText* _RankText; // 0x58
		::RPG::Client::LocalizedText* _PlayerRankText; // 0x60
		::UnityEngine::Transform* _RankFrame; // 0x68
		::UnityEngine::Transform* _RankIconPanel; // 0x70
		::RPG::Client::LocalizedText* _PlayerNameText; // 0x78
		::RPG::Client::LocalizedText* _TimeText; // 0x80
		::UnityEngine::Transform* _NewRecordPanel; // 0x88
		::RPG::Client::LocalizedText* _ScoreText; // 0x90
		::UnityEngine::Transform* _ScorePanel; // 0x98
		::UnityEngine::Transform* _LineNode; // 0xA0
		::UnityEngine::UI::Image* _TeamIconImage; // 0xA8
		::RPG::Client::LocalizedText* _PlayerTagText; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _ShouldShowScore(::Class_1_41DC55EACF71282F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_41DC55EACF71282F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__SHOULDSHOWSCORE_OFFSET))(this, a1);
		}

		::System::String* _GetRankStateName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__GETRANKSTATENAME_OFFSET))(this, a1);
		}

		static ::System::String* _GetPlayerStateName(::Class_1_41DC55EACF71282F* a1)
		{
			return ((::System::String*(*)(::Class_1_41DC55EACF71282F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGRESULTRANKITEM__GETPLAYERSTATENAME_OFFSET))(a1);
		}
	};
}
