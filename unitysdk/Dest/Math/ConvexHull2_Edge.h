#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Query2; }

#define DEST_MATH_CONVEXHULL2_EDGE_DELETESELF_OFFSET UNITYSDK_OFFSET(0x1C227990)
#define DEST_MATH_CONVEXHULL2_EDGE_GETINDICES_OFFSET UNITYSDK_OFFSET(0x1C2279C0)
#define DEST_MATH_CONVEXHULL2_EDGE_GETSIGN_OFFSET UNITYSDK_OFFSET(0x1C2278F0)
#define DEST_MATH_CONVEXHULL2_EDGE_INSERT_OFFSET UNITYSDK_OFFSET(0x1C227960)
#define DEST_MATH_CONVEXHULL2_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2278E0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull2_Edge_TypeDefinitionIndex = 33108;

	class ConvexHull2_Edge : public ::System::Object
	{
	public:
		::Dest::Math::ConvexHull2_Edge* E0; // 0x10
		::Dest::Math::ConvexHull2_Edge* E1; // 0x18
		::System::Int32 V0; // 0x20
		::System::Int32 Time; // 0x24
		::System::Int32 V1; // 0x28
		::System::Int32 Sign; // 0x2C

		::System::Void _ctor(::System::Int32 v0, ::System::Int32 v1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_EDGE__CTOR_OFFSET))(this, v0, v1);
		}

		::System::Int32 GetSign(::System::Int32 i, ::Dest::Math::Query2* query)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Dest::Math::Query2*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_EDGE_GETSIGN_OFFSET))(this, i, query);
		}

		::System::Void Insert(::Dest::Math::ConvexHull2_Edge* adj0, ::Dest::Math::ConvexHull2_Edge* adj1)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::ConvexHull2_Edge*, ::Dest::Math::ConvexHull2_Edge*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_EDGE_INSERT_OFFSET))(this, adj0, adj1);
		}

		::System::Void DeleteSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_EDGE_DELETESELF_OFFSET))(this);
		}

		::System::Void GetIndices(::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_EDGE_GETINDICES_OFFSET))(this, indices);
		}
	};
}
