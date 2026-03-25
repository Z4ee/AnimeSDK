#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_28.h"

#define CLASS_2_112BCAD317CC03C6_CLEAR_OFFSET UNITYSDK_OFFSET(0xF394E20)
#define CLASS_2_112BCAD317CC03C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF394E70)
#define CLASS_2_112BCAD317CC03C6__CTOR_OFFSET UNITYSDK_OFFSET(0xF394EE0)

inline static constexpr unsigned int Class_2_112BCAD317CC03C6_TypeDefinitionIndex = 55070;

class Class_2_112BCAD317CC03C6 : public ::Class_1_7807B2B04302CD7B_28
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112BCAD317CC03C6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112BCAD317CC03C6_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112BCAD317CC03C6_DISPOSE_OFFSET))(this);
	}
};
