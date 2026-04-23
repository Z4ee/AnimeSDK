#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SWRT_AABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x22B9BD0)
#define SWRT_AABB_GET_EXTENDS_OFFSET UNITYSDK_OFFSET(0x22B9C10)
#define SWRT_AABB_GET_MAX_OFFSET UNITYSDK_OFFSET(0x245F0)
#define SWRT_AABB_GET_MIN_OFFSET UNITYSDK_OFFSET(0x245D0)
#define SWRT_AABB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x22B83B0)
#define SWRT_AABB_SET_MAX_OFFSET UNITYSDK_OFFSET(0x1707730)
#define SWRT_AABB_SET_MIN_OFFSET UNITYSDK_OFFSET(0xDE0E0)
#define SWRT_AABB_SURFACEAREA_OFFSET UNITYSDK_OFFSET(0x22B9E20)
#define SWRT_AABB_UNION_1_OFFSET UNITYSDK_OFFSET(0x18187060)
#define SWRT_AABB_UNION_OFFSET UNITYSDK_OFFSET(0x22B9DD0)
#define SWRT_AABB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22B9CF0)
#define SWRT_AABB__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9C50)

namespace SWRT
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 34879;

	struct alignas(4) AABB
	{
		::UnityEngine::Vector3 _Min_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Max_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB__CTOR_OFFSET))(this, p0, p1);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB__CTOR_1_OFFSET))(this, p0, p1, p2);
		}

		::UnityEngine::Vector3 get_Min()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB_SET_MIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Max()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SWRT_AABB_SET_MAX_OFFSET))(this, value);
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

		::System::Void Union(::SWRT::AABB a)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::AABB))((::PBYTE)hIl2Cpp + SWRT_AABB_UNION_OFFSET))(this, a);
		}

		static ::SWRT::AABB Union_1(::SWRT::AABB v1, ::SWRT::AABB v2)
		{
			return ((::SWRT::AABB(*)(::SWRT::AABB, ::SWRT::AABB))((::PBYTE)hIl2Cpp + SWRT_AABB_UNION_1_OFFSET))(v1, v2);
		}

		::System::Single SurfaceArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_AABB_SURFACEAREA_OFFSET))(this);
		}
	};
}
