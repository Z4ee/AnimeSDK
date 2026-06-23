#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/System/Object.h"

namespace Octree
{
	inline static constexpr unsigned int BoundsOctree_1_Node_OctreeObject_TypeDefinitionIndex = 75697;

	template <typename T>
	class BoundsOctree_1_Node_OctreeObject : public ::System::Object
	{
	public:
		T Obj; // 0x0
		::Octree::BoundingBox Bounds; // 0x0
	};
}
