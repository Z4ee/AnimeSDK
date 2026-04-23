#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/SideOfPlane.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EZYSLICE_PLANE_COMPUTE_1_OFFSET UNITYSDK_OFFSET(0x247B0)
#define EZYSLICE_PLANE_COMPUTE_2_OFFSET UNITYSDK_OFFSET(0x249C0)
#define EZYSLICE_PLANE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x24610)
#define EZYSLICE_PLANE_GET_DIST_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define EZYSLICE_PLANE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x245D0)
#define EZYSLICE_PLANE_ONDEBUGDRAW_1_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_PLANE_ONDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1020)
#define EZYSLICE_PLANE_SIDEOF_OFFSET UNITYSDK_OFFSET(0x24BE0)
#define EZYSLICE_PLANE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x24650)
#define EZYSLICE_PLANE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x24670)
#define EZYSLICE_PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x24610)

namespace EzySlice
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 43810;

	struct alignas(4) Plane
	{
		::UnityEngine::Vector3 m_normal; // 0x10
		::System::Single m_dist; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 norm)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_OFFSET))(this, pos, norm);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 norm, ::System::Single dot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_1_OFFSET))(this, norm, dot);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_2_OFFSET))(this, a, b, c);
		}

		::System::Void Compute(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 norm)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_OFFSET))(this, pos, norm);
		}

		::System::Void Compute_1(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_1_OFFSET))(this, trans);
		}

		::System::Void Compute_2(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_2_OFFSET))(this, obj);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_GET_NORMAL_OFFSET))(this);
		}

		::System::Single get_dist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_GET_DIST_OFFSET))(this);
		}

		::EzySlice::SideOfPlane SideOf(::UnityEngine::Vector3 pt)
		{
			return ((::EzySlice::SideOfPlane(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_SIDEOF_OFFSET))(this, pt);
		}

		::System::Void OnDebugDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_ONDEBUGDRAW_OFFSET))(this);
		}

		/*
		::System::Void OnDebugDraw_1(::UnityEngine::Color drawColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_ONDEBUGDRAW_1_OFFSET))(this, drawColor);
		}
		*/
	};
}
