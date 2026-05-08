#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYAIPATHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16055590)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoBangbooPartyAIPathPoint_TypeDefinitionIndex = 58786;

	class MonoBangbooPartyAIPathPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsFirst; // 0x18
		::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* NextLinks; // 0x20
		::UnityEngine::GameObject* BlockingDoor; // 0x28
		::System::Boolean IsJump; // 0x30
		::System::Boolean IsJumpDash; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYAIPATHPOINT__CTOR_OFFSET))(this);
		}
	};
}
