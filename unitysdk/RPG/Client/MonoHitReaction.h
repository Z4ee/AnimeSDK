#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IKHitReaction; }

#define RPG_CLIENT_MONOHITREACTION_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1ACDEE40)
#define RPG_CLIENT_MONOHITREACTION_START_OFFSET UNITYSDK_OFFSET(0x1ACDEDE0)
#define RPG_CLIENT_MONOHITREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDEE90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHitReaction_TypeDefinitionIndex = 68572;

	class MonoHitReaction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ReactionEnabled; // 0x18
		::System::Boolean DisableHitAnimation; // 0x19
		::RPG::Client::IKHitReaction* Solver; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHITREACTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHITREACTION_START_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHITREACTION_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
