#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x656B60)
#define NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x656BB0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_PhysicsHandle_TypeDefinitionIndex = 64873;

	struct alignas(4) NPCPhysicsManager_PhysicsHandle
	{
		::System::Int32 PhysicsID; // 0x10

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_RESET_OFFSET))(this);
		}
	};
}
