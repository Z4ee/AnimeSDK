#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYUNITVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38B40)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongEnemyUnitView_TypeDefinitionIndex = 62437;

	class PingPongEnemyUnitView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::UnityEngine::GameObject* Breakable; // 0x38
		::UnityEngine::GameObject* Unbreakable; // 0x40
		::UnityEngine::GameObject* Core; // 0x48
		::UnityEngine::GameObject* Shooting; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYUNITVIEW__CTOR_OFFSET))(this);
		}
	};
}
