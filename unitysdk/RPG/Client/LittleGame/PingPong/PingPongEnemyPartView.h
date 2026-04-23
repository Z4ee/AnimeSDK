#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYPARTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E5C90)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongEnemyPartView_TypeDefinitionIndex = 70435;

	class PingPongEnemyPartView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYPARTVIEW__CTOR_OFFSET))(this);
		}
	};
}
