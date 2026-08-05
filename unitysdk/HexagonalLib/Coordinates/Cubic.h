#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA8C230)
#define HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xA8C2A0)
#define HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8C220)
#define HEXAGONALLIB_COORDINATES_CUBIC_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0xA8C3F0)
#define HEXAGONALLIB_COORDINATES_CUBIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8C2E0)
#define HEXAGONALLIB_COORDINATES_CUBIC_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1F05DDC0)
#define HEXAGONALLIB_COORDINATES_CUBIC_ISVALID_OFFSET UNITYSDK_OFFSET(0xA8C130)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x1F05E230)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1F05E190)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F05E080)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F05E110)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1F05E480)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F05E3F0)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1F05E360)
#define HEXAGONALLIB_COORDINATES_CUBIC_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1F05E2C0)
#define HEXAGONALLIB_COORDINATES_CUBIC_ROTATETORIGHT_1_OFFSET UNITYSDK_OFFSET(0xA8C200)
#define HEXAGONALLIB_COORDINATES_CUBIC_ROTATETORIGHT_OFFSET UNITYSDK_OFFSET(0xA8C180)
#define HEXAGONALLIB_COORDINATES_CUBIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8C420)
#define HEXAGONALLIB_COORDINATES_CUBIC__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA8C120)
#define HEXAGONALLIB_COORDINATES_CUBIC__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)
#define HEXAGONALLIB_COORDINATES_CUBIC___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8C430)
#define HEXAGONALLIB_COORDINATES_CUBIC___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8C4A0)
#define HEXAGONALLIB_COORDINATES_CUBIC___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8C510)

namespace HexagonalLib::Coordinates
{
	inline static constexpr unsigned int Cubic_TypeDefinitionIndex = 29653;

	struct alignas(4) Cubic
	{
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14
		::System::Int32 Z; // 0x18

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC__CTOR_OFFSET))(this, x, y, z);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC__CTOR_1_OFFSET))(this, x, y, z);
		}

		static ::HexagonalLib::Coordinates::Cubic get_Zero()
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)())((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_GET_ZERO_OFFSET))();
		}

		static ::System::Boolean op_Equality(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_EQUALITY_OFFSET))(coord1, coord2);
		}

		static ::System::Boolean op_Inequality(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_INEQUALITY_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Addition(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_ADDITION_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Addition_1(::HexagonalLib::Coordinates::Cubic coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_ADDITION_1_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Subtraction(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_SUBTRACTION_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Subtraction_1(::HexagonalLib::Coordinates::Cubic coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_SUBTRACTION_1_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Multiply(::HexagonalLib::Coordinates::Cubic coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_MULTIPLY_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Cubic op_Multiply_1(::HexagonalLib::Coordinates::Cubic coord, ::System::Single delta)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::HexagonalLib::Coordinates::Cubic, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_OP_MULTIPLY_1_OFFSET))(coord, delta);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_ISVALID_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Cubic RotateToRight()
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_ROTATETORIGHT_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Cubic RotateToRight_1(::System::Int32 times)
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_ROTATETORIGHT_1_OFFSET))(this, times);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::HexagonalLib::Coordinates::Cubic other)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::HexagonalLib::Coordinates::Cubic coord1, ::HexagonalLib::Coordinates::Cubic coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_EQUALS_2_OFFSET))(this, coord1, coord2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode_1(::HexagonalLib::Coordinates::Cubic coord)
		{
			return ((::System::Int32(*)(::PVOID, ::HexagonalLib::Coordinates::Cubic))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_GETHASHCODE_1_OFFSET))(this, coord);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_CUBIC___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
