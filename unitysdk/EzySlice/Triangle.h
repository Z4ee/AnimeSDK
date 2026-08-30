#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace EzySlice { class IntersectionResult; }

#define EZYSLICE_TRIANGLE_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x26010)
#define EZYSLICE_TRIANGLE_COMPUTETANGENTS_OFFSET UNITYSDK_OFFSET(0x26000)
#define EZYSLICE_TRIANGLE_GENERATENORMAL_OFFSET UNITYSDK_OFFSET(0x260F0)
#define EZYSLICE_TRIANGLE_GENERATETANGENT_OFFSET UNITYSDK_OFFSET(0x261C0)
#define EZYSLICE_TRIANGLE_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x26040)
#define EZYSLICE_TRIANGLE_GET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x25EB0)
#define EZYSLICE_TRIANGLE_GET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x25F80)
#define EZYSLICE_TRIANGLE_GET_HASUV_OFFSET UNITYSDK_OFFSET(0x25E50)
#define EZYSLICE_TRIANGLE_GET_NORMALA_OFFSET UNITYSDK_OFFSET(0x25F20)
#define EZYSLICE_TRIANGLE_GET_NORMALB_OFFSET UNITYSDK_OFFSET(0x25F40)
#define EZYSLICE_TRIANGLE_GET_NORMALC_OFFSET UNITYSDK_OFFSET(0x25F60)
#define EZYSLICE_TRIANGLE_GET_POSITIONA_OFFSET UNITYSDK_OFFSET(0x254E0)
#define EZYSLICE_TRIANGLE_GET_POSITIONB_OFFSET UNITYSDK_OFFSET(0x25500)
#define EZYSLICE_TRIANGLE_GET_POSITIONC_OFFSET UNITYSDK_OFFSET(0x25E30)
#define EZYSLICE_TRIANGLE_GET_TANGENTA_OFFSET UNITYSDK_OFFSET(0x25FD0)
#define EZYSLICE_TRIANGLE_GET_TANGENTB_OFFSET UNITYSDK_OFFSET(0x25FE0)
#define EZYSLICE_TRIANGLE_GET_TANGENTC_OFFSET UNITYSDK_OFFSET(0x25FF0)
#define EZYSLICE_TRIANGLE_GET_UVA_OFFSET UNITYSDK_OFFSET(0x25E80)
#define EZYSLICE_TRIANGLE_GET_UVB_OFFSET UNITYSDK_OFFSET(0x25E90)
#define EZYSLICE_TRIANGLE_GET_UVC_OFFSET UNITYSDK_OFFSET(0x25EA0)
#define EZYSLICE_TRIANGLE_ISCW_OFFSET UNITYSDK_OFFSET(0x262D0)
#define EZYSLICE_TRIANGLE_ONDEBUGDRAW_1_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_TRIANGLE_ONDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_TRIANGLE_SETNORMAL_OFFSET UNITYSDK_OFFSET(0x25EC0)
#define EZYSLICE_TRIANGLE_SETTANGENT_OFFSET UNITYSDK_OFFSET(0x25F90)
#define EZYSLICE_TRIANGLE_SETUV_OFFSET UNITYSDK_OFFSET(0x25E60)
#define EZYSLICE_TRIANGLE_SIGNEDSQUARE_OFFSET UNITYSDK_OFFSET(0xB17EBD0)
#define EZYSLICE_TRIANGLE_SPLIT_OFFSET UNITYSDK_OFFSET(0x26270)
#define EZYSLICE_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x25D40)

namespace EzySlice
{
	inline static constexpr unsigned int Triangle_TypeDefinitionIndex = 47461;

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

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetUV(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETUV_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetNormal(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETNORMAL_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetTangent(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SETTANGENT_OFFSET))(this, a1, a2, a3);
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

		::UnityEngine::Vector3 Barycentric(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_BARYCENTRIC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GenerateUV(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATEUV_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GenerateNormal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATENORMAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GenerateTangent(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_GENERATETANGENT_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Split(::EzySlice::Plane a1, ::EzySlice::IntersectionResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::EzySlice::Plane, ::EzySlice::IntersectionResult*))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SPLIT_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean IsCW()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ISCW_OFFSET))(this);
		}

		static ::System::Single SignedSquare(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_SIGNEDSQUARE_OFFSET))(a1, a2, a3);
		}

		::System::Void OnDebugDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ONDEBUGDRAW_OFFSET))(this);
		}

		/*
		::System::Void OnDebugDraw_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGLE_ONDEBUGDRAW_1_OFFSET))(this, a1);
		}
		*/
	};
}
