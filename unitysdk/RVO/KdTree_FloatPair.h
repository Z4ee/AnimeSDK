#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RVO_KDTREE_FLOATPAIR_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x19689860)
#define RVO_KDTREE_FLOATPAIR_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x19689920)
#define RVO_KDTREE_FLOATPAIR_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x196898D0)
#define RVO_KDTREE_FLOATPAIR_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x19689890)
#define RVO_KDTREE_FLOATPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9800)

namespace RVO
{
	inline static constexpr unsigned int KdTree_FloatPair_TypeDefinitionIndex = 44890;

	struct alignas(4) KdTree_FloatPair
	{
		::System::Single a_; // 0x10
		::System::Single b_; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_LessThan(::RVO::KdTree_FloatPair a1, ::RVO::KdTree_FloatPair a2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RVO::KdTree_FloatPair a1, ::RVO::KdTree_FloatPair a2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RVO::KdTree_FloatPair a1, ::RVO::KdTree_FloatPair a2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RVO::KdTree_FloatPair a1, ::RVO::KdTree_FloatPair a2)
		{
			return ((::System::Boolean(*)(::RVO::KdTree_FloatPair, ::RVO::KdTree_FloatPair))((::PBYTE)hIl2Cpp + RVO_KDTREE_FLOATPAIR_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
	};
}
