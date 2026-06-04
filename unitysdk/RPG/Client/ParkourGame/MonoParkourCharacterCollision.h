#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONCHARACTERCOLLISION_OFFSET UNITYSDK_OFFSET(0xC333E10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC333EB0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0xC333F30)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourCharacterCollision_TypeDefinitionIndex = 69214;

	class MonoParkourCharacterCollision : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourCharacter* Character; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Void OnCharacterCollision(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONCHARACTERCOLLISION_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONENABLE_OFFSET))(this);
		}
	};
}
