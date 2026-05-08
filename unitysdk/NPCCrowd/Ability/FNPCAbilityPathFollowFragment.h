#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment__pathFollowNodes_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_ADDNODE_OFFSET UNITYSDK_OFFSET(0x582190)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_CLEARNODE_OFFSET UNITYSDK_OFFSET(0x5821F0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_GETNODE_OFFSET UNITYSDK_OFFSET(0x5820D0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_SETNODE_OFFSET UNITYSDK_OFFSET(0x582130)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragment_TypeDefinitionIndex = 67841;

	struct alignas(4) FNPCAbilityPathFollowFragment
	{
		// static const ::System::Byte MaxNodeNum = 0x40; // 0x0
		::System::Boolean enable; // 0x10
		::UnityEngine::Vector3 aim; // 0x14
		::UnityEngine::Vector3 nextAim; // 0x20
		::UnityEngine::Vector3 startPos; // 0x2C
		::UnityEngine::Vector3 forward; // 0x38
		::System::Single desiredSpeed; // 0x44
		::System::Single maxDistance; // 0x48
		::System::Single progressDistance; // 0x4C
		::System::Boolean bIsMutilPointPath; // 0x50
		::System::Boolean bIsPassedAim; // 0x51
		::System::Boolean bIsStartMoveProcess; // 0x52
		::UnityEngine::Vector3 wayOffset; // 0x54
		::System::SByte wayIdx; // 0x60
		::System::SByte nextPathFollowNodeIdx; // 0x61
		::System::SByte pathFollowNodeNum; // 0x62
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragment__pathFollowNodes_e__FixedBuffer pathFollowNodes; // 0x64

		::System::UInt16 GetNode(::System::Int32 idx)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_GETNODE_OFFSET))(this, idx);
		}

		::System::Void SetNode(::System::Int32 idx, ::System::UInt16 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_SETNODE_OFFSET))(this, idx, val);
		}

		::System::Void AddNode(::System::UInt16 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_ADDNODE_OFFSET))(this, val);
		}

		::System::Void ClearNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENT_CLEARNODE_OFFSET))(this);
		}
	};
}
