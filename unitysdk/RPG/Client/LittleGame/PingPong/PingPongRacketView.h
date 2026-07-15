#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGRACKETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB2370)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongRacketView_TypeDefinitionIndex = 72768;

	class PingPongRacketView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGRACKETVIEW__CTOR_OFFSET))(this);
		}
	};
}
