#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OCTREE_RAY_GETPOINT_OFFSET UNITYSDK_OFFSET(0x79CF40)
#define OCTREE_RAY_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x3FFA00)
#define OCTREE_RAY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define OCTREE_RAY_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x79CE10)
#define OCTREE_RAY_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define OCTREE_RAY_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x79D030)
#define OCTREE_RAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79D020)
#define OCTREE_RAY__CTOR_OFFSET UNITYSDK_OFFSET(0x79CEC0)
#define OCTREE_RAY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79D040)

namespace Octree
{
	inline static constexpr unsigned int Ray_TypeDefinitionIndex = 60558;

	struct alignas(4) Ray
	{
		::System::Numerics::Vector3 _Origin_k__BackingField; // 0x10
		::System::Numerics::Vector3 _direction; // 0x1C

		::System::Void _ctor(::System::Numerics::Vector3 origin, ::System::Numerics::Vector3 direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_RAY__CTOR_OFFSET))(this, origin, direction);
		}

		::System::Numerics::Vector3 get_Origin()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_RAY_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_Origin(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_RAY_SET_ORIGIN_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 get_Direction()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_RAY_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_RAY_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 GetPoint(::System::Single distance)
		{
			return ((::System::Numerics::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_RAY_GETPOINT_OFFSET))(this, distance);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_RAY_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCTREE_RAY_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_RAY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
