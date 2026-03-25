#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGCAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38AD0)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongCameraView_TypeDefinitionIndex = 62432;

	class PingPongCameraView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x38
		::System::Single FollowRacketRatio; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGCAMERAVIEW__CTOR_OFFSET))(this);
		}
	};
}
