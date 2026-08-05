#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class ConvexHull3_Triangle; }

#define DEST_MATH_CONVEXHULL3_TERMINATORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2AB500)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull3_TerminatorData_TypeDefinitionIndex = 35333;

	class ConvexHull3_TerminatorData : public ::System::Object
	{
	public:
		::Dest::Math::ConvexHull3_Triangle* T; // 0x10
		::System::Int32 V1; // 0x18
		::System::Int32 V0; // 0x1C
		::System::Int32 NullIndex; // 0x20

		::System::Void _ctor(::System::Int32 v0, ::System::Int32 v1, ::System::Int32 nullIndex, ::Dest::Math::ConvexHull3_Triangle* tri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Dest::Math::ConvexHull3_Triangle*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TERMINATORDATA__CTOR_OFFSET))(this, v0, v1, nullIndex, tri);
		}
	};
}
