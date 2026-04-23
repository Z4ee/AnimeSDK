#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGCOLLIDERRADIUSVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E5BB0)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongColliderRadiusView_TypeDefinitionIndex = 70432;

	class PingPongColliderRadiusView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::System::Single Radius; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGCOLLIDERRADIUSVIEW__CTOR_OFFSET))(this);
		}
	};
}
