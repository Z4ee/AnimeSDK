#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_4C75491B780B94AA;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET UNITYSDK_OFFSET(0xBE2BE70)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xBE2BAC0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET UNITYSDK_OFFSET(0xBE2BC40)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2BF90)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xBE2BF30)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeGameController_TypeDefinitionIndex = 71133;

	class MatchThreeGameController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 ROW_COUNT = 0x7; // 0x0
		// static const ::System::UInt32 COLUMN_COUNT = 0x7; // 0x0
		::RPG::Client::MatchThreeBoard* ChessBoardView; // 0x18
		::Il2CppArray<::UnityEngine::RectTransform*>* BirdAdaptivePositions; // 0x20
		::Class_1_4C75491B780B94AA* _EcsInstance; // 0x28
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* _BattleField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void TryStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET))(this);
		}

		::System::Void DestroyGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET))(this, a1);
		}
	};
}
