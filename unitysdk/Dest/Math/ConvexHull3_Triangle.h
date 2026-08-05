#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Query3; }

#define DEST_MATH_CONVEXHULL3_TRIANGLE_ATTACHTO_OFFSET UNITYSDK_OFFSET(0x1EE90EB0)
#define DEST_MATH_CONVEXHULL3_TRIANGLE_DETACHFROM_OFFSET UNITYSDK_OFFSET(0x1EE91D10)
#define DEST_MATH_CONVEXHULL3_TRIANGLE_GETADJ_OFFSET UNITYSDK_OFFSET(0x1EE91CE0)
#define DEST_MATH_CONVEXHULL3_TRIANGLE_GETSIGN_OFFSET UNITYSDK_OFFSET(0x1EE91C60)
#define DEST_MATH_CONVEXHULL3_TRIANGLE_GETV_OFFSET UNITYSDK_OFFSET(0x1EE91DA0)
#define DEST_MATH_CONVEXHULL3_TRIANGLE_SETADJ_OFFSET UNITYSDK_OFFSET(0x1EE91DC0)
#define DEST_MATH_CONVEXHULL3_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE90E90)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull3_Triangle_TypeDefinitionIndex = 35332;

	class ConvexHull3_Triangle : public ::System::Object
	{
	public:
		::Dest::Math::ConvexHull3_Triangle* Adj0; // 0x10
		::Dest::Math::ConvexHull3_Triangle* Adj1; // 0x18
		::Dest::Math::ConvexHull3_Triangle* Adj2; // 0x20
		::System::Boolean OnStack; // 0x28
		::System::Int32 V2; // 0x2C
		::System::Int32 Sign; // 0x30
		::System::Int32 V1; // 0x34
		::System::Int32 V0; // 0x38
		::System::Int32 Time; // 0x3C

		::System::Void _ctor(::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE__CTOR_OFFSET))(this, v0, v1, v2);
		}

		::Dest::Math::ConvexHull3_Triangle* GetAdj(::System::Int32 index)
		{
			return ((::Dest::Math::ConvexHull3_Triangle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_GETADJ_OFFSET))(this, index);
		}

		::System::Void SetAdj(::System::Int32 index, ::Dest::Math::ConvexHull3_Triangle* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Dest::Math::ConvexHull3_Triangle*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_SETADJ_OFFSET))(this, index, value);
		}

		::System::Int32 GetV(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_GETV_OFFSET))(this, index);
		}

		::System::Int32 GetSign(::System::Int32 i, ::Dest::Math::Query3* query)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Dest::Math::Query3*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_GETSIGN_OFFSET))(this, i, query);
		}

		::System::Void AttachTo(::Dest::Math::ConvexHull3_Triangle* adj0, ::Dest::Math::ConvexHull3_Triangle* adj1, ::Dest::Math::ConvexHull3_Triangle* adj2)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::ConvexHull3_Triangle*, ::Dest::Math::ConvexHull3_Triangle*, ::Dest::Math::ConvexHull3_Triangle*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_ATTACHTO_OFFSET))(this, adj0, adj1, adj2);
		}

		::System::Int32 DetachFrom(::System::Int32 adjIndex, ::Dest::Math::ConvexHull3_Triangle* adj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Dest::Math::ConvexHull3_Triangle*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_TRIANGLE_DETACHFROM_OFFSET))(this, adjIndex, adj);
		}
	};
}
