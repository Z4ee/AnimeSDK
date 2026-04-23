#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;

#define CLASS_1_0A5A201A288986C6_CLEAR_OFFSET UNITYSDK_OFFSET(0x17C2F6B0)
#define CLASS_1_0A5A201A288986C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2F710)

inline static constexpr unsigned int Class_1_0A5A201A288986C6_TypeDefinitionIndex = 34347;

class Class_1_0A5A201A288986C6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_28* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5A201A288986C6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5A201A288986C6_CLEAR_OFFSET))(this);
	}
};
