#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RVO
{
	inline static constexpr unsigned int KdTree_AgentTreeNode_TypeDefinitionIndex = 42707;

	struct alignas(4) KdTree_AgentTreeNode
	{
		::System::Int32 begin_; // 0x10
		::System::Int32 end_; // 0x14
		::System::Int32 left_; // 0x18
		::System::Int32 right_; // 0x1C
		::System::Single maxX_; // 0x20
		::System::Single maxY_; // 0x24
		::System::Single minX_; // 0x28
		::System::Single minY_; // 0x2C
	};
}
