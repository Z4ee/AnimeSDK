#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEINMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1020)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDBubbleFadeinMessage_TypeDefinitionIndex = 72658;

	class CakeRaceHUDBubbleFadeinMessage : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PivotGameObject; // 0x10
		::System::String* IconPath; // 0x18
		::UnityEngine::GameObject* Key; // 0x20
		::System::String* TextStr; // 0x28
		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType BubbleType; // 0x30
		::System::Boolean IsForceShow; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEINMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
