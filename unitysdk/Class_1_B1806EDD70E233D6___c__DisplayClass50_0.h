#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4;

#define CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C1E20)
#define CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS50_0___GETPEAKDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA7C21B0)

inline static constexpr unsigned int Class_1_B1806EDD70E233D6___c__DisplayClass50_0_TypeDefinitionIndex = 58201;

class Class_1_B1806EDD70E233D6___c__DisplayClass50_0 : public ::System::Object
{
public:
	::System::UInt32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPeakData_b__0(::Class_1_325963497EC7CBB4* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + CLASS_1_B1806EDD70E233D6___C__DISPLAYCLASS50_0___GETPEAKDATA_B__0_OFFSET))(this, data);
	}
};
