#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEOUTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA676820)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDBubbleFadeoutMessage_TypeDefinitionIndex = 71637;

	class CakeRaceHUDBubbleFadeoutMessage : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Key; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType BubbleType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEOUTMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
