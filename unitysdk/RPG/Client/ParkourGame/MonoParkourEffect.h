#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xDA28750)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourEffect_TypeDefinitionIndex = 74039;

	class MonoParkourEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::EffectConfig SpeedUpEffect; // 0x18
		::RPG::Client::ParkourGame::EffectConfig SlowDownEffect; // 0x40
		::RPG::Client::ParkourGame::EffectConfig LoopTailEffect; // 0x68
		::RPG::Client::ParkourGame::EffectConfig SuperStarEffect; // 0x90
		::RPG::Client::ParkourGame::EffectConfig CarEffect; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOUREFFECT__CTOR_OFFSET))(this);
		}
	};
}
