#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4;

#define CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14259D30)
#define CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS50_0___GETPEAKDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1425A040)

inline static constexpr unsigned int Class_1_013F7EA9B96EBD65___c__DisplayClass50_0_TypeDefinitionIndex = 59131;

class Class_1_013F7EA9B96EBD65___c__DisplayClass50_0 : public ::System::Object
{
public:
	::System::UInt32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPeakData_b__0(::Class_1_325963497EC7CBB4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + CLASS_1_013F7EA9B96EBD65___C__DISPLAYCLASS50_0___GETPEAKDATA_B__0_OFFSET))(this, a1);
	}
};
