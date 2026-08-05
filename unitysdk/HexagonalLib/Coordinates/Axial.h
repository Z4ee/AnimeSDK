#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA83A20)
#define HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xA83A80)
#define HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA83A10)
#define HEXAGONALLIB_COORDINATES_AXIAL_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0xA83BC0)
#define HEXAGONALLIB_COORDINATES_AXIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA83B10)
#define HEXAGONALLIB_COORDINATES_AXIAL_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EFE3C90)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x1EFE3DC0)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EFE3D50)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EFE3CB0)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EFE3D00)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EFE3EF0)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1EFE3E90)
#define HEXAGONALLIB_COORDINATES_AXIAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EFE3E20)
#define HEXAGONALLIB_COORDINATES_AXIAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA83BD0)
#define HEXAGONALLIB_COORDINATES_AXIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)
#define HEXAGONALLIB_COORDINATES_AXIAL___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA83BE0)
#define HEXAGONALLIB_COORDINATES_AXIAL___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA83C40)
#define HEXAGONALLIB_COORDINATES_AXIAL___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA83CA0)

namespace HexagonalLib::Coordinates
{
	inline static constexpr unsigned int Axial_TypeDefinitionIndex = 29381;

	struct alignas(4) Axial
	{
		::System::Int32 Q; // 0x10
		::System::Int32 R; // 0x14

		::System::Void _ctor(::System::Int32 q, ::System::Int32 r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL__CTOR_OFFSET))(this, q, r);
		}

		static ::HexagonalLib::Coordinates::Axial get_Zero()
		{
			return ((::HexagonalLib::Coordinates::Axial(*)())((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_GET_ZERO_OFFSET))();
		}

		static ::System::Boolean op_Equality(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_EQUALITY_OFFSET))(coord1, coord2);
		}

		static ::System::Boolean op_Inequality(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_INEQUALITY_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Axial op_Addition(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_ADDITION_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Axial op_Addition_1(::HexagonalLib::Coordinates::Axial coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_ADDITION_1_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Axial op_Subtraction(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_SUBTRACTION_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Axial op_Subtraction_1(::HexagonalLib::Coordinates::Axial coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_SUBTRACTION_1_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Axial op_Multiply(::HexagonalLib::Coordinates::Axial coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::HexagonalLib::Coordinates::Axial, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_OP_MULTIPLY_OFFSET))(coord, offset);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::HexagonalLib::Coordinates::Axial other)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::HexagonalLib::Coordinates::Axial coord1, ::HexagonalLib::Coordinates::Axial coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Axial, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_EQUALS_2_OFFSET))(this, coord1, coord2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode_1(::HexagonalLib::Coordinates::Axial axial)
		{
			return ((::System::Int32(*)(::PVOID, ::HexagonalLib::Coordinates::Axial))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_GETHASHCODE_1_OFFSET))(this, axial);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_AXIAL___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
