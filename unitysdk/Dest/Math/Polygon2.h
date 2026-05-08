#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Edge2.h"
#include "unitysdk/Dest/Math/Orientations.h"
#include "unitysdk/Dest/Math/ProjectionPlanes.h"
#include "unitysdk/Dest/Math/Segment2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math { class Polygon3; }
namespace System { class String; }

#define DEST_MATH_POLYGON2_CALCAREA_OFFSET UNITYSDK_OFFSET(0x1B6ABB70)
#define DEST_MATH_POLYGON2_CALCCENTER_OFFSET UNITYSDK_OFFSET(0x1B6AB9F0)
#define DEST_MATH_POLYGON2_CALCPERIMETER_OFFSET UNITYSDK_OFFSET(0x1B6ABAC0)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXCCW_1_OFFSET UNITYSDK_OFFSET(0x1B6AC590)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXCCW_OFFSET UNITYSDK_OFFSET(0x1B6AC410)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXCW_1_OFFSET UNITYSDK_OFFSET(0x1B6AC730)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXCW_OFFSET UNITYSDK_OFFSET(0x1B6AC5B0)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCCW_1_OFFSET UNITYSDK_OFFSET(0x1B6AC270)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCCW_OFFSET UNITYSDK_OFFSET(0x1B6AC110)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCW_1_OFFSET UNITYSDK_OFFSET(0x1B6AC3F0)
#define DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCW_OFFSET UNITYSDK_OFFSET(0x1B6AC290)
#define DEST_MATH_POLYGON2_CONTAINSSIMPLE_1_OFFSET UNITYSDK_OFFSET(0x1B6AC850)
#define DEST_MATH_POLYGON2_CONTAINSSIMPLE_OFFSET UNITYSDK_OFFSET(0x1B6AC750)
#define DEST_MATH_POLYGON2_CREATEPROJECTED_OFFSET UNITYSDK_OFFSET(0x1B6AB350)
#define DEST_MATH_POLYGON2_GETEDGE_OFFSET UNITYSDK_OFFSET(0x1B6AB700)
#define DEST_MATH_POLYGON2_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1B6AAE90)
#define DEST_MATH_POLYGON2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B6AAEC0)
#define DEST_MATH_POLYGON2_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6AAEA0)
#define DEST_MATH_POLYGON2_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B6AAE80)
#define DEST_MATH_POLYGON2_HASZEROCORNERS_OFFSET UNITYSDK_OFFSET(0x1B6ABF80)
#define DEST_MATH_POLYGON2_ISCONVEX_1_OFFSET UNITYSDK_OFFSET(0x1B6ABF60)
#define DEST_MATH_POLYGON2_ISCONVEX_OFFSET UNITYSDK_OFFSET(0x1B6ABD70)
#define DEST_MATH_POLYGON2_REVERSEVERTICES_OFFSET UNITYSDK_OFFSET(0x1B6AC050)
#define DEST_MATH_POLYGON2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B6AAF00)
#define DEST_MATH_POLYGON2_SUBCONTAINSPOINTCCW_OFFSET UNITYSDK_OFFSET(0x1B6AC420)
#define DEST_MATH_POLYGON2_SUBCONTAINSPOINTCW_OFFSET UNITYSDK_OFFSET(0x1B6AC5C0)
#define DEST_MATH_POLYGON2_TOSEGMENTARRAY_OFFSET UNITYSDK_OFFSET(0x1B6AC870)
#define DEST_MATH_POLYGON2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B6ACAC0)
#define DEST_MATH_POLYGON2_UPDATEEDGES_OFFSET UNITYSDK_OFFSET(0x1B6AAFD0)
#define DEST_MATH_POLYGON2_UPDATEEDGE_OFFSET UNITYSDK_OFFSET(0x1B6AB760)
#define DEST_MATH_POLYGON2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B6AAF50)
#define DEST_MATH_POLYGON2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B6AB2F0)
#define DEST_MATH_POLYGON2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6AAF40)

namespace Dest::Math
{
	inline static constexpr unsigned int Polygon2_TypeDefinitionIndex = 33205;

	class Polygon2 : public ::System::Object
	{
	public:
		::Il2CppArray<::Dest::Math::Edge2>* _edges; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* _vertices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Vector2>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2__CTOR_1_OFFSET))(this, vertices);
		}

		::System::Void _ctor_2(::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2__CTOR_2_OFFSET))(this, vertexCount);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_Vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::Dest::Math::Edge2>* get_Edges()
		{
			return ((::Il2CppArray<::Dest::Math::Edge2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_GET_EDGES_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Item(::System::Int32 vertexIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_GET_ITEM_OFFSET))(this, vertexIndex);
		}

		::System::Void set_Item(::System::Int32 vertexIndex, ::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_SET_ITEM_OFFSET))(this, vertexIndex, value);
		}

		static ::Dest::Math::Polygon2* CreateProjected(::Dest::Math::Polygon3* polygon, ::Dest::Math::ProjectionPlanes projectionPlane)
		{
			return ((::Dest::Math::Polygon2*(*)(::Dest::Math::Polygon3*, ::Dest::Math::ProjectionPlanes))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CREATEPROJECTED_OFFSET))(polygon, projectionPlane);
		}

		::Dest::Math::Edge2 GetEdge(::System::Int32 edgeIndex)
		{
			return ((::Dest::Math::Edge2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_GETEDGE_OFFSET))(this, edgeIndex);
		}

		::System::Void UpdateEdges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_UPDATEEDGES_OFFSET))(this);
		}

		::System::Void UpdateEdge(::System::Int32 edgeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_UPDATEEDGE_OFFSET))(this, edgeIndex);
		}

		::UnityEngine::Vector2 CalcCenter()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CALCCENTER_OFFSET))(this);
		}

		::System::Single CalcPerimeter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CALCPERIMETER_OFFSET))(this);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CALCAREA_OFFSET))(this);
		}

		::System::Boolean IsConvex(::Dest::Math::Orientations& orientation, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Orientations&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_ISCONVEX_OFFSET))(this, orientation, threshold);
		}

		::System::Boolean IsConvex_1(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_ISCONVEX_1_OFFSET))(this, threshold);
		}

		::System::Boolean HasZeroCorners(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_HASZEROCORNERS_OFFSET))(this, threshold);
		}

		::System::Void ReverseVertices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_REVERSEVERTICES_OFFSET))(this);
		}

		::System::Boolean ContainsConvexQuadCCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexQuadCCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCCW_1_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexQuadCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexQuadCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXQUADCW_1_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexCCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXCCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexCCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXCCW_1_OFFSET))(this, point);
		}

		::System::Boolean SubContainsPointCCW(::UnityEngine::Vector2& p, ::System::Int32 i0, ::System::Int32 i1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_SUBCONTAINSPOINTCCW_OFFSET))(this, p, i0, i1);
		}

		::System::Boolean ContainsConvexCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsConvexCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSCONVEXCW_1_OFFSET))(this, point);
		}

		::System::Boolean SubContainsPointCW(::UnityEngine::Vector2& p, ::System::Int32 i0, ::System::Int32 i1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_SUBCONTAINSPOINTCW_OFFSET))(this, p, i0, i1);
		}

		::System::Boolean ContainsSimple(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSSIMPLE_OFFSET))(this, point);
		}

		::System::Boolean ContainsSimple_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_CONTAINSSIMPLE_1_OFFSET))(this, point);
		}

		::Il2CppArray<::Dest::Math::Segment2>* ToSegmentArray()
		{
			return ((::Il2CppArray<::Dest::Math::Segment2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_TOSEGMENTARRAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON2_TOSTRING_OFFSET))(this);
		}
	};
}
