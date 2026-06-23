#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_C3B552F6B471D7A4.h"

#define CLASS_2_4205F5A713735E43_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DA59B20)
#define CLASS_2_4205F5A713735E43__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA59B10)

inline static constexpr unsigned int Class_2_4205F5A713735E43_TypeDefinitionIndex = 89649;

class Class_2_4205F5A713735E43 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Boolean Field_2_6; // 0x20
	::System::UInt32 Field_2_0; // 0x24
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt64 Field_2_3; // 0x30
	::System::UInt32 Field_2_5; // 0x38
	::System::Int32 Field_2_1; // 0x3C
	::System::Int32 Field_2_8; // 0x40
	::System::Int32 Field_2_9; // 0x44
	::System::Int32 Field_2_7; // 0x48
	::System::UInt32 Field_2_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4205F5A713735E43__CTOR_OFFSET))(this);
	}

	::Enum_3_C3B552F6B471D7A4 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C3B552F6B471D7A4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4205F5A713735E43_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
