#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/BVH2_AABBWrap.h"
#include "unitysdk/System/Object.h"

#define SWRT_BVH2_AABBCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x181880C0)
#define SWRT_BVH2_AABBCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x181880B0)

namespace SWRT
{
	inline static constexpr unsigned int BVH2_AABBComparer_TypeDefinitionIndex = 34884;

	class BVH2_AABBComparer : public ::System::Object
	{
	public:
		::System::Int32 _Axis; // 0x10

		::System::Void _ctor(::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_AABBCOMPARER__CTOR_OFFSET))(this, axis);
		}

		::System::Int32 Compare(::SWRT::BVH2_AABBWrap a, ::SWRT::BVH2_AABBWrap b)
		{
			return ((::System::Int32(*)(::PVOID, ::SWRT::BVH2_AABBWrap, ::SWRT::BVH2_AABBWrap))((::PBYTE)hIl2Cpp + SWRT_BVH2_AABBCOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
