#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMazeLockTargetState.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x15C9D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_SETSCORE_OFFSET UNITYSDK_OFFSET(0x15CA90)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_UNIONSTATE_OFFSET UNITYSDK_OFFSET(0x15CAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockTargetComponent_EntityLockInfo_TypeDefinitionIndex = 57811;

	struct alignas(8) PlayerLockTargetComponent_EntityLockInfo
	{
		::System::UInt32 runtimeID; // 0x10
		::System::Single distance; // 0x14
		::System::Single angle; // 0x18
		::System::Single score; // 0x1C
		::RPG::GameCore::EMazeLockTargetState lockState; // 0x20
		::UnityEngine::Transform* SelectTransform; // 0x28

		::System::Void Init(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_SETSCORE_OFFSET))(this, a1);
		}

		::System::Void UnionState(::RPG::GameCore::EMazeLockTargetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ENTITYLOCKINFO_UNIONSTATE_OFFSET))(this, a1);
		}
	};
}
