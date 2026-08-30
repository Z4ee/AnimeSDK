#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SWRT_BVH8_CWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x3C72890)

namespace SWRT
{
	inline static constexpr unsigned int BVH8_CWNode_TypeDefinitionIndex = 36822;

	struct alignas(4) BVH8_CWNode
	{
		::System::UInt32 Raw0x; // 0x10
		::System::UInt32 Raw0y; // 0x14
		::System::UInt32 Raw0z; // 0x18
		::System::UInt32 Raw0w; // 0x1C
		::System::UInt32 Raw1x; // 0x20
		::System::UInt32 Raw1y; // 0x24
		::System::UInt32 Raw1z; // 0x28
		::System::UInt32 Raw1w; // 0x2C
		::System::UInt32 Raw2x; // 0x30
		::System::UInt32 Raw2y; // 0x34
		::System::UInt32 Raw2z; // 0x38
		::System::UInt32 Raw2w; // 0x3C
		::System::UInt32 Raw3x; // 0x40
		::System::UInt32 Raw3y; // 0x44
		::System::UInt32 Raw3z; // 0x48
		::System::UInt32 Raw3w; // 0x4C
		::System::UInt32 Raw4x; // 0x50
		::System::UInt32 Raw4y; // 0x54
		::System::UInt32 Raw4z; // 0x58
		::System::UInt32 Raw4w; // 0x5C

		/*
		::System::Void _ctor(::SWRT::BVH8_CWNodeUnpacked a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH8_CWNodeUnpacked))((::PBYTE)hIl2Cpp + SWRT_BVH8_CWNODE__CTOR_OFFSET))(this, a1);
		}
		*/
	};
}
