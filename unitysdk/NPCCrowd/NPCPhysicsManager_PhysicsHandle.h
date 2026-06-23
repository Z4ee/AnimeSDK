#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x74E5A0)
#define NPCCROWD_NPCPHYSICSMANAGER_PHYSICSHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x74E5F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_PhysicsHandle_TypeDefinitionIndex = 48672;

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
