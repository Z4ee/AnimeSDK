#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_35;

#define CLASS_1_0A5A201A288986C6_CLEAR_OFFSET UNITYSDK_OFFSET(0x19D488B0)
#define CLASS_1_0A5A201A288986C6__CTOR_OFFSET UNITYSDK_OFFSET(0x19D48910)

inline static constexpr unsigned int Class_1_0A5A201A288986C6_TypeDefinitionIndex = 36156;

class Class_1_0A5A201A288986C6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_35* LCPEEHIMCNO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5A201A288986C6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5A201A288986C6_CLEAR_OFFSET))(this);
	}
};
