#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/PointOctree_1_Node.h"
#include "unitysdk/System/ValueType.h"

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_OctChildNode_TypeDefinitionIndex = 41611;

	template <typename T>
	struct PointOctree_1_OctChildNode
	{
		::Octree::PointOctree_1_Node<T> chNode0; // 0x0
		::Octree::PointOctree_1_Node<T> chNode1; // 0x0
		::Octree::PointOctree_1_Node<T> chNode2; // 0x0
		::Octree::PointOctree_1_Node<T> chNode3; // 0x0
		::Octree::PointOctree_1_Node<T> chNode4; // 0x0
		::Octree::PointOctree_1_Node<T> chNode5; // 0x0
		::Octree::PointOctree_1_Node<T> chNode6; // 0x0
		::Octree::PointOctree_1_Node<T> chNode7; // 0x0
	};
}
