#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_CONCAVEHULL2_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConcaveHull2_Edge_TypeDefinitionIndex = 35323;

	struct alignas(4) ConcaveHull2_Edge
	{
		::System::Int32 V0; // 0x10
		::System::Int32 V1; // 0x14

		::System::Void _ctor(::System::Int32 v0, ::System::Int32 v1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_EDGE__CTOR_OFFSET))(this, v0, v1);
		}
	};
}
