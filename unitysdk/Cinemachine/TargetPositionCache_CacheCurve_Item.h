#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x12BA93F0)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_LERP_OFFSET UNITYSDK_OFFSET(0x12BA9310)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheCurve_Item_TypeDefinitionIndex = 36611;

	struct alignas(4) TargetPositionCache_CacheCurve_Item
	{
		::UnityEngine::Vector3 Pos; // 0x10
		::UnityEngine::Quaternion Rot; // 0x1C

		static ::Cinemachine::TargetPositionCache_CacheCurve_Item Lerp(::Cinemachine::TargetPositionCache_CacheCurve_Item a, ::Cinemachine::TargetPositionCache_CacheCurve_Item b, ::System::Single t)
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)(::Cinemachine::TargetPositionCache_CacheCurve_Item, ::Cinemachine::TargetPositionCache_CacheCurve_Item, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_LERP_OFFSET))(a, b, t);
		}

		static ::Cinemachine::TargetPositionCache_CacheCurve_Item get_Empty()
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ITEM_GET_EMPTY_OFFSET))();
		}
	};
}
