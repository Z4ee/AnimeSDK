#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace EzySlice { class IntersectionResult; }

#define EZYSLICE_TRIANGLE_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x25110)
#define EZYSLICE_TRIANGLE_COMPUTETANGENTS_OFFSET UNITYSDK_OFFSET(0x25100)
#define EZYSLICE_TRIANGLE_GENERATENORMAL_OFFSET UNITYSDK_OFFSET(0x251F0)
#define EZYSLICE_TRIANGLE_GENERATETANGENT_OFFSET UNITYSDK_OFFSET(0x252C0)
#define EZYSLICE_TRIANGLE_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x25140)
#define EZYSLICE_TRIANGLE_GET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x24FB0)
#define EZYSLICE_TRIANGLE_GET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x25080)
#define EZYSLICE_TRIANGLE_GET_HASUV_OFFSET UNITYSDK_OFFSET(0x24F50)
#define EZYSLICE_TRIANGLE_GET_NORMALA_OFFSET UNITYSDK_OFFSET(0x25020)
#define EZYSLICE_TRIANGLE_GET_NORMALB_OFFSET UNITYSDK_OFFSET(0x25040)
#define EZYSLICE_TRIANGLE_GET_NORMALC_OFFSET UNITYSDK_OFFSET(0x25060)
#define EZYSLICE_TRIANGLE_GET_POSITIONA_OFFSET UNITYSDK_OFFSET(0x245E0)
#define EZYSLICE_TRIANGLE_GET_POSITIONB_OFFSET UNITYSDK_OFFSET(0x24600)
#define EZYSLICE_TRIANGLE_GET_POSITIONC_OFFSET UNITYSDK_OFFSET(0x24F30)
#define EZYSLICE_TRIANGLE_GET_TANGENTA_OFFSET UNITYSDK_OFFSET(0x250D0)
#define EZYSLICE_TRIANGLE_GET_TANGENTB_OFFSET UNITYSDK_OFFSET(0x250E0)
#define EZYSLICE_TRIANGLE_GET_TANGENTC_OFFSET UNITYSDK_OFFSET(0x250F0)
#define EZYSLICE_TRIANGLE_GET_UVA_OFFSET UNITYSDK_OFFSET(0x24F80)
#define EZYSLICE_TRIANGLE_GET_UVB_OFFSET UNITYSDK_OFFSET(0x24F90)
#define EZYSLICE_TRIANGLE_GET_UVC_OFFSET UNITYSDK_OFFSET(0x24FA0)
#define EZYSLICE_TRIANGLE_ISCW_OFFSET UNITYSDK_OFFSET(0x253D0)
#define EZYSLICE_TRIANGLE_ONDEBUGDRAW_1_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_TRIANGLE_ONDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_TRIANGLE_SETNORMAL_OFFSET UNITYSDK_OFFSET(0x24FC0)
#define EZYSLICE_TRIANGLE_SETTANGENT_OFFSET UNITYSDK_OFFSET(0x25090)
#define EZYSLICE_TRIANGLE_SETUV_OFFSET UNITYSDK_OFFSET(0x24F60)
#define EZYSLICE_TRIANGLE_SIGNEDSQUARE_OFFSET UNITYSDK_OFFSET(0x83E3D00)
#define EZYSLICE_TRIANGLE_SPLIT_OFFSET UNITYSDK_OFFSET(0x25370)
#define EZYSLICE_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x24E40)

namespace EzySlice
{
	inline static constexpr unsigned int Triangle_TypeDefinitionIndex = 37936;

	struct alignas(4) Triangle
	{
		::UnityEngine::Vector3 m_pos_a; // 0x10
		::UnityEngine::Vector3 m_pos_b; // 0x1C
		::UnityEngine::Vector3 m_pos_c; // 0x28
		::System::Boolean m_uv_set; // 0x34
		::UnityEngine::Vector2 m_uv_a; // 0x38
		::UnityEngine::Vector2 m_uv_b; // 0x40
		::UnityEngine::Vector2 m_uv_c; // 0x48
		::System::Boolean m_nor_set; // 0x50
		::UnityEngine::Vector3 m_nor_a; // 0x54
		::UnityEngine::Vector3 m_nor_b; // 0x60
		::UnityEngine::Vector3 m_nor_c; // 0x6C
		::System::Boolean m_tan_set; // 0x78
		::UnityEngine::Vector4 m_tan_a; // 0x7C
		::UnityEngine::Vector4 m_tan_b; // 0x8C
		::UnityEngine::Vector4 m_tan_c; // 0x9C

		::System::Void _ctor(::UnityEngine::Vector3 posa, ::UnityEngine::Vector3 posb, ::UnityEngine::Vector3 posc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE__CTOR_OFFSET))(this, posa, posb, posc);
		}

		::UnityEngine::Vector3 get_positionA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_POSITIONA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_POSITIONB_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_POSITIONC_OFFSET))(this);
		}

		::System::Boolean get_hasUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_HASUV_OFFSET))(this);
		}

		::System::Void SetUV(::UnityEngine::Vector2 uvA, ::UnityEngine::Vector2 uvB, ::UnityEngine::Vector2 uvC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETUV_OFFSET))(this, uvA, uvB, uvC);
		}

		::UnityEngine::Vector2 get_uvA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_UVA_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_uvB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_UVB_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_uvC()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_UVC_OFFSET))(this);
		}

		::System::Boolean get_hasNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_HASNORMAL_OFFSET))(this);
		}

		::System::Void SetNormal(::UnityEngine::Vector3 norA, ::UnityEngine::Vector3 norB, ::UnityEngine::Vector3 norC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETNORMAL_OFFSET))(this, norA, norB, norC);
		}

		::UnityEngine::Vector3 get_normalA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_NORMALA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normalB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_NORMALB_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normalC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_NORMALC_OFFSET))(this);
		}

		::System::Boolean get_hasTangent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_HASTANGENT_OFFSET))(this);
		}

		::System::Void SetTangent(::UnityEngine::Vector4 tanA, ::UnityEngine::Vector4 tanB, ::UnityEngine::Vector4 tanC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETTANGENT_OFFSET))(this, tanA, tanB, tanC);
		}

		::UnityEngine::Vector4 get_tangentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_TANGENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_tangentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_TANGENTB_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_tangentC()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GET_TANGENTC_OFFSET))(this);
		}

		::System::Void ComputeTangents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_COMPUTETANGENTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 Barycentric(::UnityEngine::Vector3 p)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_BARYCENTRIC_OFFSET))(this, p);
		}

		::UnityEngine::Vector2 GenerateUV(::UnityEngine::Vector3 pt)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATEUV_OFFSET))(this, pt);
		}

		::UnityEngine::Vector3 GenerateNormal(::UnityEngine::Vector3 pt)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATENORMAL_OFFSET))(this, pt);
		}

		::UnityEngine::Vector4 GenerateTangent(::UnityEngine::Vector3 pt)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATETANGENT_OFFSET))(this, pt);
		}

		/*
		::System::Boolean Split(::EzySlice::Plane pl, ::EzySlice::IntersectionResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::EzySlice::Plane, ::EzySlice::IntersectionResult*))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SPLIT_OFFSET))(this, pl, result);
		}
		*/

		::System::Boolean IsCW()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ISCW_OFFSET))(this);
		}

		static ::System::Single SignedSquare(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SIGNEDSQUARE_OFFSET))(a, b, c);
		}

		::System::Void OnDebugDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ONDEBUGDRAW_OFFSET))(this);
		}

		/*
		::System::Void OnDebugDraw_1(::UnityEngine::Color drawColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ONDEBUGDRAW_1_OFFSET))(this, drawColor);
		}
		*/
	};
}
