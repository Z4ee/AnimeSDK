#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEINMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA676730)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDBubbleFadeinMessage_TypeDefinitionIndex = 71636;

	class CakeRaceHUDBubbleFadeinMessage : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* TextStr; // 0x18
		::UnityEngine::GameObject* Key; // 0x20
		::UnityEngine::GameObject* PivotGameObject; // 0x28
		::System::Boolean IsForceShow; // 0x30
		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType BubbleType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEHUDBUBBLEFADEINMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
