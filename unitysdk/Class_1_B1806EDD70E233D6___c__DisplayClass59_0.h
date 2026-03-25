#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BFB2FF4A24ACC28;

#define CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x117FC810)
#define CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x117FC920)

inline static constexpr unsigned int Class_1_B1806EDD70E233D6___c__DisplayClass59_0_TypeDefinitionIndex = 51278;

class Class_1_B1806EDD70E233D6___c__DisplayClass59_0 : public ::System::Object
{
public:
	::System::UInt32 peakID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryGetPeakBestData_b__0(::Class_1_6BFB2FF4A24ACC28* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BFB2FF4A24ACC28*))((::PBYTE)hIl2Cpp + CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS59_0___TRYGETPEAKBESTDATA_B__0_OFFSET))(this, data);
	}
};
