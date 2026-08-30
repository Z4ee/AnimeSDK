#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1EF0CC40)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_LERP_OFFSET UNITYSDK_OFFSET(0x1EF0CB60)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheCurve_Item_TypeDefinitionIndex = 38552;

	struct alignas(4) TargetPositionCache_CacheCurve_Item
	{
		::UnityEngine::Vector3 Pos; // 0x10
		::UnityEngine::Quaternion Rot; // 0x1C

		static ::Cinemachine::TargetPositionCache_CacheCurve_Item Lerp(::Cinemachine::TargetPositionCache_CacheCurve_Item a1, ::Cinemachine::TargetPositionCache_CacheCurve_Item a2, ::System::Single a3)
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)(::Cinemachine::TargetPositionCache_CacheCurve_Item, ::Cinemachine::TargetPositionCache_CacheCurve_Item, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_LERP_OFFSET))(a1, a2, a3);
		}

		static ::Cinemachine::TargetPositionCache_CacheCurve_Item get_Empty()
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_GET_EMPTY_OFFSET))();
		}
	};
}
