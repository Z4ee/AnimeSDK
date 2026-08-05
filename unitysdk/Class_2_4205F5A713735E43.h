#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_C3B552F6B471D7A4.h"

#define CLASS_2_4205F5A713735E43_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1F4065E0)
#define CLASS_2_4205F5A713735E43__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4065D0)

inline static constexpr unsigned int Class_2_4205F5A713735E43_TypeDefinitionIndex = 93676;

class Class_2_4205F5A713735E43 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Boolean Field_2_5; // 0x20
	::System::Int32 Field_2_10; // 0x24
	::System::UInt32 Field_2_6; // 0x28
	::System::Int32 Field_2_11; // 0x2C
	::System::UInt64 Field_2_0; // 0x30
	::System::UInt32 Field_2_7; // 0x38
	::System::Int32 Field_2_4; // 0x3C
	::System::UInt32 Field_2_1; // 0x40
	::System::UInt32 Field_2_3; // 0x44
	::System::Int32 Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4205F5A713735E43__CTOR_OFFSET))(this);
	}

	::Enum_3_C3B552F6B471D7A4 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C3B552F6B471D7A4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4205F5A713735E43_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
