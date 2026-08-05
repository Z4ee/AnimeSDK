#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA47230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA471A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA47310)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E9B9B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E9B9BC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA47190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA47130)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA47160)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA47110)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SamplePointUData_TypeDefinitionIndex = 39621;

	struct alignas(4) SamplePointUData
	{
		::System::Int32 Vertex; // 0x10
		::System::Boolean UVEdge; // 0x14
		::System::Boolean HardEdge; // 0x15
		::System::Single FirstU; // 0x18
		::System::Single SecondU; // 0x1C

		::System::Void _ctor(::System::Int32 vertexIndex, ::System::Boolean uvEdge, ::System::Single firstU, ::System::Single secondU)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_OFFSET))(this, vertexIndex, uvEdge, firstU, secondU);
		}

		::System::Void _ctor_1(::System::Int32 vertexIndex, ::System::Boolean uvEdge, ::System::Boolean hardEdge, ::System::Single firstU, ::System::Single secondU)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_1_OFFSET))(this, vertexIndex, uvEdge, hardEdge, firstU, secondU);
		}

		/*
		::System::Void _ctor_2(::System::Int32 vertexIndex, ::FluffyUnderware::Curvy::Generator::ControlPointOption controlPointsOption)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FluffyUnderware::Curvy::Generator::ControlPointOption))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA__CTOR_2_OFFSET))(this, vertexIndex, controlPointsOption);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::SamplePointUData other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::SamplePointUData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::SamplePointUData left, ::FluffyUnderware::Curvy::Generator::SamplePointUData right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::SamplePointUData, ::FluffyUnderware::Curvy::Generator::SamplePointUData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::SamplePointUData left, ::FluffyUnderware::Curvy::Generator::SamplePointUData right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::SamplePointUData, ::FluffyUnderware::Curvy::Generator::SamplePointUData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTUDATA_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
