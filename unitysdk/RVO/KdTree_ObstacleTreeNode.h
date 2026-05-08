#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Obstacle; }

#define RVO_KDTREE_OBSTACLETREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63E5C0)

namespace RVO
{
	inline static constexpr unsigned int KdTree_ObstacleTreeNode_TypeDefinitionIndex = 36457;

	class KdTree_ObstacleTreeNode : public ::System::Object
	{
	public:
		::RVO::KdTree_ObstacleTreeNode* left_; // 0x10
		::RVO::KdTree_ObstacleTreeNode* right_; // 0x18
		::RVO::Obstacle* obstacle_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_KDTREE_OBSTACLETREENODE__CTOR_OFFSET))(this);
		}
	};
}
