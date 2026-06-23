#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavigationObstacleItem_TypeDefinitionIndex = 66743;

	struct alignas(4) NavigationObstacleItem
	{
		::System::UInt32 EntityId; // 0x10

		::System::Void _ctor(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__CTOR_OFFSET))(this, entityId);
		}
	};
}
