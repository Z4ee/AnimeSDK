#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Orientations.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define DEST_MATH_TRIANGLE2_CALCANGLESDEG_1_OFFSET UNITYSDK_OFFSET(0x1E575870)
#define DEST_MATH_TRIANGLE2_CALCANGLESDEG_2_OFFSET UNITYSDK_OFFSET(0x1E5759E0)
#define DEST_MATH_TRIANGLE2_CALCANGLESDEG_OFFSET UNITYSDK_OFFSET(0xA67DC0)
#define DEST_MATH_TRIANGLE2_CALCANGLESRAD_1_OFFSET UNITYSDK_OFFSET(0x1E575CF0)
#define DEST_MATH_TRIANGLE2_CALCANGLESRAD_2_OFFSET UNITYSDK_OFFSET(0x1E575E80)
#define DEST_MATH_TRIANGLE2_CALCANGLESRAD_OFFSET UNITYSDK_OFFSET(0xA67F30)
#define DEST_MATH_TRIANGLE2_CALCAREA_1_OFFSET UNITYSDK_OFFSET(0x1E575600)
#define DEST_MATH_TRIANGLE2_CALCAREA_2_OFFSET UNITYSDK_OFFSET(0x1E575670)
#define DEST_MATH_TRIANGLE2_CALCAREA_OFFSET UNITYSDK_OFFSET(0xA67D50)
#define DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_1_OFFSET UNITYSDK_OFFSET(0xA681E0)
#define DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_2_OFFSET UNITYSDK_OFFSET(0xA68240)
#define DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_OFFSET UNITYSDK_OFFSET(0x1E576140)
#define DEST_MATH_TRIANGLE2_CALCDETERMINANT_OFFSET UNITYSDK_OFFSET(0xA67C70)
#define DEST_MATH_TRIANGLE2_CALCEDGE_OFFSET UNITYSDK_OFFSET(0xA67C00)
#define DEST_MATH_TRIANGLE2_CALCORIENTATION_OFFSET UNITYSDK_OFFSET(0xA67CD0)
#define DEST_MATH_TRIANGLE2_CONTAINSCCW_1_OFFSET UNITYSDK_OFFSET(0xA68810)
#define DEST_MATH_TRIANGLE2_CONTAINSCCW_OFFSET UNITYSDK_OFFSET(0xA68780)
#define DEST_MATH_TRIANGLE2_CONTAINSCW_1_OFFSET UNITYSDK_OFFSET(0xA689A0)
#define DEST_MATH_TRIANGLE2_CONTAINSCW_OFFSET UNITYSDK_OFFSET(0xA68910)
#define DEST_MATH_TRIANGLE2_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xA68680)
#define DEST_MATH_TRIANGLE2_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA685B0)
#define DEST_MATH_TRIANGLE2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA682A0)
#define DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_1_OFFSET UNITYSDK_OFFSET(0xA68120)
#define DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_2_OFFSET UNITYSDK_OFFSET(0xA68180)
#define DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_OFFSET UNITYSDK_OFFSET(0xA680C0)
#define DEST_MATH_TRIANGLE2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA67B70)
#define DEST_MATH_TRIANGLE2_PROJECT_OFFSET UNITYSDK_OFFSET(0xA68570)
#define DEST_MATH_TRIANGLE2_QUERYSIDECCW_OFFSET UNITYSDK_OFFSET(0xA682C0)
#define DEST_MATH_TRIANGLE2_QUERYSIDECW_OFFSET UNITYSDK_OFFSET(0xA68410)
#define DEST_MATH_TRIANGLE2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA67BB0)
#define DEST_MATH_TRIANGLE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA68AA0)
#define DEST_MATH_TRIANGLE2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4973D0)
#define DEST_MATH_TRIANGLE2__CTOR_OFFSET UNITYSDK_OFFSET(0xA67BE0)

namespace Dest::Math
{
	inline static constexpr unsigned int Triangle2_TypeDefinitionIndex = 34771;

	struct alignas(4) Triangle2
	{
		::UnityEngine::Vector2 V0; // 0x10
		::UnityEngine::Vector2 V1; // 0x18
		::UnityEngine::Vector2 V2; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2__CTOR_OFFSET))(this, v0, v1, v2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2__CTOR_1_OFFSET))(this, v0, v1, v2);
		}

		::UnityEngine::Vector2 get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_SET_ITEM_OFFSET))(this, index, value);
		}

		::UnityEngine::Vector2 CalcEdge(::System::Int32 edgeIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCEDGE_OFFSET))(this, edgeIndex);
		}

		::System::Single CalcDeterminant()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCDETERMINANT_OFFSET))(this);
		}

		::Dest::Math::Orientations CalcOrientation(::System::Single threshold)
		{
			return ((::Dest::Math::Orientations(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCORIENTATION_OFFSET))(this, threshold);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCAREA_OFFSET))(this);
		}

		static ::System::Single CalcArea_1(::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCAREA_1_OFFSET))(v0, v1, v2);
		}

		static ::System::Single CalcArea_2(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCAREA_2_OFFSET))(v0, v1, v2);
		}

		/*
		::UnityEngine::Vector3 CalcAnglesDeg()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESDEG_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::Vector3 CalcAnglesDeg_1(::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESDEG_1_OFFSET))(v0, v1, v2);
		}
		*/

		/*
		static ::UnityEngine::Vector3 CalcAnglesDeg_2(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESDEG_2_OFFSET))(v0, v1, v2);
		}
		*/

		/*
		::UnityEngine::Vector3 CalcAnglesRad()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESRAD_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::Vector3 CalcAnglesRad_1(::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESRAD_1_OFFSET))(v0, v1, v2);
		}
		*/

		/*
		static ::UnityEngine::Vector3 CalcAnglesRad_2(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCANGLESRAD_2_OFFSET))(v0, v1, v2);
		}
		*/

		::UnityEngine::Vector2 EvalBarycentric(::System::Single c0, ::System::Single c1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_OFFSET))(this, c0, c1);
		}

		/*
		::UnityEngine::Vector2 EvalBarycentric_1(::UnityEngine::Vector3& baryCoords)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_1_OFFSET))(this, baryCoords);
		}
		*/

		/*
		::UnityEngine::Vector2 EvalBarycentric_2(::UnityEngine::Vector3 baryCoords)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_EVALBARYCENTRIC_2_OFFSET))(this, baryCoords);
		}
		*/

		/*
		static ::System::Void CalcBarycentricCoords(::UnityEngine::Vector2& point, ::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2, ::UnityEngine::Vector3& baryCoords)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_OFFSET))(point, v0, v1, v2, baryCoords);
		}
		*/

		/*
		::UnityEngine::Vector3 CalcBarycentricCoords_1(::UnityEngine::Vector2& point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_1_OFFSET))(this, point);
		}
		*/

		/*
		::UnityEngine::Vector3 CalcBarycentricCoords_2(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CALCBARYCENTRICCOORDS_2_OFFSET))(this, point);
		}
		*/

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_DISTANCETO_OFFSET))(this, point);
		}

		::System::Int32 QuerySideCCW(::UnityEngine::Vector2 point, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_QUERYSIDECCW_OFFSET))(this, point, epsilon);
		}

		::System::Int32 QuerySideCW(::UnityEngine::Vector2 point, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_QUERYSIDECW_OFFSET))(this, point, epsilon);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Boolean ContainsCCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINSCCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsCCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINSCCW_1_OFFSET))(this, point);
		}

		::System::Boolean ContainsCW(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINSCW_OFFSET))(this, point);
		}

		::System::Boolean ContainsCW_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_CONTAINSCW_1_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2_TOSTRING_OFFSET))(this);
		}
	};
}
