#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OCTREE_SPHERE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define OCTREE_SPHERE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x43E9B0)
#define OCTREE_SPHERE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define OCTREE_SPHERE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x469DB0)
#define OCTREE_SPHERE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x713730)
#define OCTREE_SPHERE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x713720)
#define OCTREE_SPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x3D5CA0)
#define OCTREE_SPHERE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x713740)

namespace Octree
{
	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 51695;

	struct alignas(4) Sphere
	{
		::System::Numerics::Vector3 _Center_k__BackingField; // 0x10
		::System::Single _Radius_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Numerics::Vector3 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_SPHERE__CTOR_OFFSET))(this, center, radius);
		}

		::System::Numerics::Vector3 get_Center()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_Center(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_SET_RADIUS_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCTREE_SPHERE_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_SPHERE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
