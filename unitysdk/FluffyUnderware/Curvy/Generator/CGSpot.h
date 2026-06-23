#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA73B50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA739A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA73B60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0xA737A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2ACBC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3E6590)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2C7F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E657850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E657A00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2ACB80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x446EF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA73790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_TOTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA73920)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA738B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT__CTOR_OFFSET UNITYSDK_OFFSET(0xA73840)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGSpot_TypeDefinitionIndex = 38954;

	struct alignas(4) CGSpot
	{
		::System::Int32 m_Index; // 0x10
		::UnityEngine::Vector3 m_Position; // 0x14
		::UnityEngine::Quaternion m_Rotation; // 0x20
		::UnityEngine::Vector3 m_Scale; // 0x30

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT__CTOR_OFFSET))(this, index);
		}

		::System::Void _ctor_1(::System::Int32 index, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT__CTOR_1_OFFSET))(this, index, position, rotation, scale);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_SET_SCALE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Matrix4x4 get_Matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GET_MATRIX_OFFSET))(this);
		}
		*/

		::System::Void ToTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_TOTRANSFORM_OFFSET))(this, transform);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::CGSpot other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::CGSpot left, ::FluffyUnderware::Curvy::Generator::CGSpot right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGSpot, ::FluffyUnderware::Curvy::Generator::CGSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::CGSpot left, ::FluffyUnderware::Curvy::Generator::CGSpot right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGSpot, ::FluffyUnderware::Curvy::Generator::CGSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOT_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
