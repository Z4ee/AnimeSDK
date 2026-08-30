#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/AABB.h"
#include "unitysdk/System/Object.h"

#define SWRT_BVH2_HNODE_GET_ISLEAF_OFFSET UNITYSDK_OFFSET(0x1C6F95A0)
#define SWRT_BVH2_HNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F95B0)

namespace SWRT
{
	inline static constexpr unsigned int BVH2_HNode_TypeDefinitionIndex = 36807;

	class BVH2_HNode : public ::System::Object
	{
	public:
		::SWRT::BVH2_HNode* RChild; // 0x10
		::SWRT::BVH2_HNode* LChild; // 0x18
		::System::Int32 PrimIndex; // 0x20
		::SWRT::AABB AABB; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH2_HNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLeaf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH2_HNODE_GET_ISLEAF_OFFSET))(this);
		}
	};
}
