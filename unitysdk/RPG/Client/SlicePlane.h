#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SLICEPLANE_GET_INNORMAL_OFFSET UNITYSDK_OFFSET(0x3997E20)
#define RPG_CLIENT_SLICEPLANE_GET_INPOINT_OFFSET UNITYSDK_OFFSET(0x3997D80)

namespace RPG::Client
{
	inline static constexpr unsigned int SlicePlane_TypeDefinitionIndex = 67538;

	struct alignas(8) SlicePlane
	{
		::UnityEngine::Transform* InTransform; // 0x10
		::UnityEngine::Vector3 _inNormal; // 0x18

		::UnityEngine::Vector3 get_InPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLICEPLANE_GET_INPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_InNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLICEPLANE_GET_INNORMAL_OFFSET))(this);
		}
	};
}
