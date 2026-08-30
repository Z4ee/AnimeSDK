#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8ED9A30694FB6032.h"

#define CLASS_4_11DE01BD2BA1F07C_1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBD12C90)
#define CLASS_4_11DE01BD2BA1F07C_1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBD12CA0)
#define CLASS_4_11DE01BD2BA1F07C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBD12D00)

inline static constexpr unsigned int Class_4_11DE01BD2BA1F07C_1_TypeDefinitionIndex = 73911;

class Class_4_11DE01BD2BA1F07C_1 : public ::Class_3_8ED9A30694FB6032
{
public:
	::System::Single ENMIPOPKOOL; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C_1_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C_1_SET_VALUE_OFFSET))(this, a1);
	}
};
