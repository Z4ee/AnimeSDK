#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONCHARACTERCOLLISION_OFFSET UNITYSDK_OFFSET(0x9ECAA40)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9ECAB60)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9ECAAE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECABA0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourCharacterCollision_TypeDefinitionIndex = 60791;

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

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTERCOLLISION_ONDISABLE_OFFSET))(this);
		}
	};
}
