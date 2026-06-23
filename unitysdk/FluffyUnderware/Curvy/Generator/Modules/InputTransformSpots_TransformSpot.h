#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9F8AB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8A60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F8B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D61BC90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D61BCE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputTransformSpots_TransformSpot_TypeDefinitionIndex = 38896;

	struct alignas(8) InputTransformSpots_TransformSpot
	{
		::System::Int32 index; // 0x10
		::UnityEngine::Transform* transform; // 0x18

		::System::Void _ctor(::System::Int32 index, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT__CTOR_OFFSET))(this, index, transform);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot left, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot left, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_TRANSFORMSPOT_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
