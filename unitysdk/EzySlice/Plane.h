#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/SideOfPlane.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EZYSLICE_PLANE_COMPUTE_1_OFFSET UNITYSDK_OFFSET(0x3A3DEE0)
#define EZYSLICE_PLANE_COMPUTE_2_OFFSET UNITYSDK_OFFSET(0x3A3E0F0)
#define EZYSLICE_PLANE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x3A3DD60)
#define EZYSLICE_PLANE_GET_DIST_OFFSET UNITYSDK_OFFSET(0xA4C4A0)
#define EZYSLICE_PLANE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x165820)
#define EZYSLICE_PLANE_ONDEBUGDRAW_1_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EZYSLICE_PLANE_ONDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EZYSLICE_PLANE_SIDEOF_OFFSET UNITYSDK_OFFSET(0x3A3E310)
#define EZYSLICE_PLANE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6EA800)
#define EZYSLICE_PLANE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3A3DDA0)
#define EZYSLICE_PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A3DD60)

namespace EzySlice
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 45222;

	struct alignas(4) Plane
	{
		::UnityEngine::Vector3 m_normal; // 0x10
		::System::Single m_dist; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Compute(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Compute_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_1_OFFSET))(this, a1);
		}

		::System::Void Compute_2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_COMPUTE_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_GET_NORMAL_OFFSET))(this);
		}

		::System::Single get_dist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_GET_DIST_OFFSET))(this);
		}

		::EzySlice::SideOfPlane SideOf(::UnityEngine::Vector3 a1)
		{
			return ((::EzySlice::SideOfPlane(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_SIDEOF_OFFSET))(this, a1);
		}

		::System::Void OnDebugDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_ONDEBUGDRAW_OFFSET))(this);
		}

		/*
		::System::Void OnDebugDraw_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EZYSLICE_PLANE_ONDEBUGDRAW_1_OFFSET))(this, a1);
		}
		*/
	};
}
