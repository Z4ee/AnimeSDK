#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMazeLockTargetState.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xE2220)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_SETSCORE_OFFSET UNITYSDK_OFFSET(0xE22E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_UNIONSTATE_OFFSET UNITYSDK_OFFSET(0xE2340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockTargetComponent_EntityLockInfo_TypeDefinitionIndex = 53155;

	struct alignas(8) PlayerLockTargetComponent_EntityLockInfo
	{
		::System::UInt32 runtimeID; // 0x10
		::System::Single distance; // 0x14
		::System::Single angle; // 0x18
		::System::Single score; // 0x1C
		::RPG::GameCore::EMazeLockTargetState lockState; // 0x20
		::UnityEngine::Transform* SelectTransform; // 0x28

		::System::Void Init(::System::UInt32 runtimeID, ::System::Single distance, ::System::Single angle, ::System::Single score, ::UnityEngine::Transform* selectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_INIT_OFFSET))(this, runtimeID, distance, angle, score, selectTransform);
		}

		::System::Void SetScore(::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_SETSCORE_OFFSET))(this, score);
		}

		::System::Void UnionState(::RPG::GameCore::EMazeLockTargetState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_UNIONSTATE_OFFSET))(this, newState);
		}
	};
}
