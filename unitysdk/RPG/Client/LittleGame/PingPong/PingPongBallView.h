#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongColliderRadiusView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBALLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7CC0)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongBallView_TypeDefinitionIndex = 76193;

	class PingPongBallView : public ::RPG::Client::LittleGame::PingPong::PingPongColliderRadiusView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBALLVIEW__CTOR_OFFSET))(this);
		}
	};
}
