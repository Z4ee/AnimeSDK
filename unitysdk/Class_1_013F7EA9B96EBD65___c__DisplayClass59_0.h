#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E14A0A1A8B1F847C_3;

#define CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14259F50)
#define CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1425A060)

inline static constexpr unsigned int Class_1_013F7EA9B96EBD65___c__DisplayClass59_0_TypeDefinitionIndex = 59132;

class Class_1_013F7EA9B96EBD65___c__DisplayClass59_0 : public ::System::Object
{
public:
	::System::UInt32 peakID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryGetPeakBestData_b__0(::Class_1_E14A0A1A8B1F847C_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_3*))((::PBYTE)hIl2Cpp + CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET))(this, a1);
	}
};
