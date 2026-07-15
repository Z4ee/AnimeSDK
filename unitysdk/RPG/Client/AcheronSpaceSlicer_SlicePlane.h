#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACHERONSPACESLICER_SLICEPLANE_GET_INNORMAL_OFFSET UNITYSDK_OFFSET(0x3956480)
#define RPG_CLIENT_ACHERONSPACESLICER_SLICEPLANE_GET_INPOINT_OFFSET UNITYSDK_OFFSET(0x39563E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AcheronSpaceSlicer_SlicePlane_TypeDefinitionIndex = 67198;

	struct alignas(8) AcheronSpaceSlicer_SlicePlane
	{
		::UnityEngine::Transform* InTransform; // 0x10
		::UnityEngine::Vector3 _inNormal; // 0x18

		::UnityEngine::Vector3 get_InPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_SLICEPLANE_GET_INPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_InNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_SLICEPLANE_GET_INNORMAL_OFFSET))(this);
		}
	};
}
