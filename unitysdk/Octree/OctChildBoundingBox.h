#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/System/ValueType.h"

#define OCTREE_OCTCHILDBOUNDINGBOX_EQUALS_OFFSET UNITYSDK_OFFSET(0x5880E0)

namespace Octree
{
	inline static constexpr unsigned int OctChildBoundingBox_TypeDefinitionIndex = 63543;

	struct alignas(4) OctChildBoundingBox
	{
		::Octree::BoundingBox chBB0; // 0x10
		::Octree::BoundingBox chBB1; // 0x28
		::Octree::BoundingBox chBB2; // 0x40
		::Octree::BoundingBox chBB3; // 0x58
		::Octree::BoundingBox chBB4; // 0x70
		::Octree::BoundingBox chBB5; // 0x88
		::Octree::BoundingBox chBB6; // 0xA0
		::Octree::BoundingBox chBB7; // 0xB8

		::System::Boolean Equals(::Octree::OctChildBoundingBox other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::OctChildBoundingBox))((::PBYTE)hIl2Cpp + OCTREE_OCTCHILDBOUNDINGBOX_EQUALS_OFFSET))(this, other);
		}
	};
}
