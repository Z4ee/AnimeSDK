#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEMEQUALSFUNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x570420)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavigationObstacleItemEqualsFunc_TypeDefinitionIndex = 49502;

	struct alignas(1) NavigationObstacleItemEqualsFunc
	{
		/*
		::System::Boolean Equals(::NPCCrowd::Ability::NavigationObstacleItem left, ::NPCCrowd::Ability::NavigationObstacleItem right)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItem))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEMEQUALSFUNC_EQUALS_OFFSET))(this, left, right);
		}
		*/
	};
}
