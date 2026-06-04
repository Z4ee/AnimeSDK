#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

namespace RPG::Client::LittleGame::PingPong { class PingPongCameraView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBOARDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE36890)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongBoardView_TypeDefinitionIndex = 71245;

	class PingPongBoardView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::UnityEngine::Transform* LeftDownOrigin; // 0x38
		::RPG::Client::LittleGame::PingPong::PingPongCameraView* Camera; // 0x40
		::System::Int32 Column; // 0x48
		::System::Int32 Row; // 0x4C
		::System::Int32 MovableRow; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGBOARDVIEW__CTOR_OFFSET))(this);
		}
	};
}
