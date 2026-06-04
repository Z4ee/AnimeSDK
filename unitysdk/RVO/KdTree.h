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

#define RVO_KDTREE_BUILDAGENTTREERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA24E3B0)
#define RVO_KDTREE_BUILDAGENTTREE_OFFSET UNITYSDK_OFFSET(0xA24E010)
#define RVO_KDTREE_BUILDOBSTACLETREERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA24ED40)
#define RVO_KDTREE_BUILDOBSTACLETREE_OFFSET UNITYSDK_OFFSET(0xA24E9B0)
#define RVO_KDTREE_COMPUTEAGENTNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA248C60)
#define RVO_KDTREE_COMPUTEOBSTACLENEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA248C50)
#define RVO_KDTREE_QUERYAGENTTREERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA2500B0)
#define RVO_KDTREE_QUERYOBSTACLETREERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA250380)
#define RVO_KDTREE_QUERYVISIBILITYRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA250540)
#define RVO_KDTREE_QUERYVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA250520)
#define RVO_KDTREE__CTOR_OFFSET UNITYSDK_OFFSET(0xA24E000)

namespace RVO
{
	inline static constexpr unsigned int KdTree_TypeDefinitionIndex = 41845;

	class KdTree : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_LEAF_SIZE = 0xA; // 0x0
		::RVO::KdTree_ObstacleTreeNode* obstacleTree_; // 0x10
		::Il2CppArray<::RVO::Agent*>* agents_; // 0x18
		::RVO::Simulator* _simulator; // 0x20
		::Il2CppArray<::RVO::KdTree_AgentTreeNode>* agentTree_; // 0x28

		::System::Void _ctor(::RVO::Simulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*))((::PBYTE)hIl2Cpp + RVO_KDTREE__CTOR_OFFSET))(this, a1);
		}

		::System::Void buildAgentTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDAGENTTREE_OFFSET))(this);
		}

		::System::Void buildObstacleTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDOBSTACLETREE_OFFSET))(this);
		}

		::System::Void computeAgentNeighbors(::RVO::Agent* a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&))((::PBYTE)hIl2Cpp + RVO_KDTREE_COMPUTEAGENTNEIGHBORS_OFFSET))(this, a1, a2);
		}

		::System::Void computeObstacleNeighbors(::RVO::Agent* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_COMPUTEOBSTACLENEIGHBORS_OFFSET))(this, a1, a2);
		}

		::System::Boolean queryVisibility(::RVO::Vector2 a1, ::RVO::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYVISIBILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void buildAgentTreeRecursive(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDAGENTTREERECURSIVE_OFFSET))(this, a1, a2, a3);
		}

		::RVO::KdTree_ObstacleTreeNode* buildObstacleTreeRecursive(::System::Collections::Generic::IList_1<::RVO::Obstacle*>* a1)
		{
			return ((::RVO::KdTree_ObstacleTreeNode*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Obstacle*>*))((::PBYTE)hIl2Cpp + RVO_KDTREE_BUILDOBSTACLETREERECURSIVE_OFFSET))(this, a1);
		}

		::System::Void queryAgentTreeRecursive(::RVO::Agent* a1, ::System::Single& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYAGENTTREERECURSIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void queryObstacleTreeRecursive(::RVO::Agent* a1, ::System::Single a2, ::RVO::KdTree_ObstacleTreeNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single, ::RVO::KdTree_ObstacleTreeNode*))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYOBSTACLETREERECURSIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean queryVisibilityRecursive(::RVO::Vector2 a1, ::RVO::Vector2 a2, ::System::Single a3, ::RVO::KdTree_ObstacleTreeNode* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single, ::RVO::KdTree_ObstacleTreeNode*))((::PBYTE)hIl2Cpp + RVO_KDTREE_QUERYVISIBILITYRECURSIVE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
