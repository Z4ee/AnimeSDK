#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SWRT_BVH2_FNODE_GET_ISLEAF_OFFSET UNITYSDK_OFFSET(0x39D7450)

namespace SWRT
{
	inline static constexpr unsigned int BVH2_FNode_TypeDefinitionIndex = 35947;

	struct alignas(4) BVH2_FNode
	{
		::UnityEngine::Vector3 AABBMin; // 0x10
		::UnityEngine::Vector3 AABBMax; // 0x1C
		::System::Int32 ChildIndex; // 0x28
		::System::Int32 PrimIndex; // 0x2C

		::System::Boolean get_IsLeaf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH2_FNODE_GET_ISLEAF_OFFSET))(this);
		}
	};
}
