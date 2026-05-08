#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HEXAGONALLIB_COORDINATES_OFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x9AEB00)
#define HEXAGONALLIB_COORDINATES_OFFSET_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1BC595D0)
#define HEXAGONALLIB_COORDINATES_OFFSET_CLAMP_OFFSET UNITYSDK_OFFSET(0x1BC594D0)
#define HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9AEB80)
#define HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x9AEBE0)
#define HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AEB70)
#define HEXAGONALLIB_COORDINATES_OFFSET_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x9AED20)
#define HEXAGONALLIB_COORDINATES_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AEC70)
#define HEXAGONALLIB_COORDINATES_OFFSET_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x1BC59400)
#define HEXAGONALLIB_COORDINATES_OFFSET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AEAA0)
#define HEXAGONALLIB_COORDINATES_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1BC593E0)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x1BC59740)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BC596D0)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BC59810)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BC59630)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BC59680)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BC59870)
#define HEXAGONALLIB_COORDINATES_OFFSET_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BC597A0)
#define HEXAGONALLIB_COORDINATES_OFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AED30)
#define HEXAGONALLIB_COORDINATES_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)
#define HEXAGONALLIB_COORDINATES_OFFSET___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AED40)
#define HEXAGONALLIB_COORDINATES_OFFSET___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AEDA0)
#define HEXAGONALLIB_COORDINATES_OFFSET___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AEE00)

namespace HexagonalLib::Coordinates
{
	inline static constexpr unsigned int Offset_TypeDefinitionIndex = 26359;

	struct alignas(4) Offset
	{
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET__CTOR_OFFSET))(this, x, y);
		}

		static ::HexagonalLib::Coordinates::Offset get_Zero()
		{
			return ((::HexagonalLib::Coordinates::Offset(*)())((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_GET_ZERO_OFFSET))();
		}

		static ::HexagonalLib::Coordinates::Offset get_Invalid()
		{
			return ((::HexagonalLib::Coordinates::Offset(*)())((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_GET_INVALID_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_GET_ISVALID_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Offset Add(::System::Int32 xOffset, ::System::Int32 yOffset)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_ADD_OFFSET))(this, xOffset, yOffset);
		}

		static ::HexagonalLib::Coordinates::Offset Clamp(::HexagonalLib::Coordinates::Offset coord, ::HexagonalLib::Coordinates::Offset min, ::HexagonalLib::Coordinates::Offset max)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_CLAMP_OFFSET))(coord, min, max);
		}

		static ::System::Int32 Clamp_1(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Boolean op_Equality(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_EQUALITY_OFFSET))(coord1, coord2);
		}

		static ::System::Boolean op_Inequality(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::System::Boolean(*)(::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_INEQUALITY_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Offset op_Addition(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_ADDITION_OFFSET))(coord1, coord2);
		}

		static ::HexagonalLib::Coordinates::Offset op_Addition_1(::HexagonalLib::Coordinates::Offset coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_ADDITION_1_OFFSET))(coord, offset);
		}

		static ::HexagonalLib::Coordinates::Offset op_Subtraction(::HexagonalLib::Coordinates::Offset coord, ::HexagonalLib::Coordinates::Offset index2)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_SUBTRACTION_OFFSET))(coord, index2);
		}

		static ::HexagonalLib::Coordinates::Offset op_Division(::HexagonalLib::Coordinates::Offset coord, ::System::Int32 value)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_DIVISION_OFFSET))(coord, value);
		}

		static ::HexagonalLib::Coordinates::Offset op_Multiply(::HexagonalLib::Coordinates::Offset coord, ::System::Int32 offset)
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::HexagonalLib::Coordinates::Offset, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_OP_MULTIPLY_OFFSET))(coord, offset);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::HexagonalLib::Coordinates::Offset other)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::HexagonalLib::Coordinates::Offset coord1, ::HexagonalLib::Coordinates::Offset coord2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_EQUALS_2_OFFSET))(this, coord1, coord2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode_1(::HexagonalLib::Coordinates::Offset coord)
		{
			return ((::System::Int32(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_GETHASHCODE_1_OFFSET))(this, coord);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_COORDINATES_OFFSET___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
