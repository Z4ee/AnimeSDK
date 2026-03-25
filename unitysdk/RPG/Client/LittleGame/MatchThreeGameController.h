#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_DC55B9E766BF1C8D;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET UNITYSDK_OFFSET(0x9A2DD70)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9A2D9C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET UNITYSDK_OFFSET(0x9A2DB40)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A2DE60)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9A2DE00)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeGameController_TypeDefinitionIndex = 62318;

	class MatchThreeGameController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 ROW_COUNT = 0x7; // 0x0
		// static const ::System::UInt32 COLUMN_COUNT = 0x7; // 0x0
		::RPG::Client::MatchThreeBoard* ChessBoardView; // 0x18
		::Il2CppArray<::UnityEngine::RectTransform*>* BirdAdaptivePositions; // 0x20
		::Class_1_DC55B9E766BF1C8D* _EcsInstance; // 0x28
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* _BattleField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* battleField)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET))(this, battleField);
		}

		::System::Void TryStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET))(this);
		}

		::System::Void DestroyGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET))(this, arg);
		}
	};
}
