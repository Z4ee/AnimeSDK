#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_TRIANGLE3_CALCANGLESDEG_1_OFFSET UNITYSDK_OFFSET(0x1F9EA780)
#define DEST_MATH_TRIANGLE3_CALCANGLESDEG_2_OFFSET UNITYSDK_OFFSET(0x1F9EA8E0)
#define DEST_MATH_TRIANGLE3_CALCANGLESDEG_OFFSET UNITYSDK_OFFSET(0xAC0BC0)
#define DEST_MATH_TRIANGLE3_CALCANGLESRAD_1_OFFSET UNITYSDK_OFFSET(0x1F9EABA0)
#define DEST_MATH_TRIANGLE3_CALCANGLESRAD_2_OFFSET UNITYSDK_OFFSET(0x1F9EAD00)
#define DEST_MATH_TRIANGLE3_CALCANGLESRAD_OFFSET UNITYSDK_OFFSET(0xAC0D10)
#define DEST_MATH_TRIANGLE3_CALCAREA_1_OFFSET UNITYSDK_OFFSET(0x1F9EA530)
#define DEST_MATH_TRIANGLE3_CALCAREA_2_OFFSET UNITYSDK_OFFSET(0x1F9EA5B0)
#define DEST_MATH_TRIANGLE3_CALCAREA_OFFSET UNITYSDK_OFFSET(0xAC0B40)
#define DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_1_OFFSET UNITYSDK_OFFSET(0xAC0FA0)
#define DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_2_OFFSET UNITYSDK_OFFSET(0xAC1000)
#define DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_OFFSET UNITYSDK_OFFSET(0x1F9EAFA0)
#define DEST_MATH_TRIANGLE3_CALCEDGE_OFFSET UNITYSDK_OFFSET(0xAC0A30)
#define DEST_MATH_TRIANGLE3_CALCNORMAL_OFFSET UNITYSDK_OFFSET(0xAC0AC0)
#define DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_1_OFFSET UNITYSDK_OFFSET(0xAC0ED0)
#define DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_2_OFFSET UNITYSDK_OFFSET(0xAC0F40)
#define DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_OFFSET UNITYSDK_OFFSET(0xAC0E70)
#define DEST_MATH_TRIANGLE3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xAC09A0)
#define DEST_MATH_TRIANGLE3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xAC0A00)
#define DEST_MATH_TRIANGLE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAC1070)
#define DEST_MATH_TRIANGLE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA5FFC0)
#define DEST_MATH_TRIANGLE3__CTOR_OFFSET UNITYSDK_OFFSET(0xA91B50)

namespace Dest::Math
{
	inline static constexpr unsigned int Triangle3_TypeDefinitionIndex = 35443;

	struct alignas(4) Triangle3
	{
		::UnityEngine::Vector3 V0; // 0x10
		::UnityEngine::Vector3 V1; // 0x1C
		::UnityEngine::Vector3 V2; // 0x28

		::System::Void _ctor(::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3__CTOR_OFFSET))(this, v0, v1, v2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3__CTOR_1_OFFSET))(this, v0, v1, v2);
		}

		::UnityEngine::Vector3 get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_SET_ITEM_OFFSET))(this, index, value);
		}

		::UnityEngine::Vector3 CalcEdge(::System::Int32 edgeIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCEDGE_OFFSET))(this, edgeIndex);
		}

		::UnityEngine::Vector3 CalcNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCNORMAL_OFFSET))(this);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCAREA_OFFSET))(this);
		}

		static ::System::Single CalcArea_1(::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCAREA_1_OFFSET))(v0, v1, v2);
		}

		static ::System::Single CalcArea_2(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCAREA_2_OFFSET))(v0, v1, v2);
		}

		::UnityEngine::Vector3 CalcAnglesDeg()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESDEG_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 CalcAnglesDeg_1(::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESDEG_1_OFFSET))(v0, v1, v2);
		}

		static ::UnityEngine::Vector3 CalcAnglesDeg_2(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESDEG_2_OFFSET))(v0, v1, v2);
		}

		::UnityEngine::Vector3 CalcAnglesRad()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESRAD_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 CalcAnglesRad_1(::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESRAD_1_OFFSET))(v0, v1, v2);
		}

		static ::UnityEngine::Vector3 CalcAnglesRad_2(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCANGLESRAD_2_OFFSET))(v0, v1, v2);
		}

		::UnityEngine::Vector3 EvalBarycentric(::System::Single c0, ::System::Single c1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_OFFSET))(this, c0, c1);
		}

		::UnityEngine::Vector3 EvalBarycentric_1(::UnityEngine::Vector3& baryCoords)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_1_OFFSET))(this, baryCoords);
		}

		::UnityEngine::Vector3 EvalBarycentric_2(::UnityEngine::Vector3 baryCoords)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_EVALBARYCENTRIC_2_OFFSET))(this, baryCoords);
		}

		static ::System::Void CalcBarycentricCoords(::UnityEngine::Vector3& point, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::UnityEngine::Vector3& baryCoords)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_OFFSET))(point, v0, v1, v2, baryCoords);
		}

		::UnityEngine::Vector3 CalcBarycentricCoords_1(::UnityEngine::Vector3& point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_1_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 CalcBarycentricCoords_2(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_CALCBARYCENTRICCOORDS_2_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3_TOSTRING_OFFSET))(this);
		}
	};
}
