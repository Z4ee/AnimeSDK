#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongColliderRadiusView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBULLETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7D50)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongBulletView_TypeDefinitionIndex = 76195;

	class PingPongBulletView : public ::RPG::Client::LittleGame::PingPong::PingPongColliderRadiusView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBULLETVIEW__CTOR_OFFSET))(this);
		}
	};
}
