#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongColliderRadiusView.h"

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGDROPITEMVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E5C60)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongDropItemView_TypeDefinitionIndex = 70433;

	class PingPongDropItemView : public ::RPG::Client::LittleGame::PingPong::PingPongColliderRadiusView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGDROPITEMVIEW__CTOR_OFFSET))(this);
		}
	};
}
