#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZESTREAMING_OFFSET UNITYSDK_OFFSET(0x10D528D0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10D52680)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x10D52920)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D529B0)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int ChildTriggerForwarder_TypeDefinitionIndex = 67500;

	class ChildTriggerForwarder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::MoleMole::Battle::Entity*>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void InitializeStreaming(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZESTREAMING_OFFSET))(this, a1);
		}

		::System::Void OnTrigger(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
