#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8ED9A30694FB6032.h"

#define CLASS_4_11DE01BD2BA1F07C_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A75B040)
#define CLASS_4_11DE01BD2BA1F07C_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A75B050)
#define CLASS_4_11DE01BD2BA1F07C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75B0B0)

inline static constexpr unsigned int Class_4_11DE01BD2BA1F07C_TypeDefinitionIndex = 73908;

class Class_4_11DE01BD2BA1F07C : public ::Class_3_8ED9A30694FB6032
{
public:
	::System::Single PJKFLONMKED; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_11DE01BD2BA1F07C_SET_VALUE_OFFSET))(this, a1);
	}
};
