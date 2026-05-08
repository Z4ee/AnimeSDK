#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OCTREE_NATIVE_SIMD_UINT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x6587C0)
#define OCTREE_NATIVE_SIMD_UINT4_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0xF0B1530)
#define OCTREE_NATIVE_SIMD_UINT4__CTOR_OFFSET UNITYSDK_OFFSET(0x6587A0)

namespace Octree::Native::SIMD
{
	inline static constexpr unsigned int uint4_TypeDefinitionIndex = 66521;

	struct alignas(4) uint4
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18
		::System::UInt32 w; // 0x1C

		::System::Void _ctor(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z, ::System::UInt32 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_SIMD_UINT4__CTOR_OFFSET))(this, x, y, z, w);
		}

		static ::Octree::Native::SIMD::uint4 op_ExclusiveOr(::Octree::Native::SIMD::uint4 lhs, ::Octree::Native::SIMD::uint4 rhs)
		{
			return ((::Octree::Native::SIMD::uint4(*)(::Octree::Native::SIMD::uint4, ::Octree::Native::SIMD::uint4))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_SIMD_UINT4_OP_EXCLUSIVEOR_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::Octree::Native::SIMD::uint4 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Native::SIMD::uint4))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_SIMD_UINT4_EQUALS_OFFSET))(this, other);
		}
	};
}
