#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_794DA620EA232BC8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x801D40)
#define STRUCT_2_794DA620EA232BC8_EQUALS_OFFSET UNITYSDK_OFFSET(0x801CA0)
#define STRUCT_2_794DA620EA232BC8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x801D50)
#define STRUCT_2_794DA620EA232BC8_METHOD_2_1BEBF6CCD05F4FFB_1_OFFSET UNITYSDK_OFFSET(0x15885A10)
#define STRUCT_2_794DA620EA232BC8_METHOD_2_1BEBF6CCD05F4FFB_OFFSET UNITYSDK_OFFSET(0x15885920)
#define STRUCT_2_794DA620EA232BC8_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x801EA0)
#define STRUCT_2_794DA620EA232BC8_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x801DC0)
#define STRUCT_2_794DA620EA232BC8_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x801E30)
#define STRUCT_2_794DA620EA232BC8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x801DB0)

inline static constexpr unsigned int Struct_2_794DA620EA232BC8_TypeDefinitionIndex = 79129;

struct alignas(4) Struct_2_794DA620EA232BC8
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Boolean Equals(::Struct_2_794DA620EA232BC8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_TOSTRING_OFFSET))(this);
	}

	static ::System::Boolean Method_2_1BEBF6CCD05F4FFB(::Struct_2_794DA620EA232BC8 a1, ::Struct_2_794DA620EA232BC8 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_794DA620EA232BC8, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_METHOD_2_1BEBF6CCD05F4FFB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_1BEBF6CCD05F4FFB_1(::Struct_2_794DA620EA232BC8 a1, ::Struct_2_794DA620EA232BC8 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_794DA620EA232BC8, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_METHOD_2_1BEBF6CCD05F4FFB_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_794DA620EA232BC8_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
