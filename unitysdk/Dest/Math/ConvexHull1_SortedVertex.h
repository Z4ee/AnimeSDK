#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_CONVEXHULL1_SORTEDVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2278D0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull1_SortedVertex_TypeDefinitionIndex = 33105;

	class ConvexHull1_SortedVertex : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Single Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1_SORTEDVERTEX__CTOR_OFFSET))(this);
		}
	};
}
