#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLIPPERLIB_INTRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA1A020)
#define CLIPPERLIB_INTRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1930)

namespace ClipperLib
{
	inline static constexpr unsigned int IntRect_TypeDefinitionIndex = 33407;

	struct alignas(8) IntRect
	{
		::System::Int64 left; // 0x10
		::System::Int64 top; // 0x18
		::System::Int64 right; // 0x20
		::System::Int64 bottom; // 0x28

		::System::Void _ctor(::System::Int64 l, ::System::Int64 t, ::System::Int64 r, ::System::Int64 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTRECT__CTOR_OFFSET))(this, l, t, r, b);
		}

		::System::Void _ctor_1(::ClipperLib::IntRect ir)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::IntRect))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTRECT__CTOR_1_OFFSET))(this, ir);
		}
	};
}
