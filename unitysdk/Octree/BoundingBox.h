#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define OCTREE_BOUNDINGBOX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x7F3A70)
#define OCTREE_BOUNDINGBOX_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x7F3890)
#define OCTREE_BOUNDINGBOX_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x7F3860)
#define OCTREE_BOUNDINGBOX_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F3E80)
#define OCTREE_BOUNDINGBOX_EXPAND_1_OFFSET UNITYSDK_OFFSET(0x7F3990)
#define OCTREE_BOUNDINGBOX_EXPAND_OFFSET UNITYSDK_OFFSET(0x7F38C0)
#define OCTREE_BOUNDINGBOX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F3CA0)
#define OCTREE_BOUNDINGBOX_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define OCTREE_BOUNDINGBOX_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x457AA0)
#define OCTREE_BOUNDINGBOX_GET_MAX_OFFSET UNITYSDK_OFFSET(0x7C3A60)
#define OCTREE_BOUNDINGBOX_GET_MIN_OFFSET UNITYSDK_OFFSET(0x7F3660)
#define OCTREE_BOUNDINGBOX_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x7F3570)
#define OCTREE_BOUNDINGBOX_INTERSECTRAY_1_OFFSET UNITYSDK_OFFSET(0x7F3C70)
#define OCTREE_BOUNDINGBOX_INTERSECTRAY_OFFSET UNITYSDK_OFFSET(0x7F3BE0)
#define OCTREE_BOUNDINGBOX_INTERSECTSPHERE_OFFSET UNITYSDK_OFFSET(0x7F3BC0)
#define OCTREE_BOUNDINGBOX_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x7F3B90)
#define OCTREE_BOUNDINGBOX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14213C50)
#define OCTREE_BOUNDINGBOX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14213D10)
#define OCTREE_BOUNDINGBOX_SETMINMAX_OFFSET UNITYSDK_OFFSET(0x7F3730)
#define OCTREE_BOUNDINGBOX_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x34AC00)
#define OCTREE_BOUNDINGBOX_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x7C3A50)
#define OCTREE_BOUNDINGBOX_SET_MAX_OFFSET UNITYSDK_OFFSET(0x7F36C0)
#define OCTREE_BOUNDINGBOX_SET_MIN_OFFSET UNITYSDK_OFFSET(0x7F3690)
#define OCTREE_BOUNDINGBOX_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x7F3590)
#define OCTREE_BOUNDINGBOX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x7F3EA0)
#define OCTREE_BOUNDINGBOX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F3E90)
#define OCTREE_BOUNDINGBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x7F36F0)
#define OCTREE_BOUNDINGBOX__INTERSECTSPHERE_G__CLAMP_25_0_OFFSET UNITYSDK_OFFSET(0x14213470)
#define OCTREE_BOUNDINGBOX___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F3EB0)
#define OCTREE_BOUNDINGBOX___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F3F20)
#define OCTREE_BOUNDINGBOX___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F3F90)

namespace Octree
{
	inline static constexpr unsigned int BoundingBox_TypeDefinitionIndex = 87777;

	struct alignas(4) BoundingBox
	{
		::System::Numerics::Vector3 _Center_k__BackingField; // 0x10
		::System::Numerics::Vector3 _Extents_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Numerics::Vector3 center, ::System::Numerics::Vector3 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX__CTOR_OFFSET))(this, center, size);
		}

		::System::Numerics::Vector3 get_Center()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_Center(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SET_CENTER_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 get_Extents()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_Extents(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SET_EXTENTS_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 get_Size()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SET_SIZE_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 get_Min()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SET_MIN_OFFSET))(this, value);
		}

		::System::Numerics::Vector3 get_Max()
		{
			return ((::System::Numerics::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::System::Numerics::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SET_MAX_OFFSET))(this, value);
		}

		::System::Void SetMinMax(::System::Numerics::Vector3 min, ::System::Numerics::Vector3 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_SETMINMAX_OFFSET))(this, min, max);
		}

		::System::Void Encapsulate(::System::Numerics::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_ENCAPSULATE_OFFSET))(this, point);
		}

		::System::Void Encapsulate_1(::Octree::BoundingBox box)
		{
			return ((::System::Void(*)(::PVOID, ::Octree::BoundingBox))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_ENCAPSULATE_1_OFFSET))(this, box);
		}

		::System::Void Expand(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_EXPAND_OFFSET))(this, amount);
		}

		::System::Void Expand_1(::System::Numerics::Vector3 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_EXPAND_1_OFFSET))(this, amount);
		}

		::System::Boolean Contains(::System::Numerics::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Intersects(::Octree::BoundingBox box)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::BoundingBox))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_INTERSECTS_OFFSET))(this, box);
		}

		/*
		::System::Boolean IntersectSphere(::Octree::Sphere sphere)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Sphere))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_INTERSECTSPHERE_OFFSET))(this, sphere);
		}
		*/

		/*
		::System::Boolean IntersectRay(::Octree::Ray ray)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Ray))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_INTERSECTRAY_OFFSET))(this, ray);
		}
		*/

		/*
		::System::Boolean IntersectRay_1(::Octree::Ray ray, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_INTERSECTRAY_1_OFFSET))(this, ray, distance);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Boolean op_Equality(::Octree::BoundingBox lhs, ::Octree::BoundingBox rhs)
		{
			return ((::System::Boolean(*)(::Octree::BoundingBox, ::Octree::BoundingBox))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::Octree::BoundingBox lhs, ::Octree::BoundingBox rhs)
		{
			return ((::System::Boolean(*)(::Octree::BoundingBox, ::Octree::BoundingBox))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Single _IntersectSphere_g__Clamp_25_0(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX__INTERSECTSPHERE_G__CLAMP_25_0_OFFSET))(value, min, max);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_BOUNDINGBOX___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
