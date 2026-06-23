#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Edge3.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_POLYGON3_CALCCENTER_OFFSET UNITYSDK_OFFSET(0x1DAB0920)
#define DEST_MATH_POLYGON3_CALCPERIMETER_OFFSET UNITYSDK_OFFSET(0x1DAB09D0)
#define DEST_MATH_POLYGON3_GETEDGE_OFFSET UNITYSDK_OFFSET(0x1DAB05C0)
#define DEST_MATH_POLYGON3_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1DAAFDA0)
#define DEST_MATH_POLYGON3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAAE780)
#define DEST_MATH_POLYGON3_GET_PLANE_OFFSET UNITYSDK_OFFSET(0x1DAAFE00)
#define DEST_MATH_POLYGON3_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DAAE760)
#define DEST_MATH_POLYGON3_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1DAAFD90)
#define DEST_MATH_POLYGON3_HASZEROCORNERS_OFFSET UNITYSDK_OFFSET(0x1DAB0A80)
#define DEST_MATH_POLYGON3_PROJECTVERTICES_OFFSET UNITYSDK_OFFSET(0x1DAB0400)
#define DEST_MATH_POLYGON3_REVERSEVERTICES_OFFSET UNITYSDK_OFFSET(0x1DAB0B70)
#define DEST_MATH_POLYGON3_SETVERTEXPROJECTED_OFFSET UNITYSDK_OFFSET(0x1DAB02D0)
#define DEST_MATH_POLYGON3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAAFDB0)
#define DEST_MATH_POLYGON3_SET_PLANE_OFFSET UNITYSDK_OFFSET(0x1DAAFE10)
#define DEST_MATH_POLYGON3_TOSEGMENTARRAY_OFFSET UNITYSDK_OFFSET(0x1DAB0C70)
#define DEST_MATH_POLYGON3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAB0ED0)
#define DEST_MATH_POLYGON3_UPDATEEDGES_OFFSET UNITYSDK_OFFSET(0x1DAAFEC0)
#define DEST_MATH_POLYGON3_UPDATEEDGE_OFFSET UNITYSDK_OFFSET(0x1DAB0620)
#define DEST_MATH_POLYGON3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAAFE30)
#define DEST_MATH_POLYGON3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DAB0260)
#define DEST_MATH_POLYGON3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAFE20)

namespace Dest::Math
{
	inline static constexpr unsigned int Polygon3_TypeDefinitionIndex = 34779;

	class Polygon3 : public ::System::Object
	{
	public:
		::Il2CppArray<::Dest::Math::Edge3>* _edges; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x18
		::Dest::Math::Plane3 _plane; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Dest::Math::Plane3 plane)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Dest::Math::Plane3))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3__CTOR_1_OFFSET))(this, vertices, plane);
		}

		::System::Void _ctor_2(::System::Int32 vertexCount, ::Dest::Math::Plane3 plane)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Dest::Math::Plane3))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3__CTOR_2_OFFSET))(this, vertexCount, plane);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::Dest::Math::Edge3>* get_Edges()
		{
			return ((::Il2CppArray<::Dest::Math::Edge3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GET_EDGES_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Item(::System::Int32 vertexIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GET_ITEM_OFFSET))(this, vertexIndex);
		}

		::System::Void set_Item(::System::Int32 vertexIndex, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_SET_ITEM_OFFSET))(this, vertexIndex, value);
		}

		::Dest::Math::Plane3 get_Plane()
		{
			return ((::Dest::Math::Plane3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GET_PLANE_OFFSET))(this);
		}

		::System::Void set_Plane(::Dest::Math::Plane3 value)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Plane3))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_SET_PLANE_OFFSET))(this, value);
		}

		::System::Void SetVertexProjected(::System::Int32 vertexIndex, ::UnityEngine::Vector3 vertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_SETVERTEXPROJECTED_OFFSET))(this, vertexIndex, vertex);
		}

		::System::Void ProjectVertices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_PROJECTVERTICES_OFFSET))(this);
		}

		::Dest::Math::Edge3 GetEdge(::System::Int32 edgeIndex)
		{
			return ((::Dest::Math::Edge3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_GETEDGE_OFFSET))(this, edgeIndex);
		}

		::System::Void UpdateEdges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_UPDATEEDGES_OFFSET))(this);
		}

		::System::Void UpdateEdge(::System::Int32 edgeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_UPDATEEDGE_OFFSET))(this, edgeIndex);
		}

		::UnityEngine::Vector3 CalcCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_CALCCENTER_OFFSET))(this);
		}

		::System::Single CalcPerimeter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_CALCPERIMETER_OFFSET))(this);
		}

		::System::Boolean HasZeroCorners(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_HASZEROCORNERS_OFFSET))(this, threshold);
		}

		::System::Void ReverseVertices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_REVERSEVERTICES_OFFSET))(this);
		}

		::Il2CppArray<::Dest::Math::Segment3>* ToSegmentArray()
		{
			return ((::Il2CppArray<::Dest::Math::Segment3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_TOSEGMENTARRAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYGON3_TOSTRING_OFFSET))(this);
		}
	};
}
