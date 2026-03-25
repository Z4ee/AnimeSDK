#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/KdTree_AgentTreeNode.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Agent; }
namespace RVO { class KdTree_ObstacleTreeNode; }
namespace RVO { class Obstacle; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RVO_KDTREE_BUILDAGENTTREERECURSIVE_OFFSET UNITYSDK_OFFSET(0x85C98D0)
#define RVO_KDTREE_BUILDAGENTTREE_OFFSET UNITYSDK_OFFSET(0x85C9500)
#define RVO_KDTREE_BUILDOBSTACLETREERECURSIVE_OFFSET UNITYSDK_OFFSET(0x85CA350)
#define RVO_KDTREE_BUILDOBSTACLETREE_OFFSET UNITYSDK_OFFSET(0x85C9FD0)
#define RVO_KDTREE_COMPUTEAGENTNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x85C4150)
#define RVO_KDTREE_COMPUTEOBSTACLENEIGHBORS_OFFSET UNITYSDK_OFFSET(0x85C4140)
#define RVO_KDTREE_QUERYAGENTTREERECURSIVE_OFFSET UNITYSDK_OFFSET(0x85CB6A0)
#define RVO_KDTREE_QUERYOBSTACLETREERECURSIVE_OFFSET UNITYSDK_OFFSET(0x85CBA00)
#define RVO_KDTREE_QUERYVISIBILITYRECURSIVE_OFFSET UNITYSDK_OFFSET(0x85CBBC0)
#define RVO_KDTREE_QUERYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x85CBBA0)
#define RVO_KDTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x85C94F0)

namespace RVO
{
	inline static constexpr unsigned int KdTree_TypeDefinitionIndex = 35216;

	class KdTree : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_LEAF_SIZE = 0xA; // 0x0
		::Il2CppArray<::RVO::KdTree_AgentTreeNode>* agentTree_; // 0x10
		::RVO::Simulator* _simulator; // 0x18
		::Il2CppArray<::RVO::Agent*>* agents_; // 0x20
		::RVO::KdTree_ObstacleTreeNode* obstacleTree_; // 0x28

		::System::Void _ctor(::RVO::Simulator* simulator)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*))((::PBYTE)hIl2Cpp + RVO_KDTREE__CTOR_OFFSET))(this, simulator);
		}

		::System::Void buildAgentTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDAGENTTREE_OFFSET))(this);
		}

		::System::Void buildObstacleTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDOBSTACLETREE_OFFSET))(this);
		}

		::System::Void computeAgentNeighbors(::RVO::Agent* agent, ::System::Single& rangeSq)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&))((::PBYTE)hIl2Cpp + RVO_KDTREE_COMPUTEAGENTNEIGHBORS_OFFSET))(this, agent, rangeSq);
		}

		::System::Void computeObstacleNeighbors(::RVO::Agent* agent, ::System::Single rangeSq)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_COMPUTEOBSTACLENEIGHBORS_OFFSET))(this, agent, rangeSq);
		}

		::System::Boolean queryVisibility(::RVO::Vector2 q1, ::RVO::Vector2 q2, ::System::Single radius)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYVISIBILITY_OFFSET))(this, q1, q2, radius);
		}

		::System::Void buildAgentTreeRecursive(::System::Int32 begin, ::System::Int32 end, ::System::Int32 node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDAGENTTREERECURSIVE_OFFSET))(this, begin, end, node);
		}

		::RVO::KdTree_ObstacleTreeNode* buildObstacleTreeRecursive(::System::Collections::Generic::IList_1<::RVO::Obstacle*>* obstacles)
		{
			return ((::RVO::KdTree_ObstacleTreeNode*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Obstacle*>*))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDOBSTACLETREERECURSIVE_OFFSET))(this, obstacles);
		}

		::System::Void queryAgentTreeRecursive(::RVO::Agent* agent, ::System::Single& rangeSq, ::System::Int32 node)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYAGENTTREERECURSIVE_OFFSET))(this, agent, rangeSq, node);
		}

		::System::Void queryObstacleTreeRecursive(::RVO::Agent* agent, ::System::Single rangeSq, ::RVO::KdTree_ObstacleTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single, ::RVO::KdTree_ObstacleTreeNode*))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYOBSTACLETREERECURSIVE_OFFSET))(this, agent, rangeSq, node);
		}

		::System::Boolean queryVisibilityRecursive(::RVO::Vector2 q1, ::RVO::Vector2 q2, ::System::Single radius, ::RVO::KdTree_ObstacleTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single, ::RVO::KdTree_ObstacleTreeNode*))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYVISIBILITYRECURSIVE_OFFSET))(this, q1, q2, radius, node);
		}
	};
}
