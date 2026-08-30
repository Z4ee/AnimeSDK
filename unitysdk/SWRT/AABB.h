#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SWRT_AABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3C72640)
#define SWRT_AABB_GET_EXTENDS_OFFSET UNITYSDK_OFFSET(0x3C6B9C0)
#define SWRT_AABB_GET_MAX_OFFSET UNITYSDK_OFFSET(0x379FAC0)
#define SWRT_AABB_GET_MIN_OFFSET UNITYSDK_OFFSET(0x17670)
#define SWRT_AABB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x3AF6AF0)
#define SWRT_AABB_SET_MAX_OFFSET UNITYSDK_OFFSET(0x379FAE0)
#define SWRT_AABB_SET_MIN_OFFSET UNITYSDK_OFFSET(0x17490)
#define SWRT_AABB_SURFACEAREA_OFFSET UNITYSDK_OFFSET(0x3C72850)
#define SWRT_AABB_UNION_1_OFFSET UNITYSDK_OFFSET(0x1EE60E60)
#define SWRT_AABB_UNION_OFFSET UNITYSDK_OFFSET(0x3C72800)
#define SWRT_AABB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C72720)
#define SWRT_AABB__CTOR_OFFSET UNITYSDK_OFFSET(0x3C72680)

namespace SWRT
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 36805;

	struct alignas(4) AABB
	{
		::UnityEngine::Vector3 _Min_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Max_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_Min()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB_SET_MIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Max()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB_SET_MAX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_CENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Extends()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_EXTENDS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_SIZE_OFFSET))(this);
		}

		::System::Void Union(::SWRT::AABB a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::AABB))((::PBYTE)hIl2Cpp + SWRT_AABB_UNION_OFFSET))(this, a1);
		}

		static ::SWRT::AABB Union_1(::SWRT::AABB a1, ::SWRT::AABB a2)
		{
			return ((::SWRT::AABB(*)(::SWRT::AABB, ::SWRT::AABB))((::PBYTE)hIl2Cpp + SWRT_AABB_UNION_1_OFFSET))(a1, a2);
		}

		::System::Single SurfaceArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_SURFACEAREA_OFFSET))(this);
		}
	};
}
