#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RVO_KDTREE_FLOATPAIR_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B640400)
#define RVO_KDTREE_FLOATPAIR_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B640540)
#define RVO_KDTREE_FLOATPAIR_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B6404F0)
#define RVO_KDTREE_FLOATPAIR_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B640430)
#define RVO_KDTREE_FLOATPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x43F560)

namespace RVO
{
	inline static constexpr unsigned int KdTree_FloatPair_TypeDefinitionIndex = 36456;

	struct alignas(4) KdTree_FloatPair
	{
		::System::Single a_; // 0x10
		::System::Single b_; // 0x14

		::System::Void _ctor(::System::Single a, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR__CTOR_OFFSET))(this, a, b);
		}

		static ::System::Boolean op_LessThan(::RVO::KdTree_FloatPair pair1, ::RVO::KdTree_FloatPair pair2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_LESSTHAN_OFFSET))(pair1, pair2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RVO::KdTree_FloatPair pair1, ::RVO::KdTree_FloatPair pair2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_LESSTHANOREQUAL_OFFSET))(pair1, pair2);
		}

		static ::System::Boolean op_GreaterThan(::RVO::KdTree_FloatPair pair1, ::RVO::KdTree_FloatPair pair2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_GREATERTHAN_OFFSET))(pair1, pair2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RVO::KdTree_FloatPair pair1, ::RVO::KdTree_FloatPair pair2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_GREATERTHANOREQUAL_OFFSET))(pair1, pair2);
		}
	};
}
