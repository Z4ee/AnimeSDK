#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/ValueType.h"

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_Node_OctreeObject_TypeDefinitionIndex = 41609;

	template <typename T>
	struct PointOctree_1_Node_OctreeObject
	{
		T Obj; // 0x0
		::System::Numerics::Vector3 Pos; // 0x0
	};
}
