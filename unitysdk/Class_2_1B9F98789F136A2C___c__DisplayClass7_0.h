#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1B9F98789F136A2C;
class Class_2_B8E38BF47138A2E5;

#define CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15565840)
#define CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET UNITYSDK_OFFSET(0x15565A10)
#define CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET UNITYSDK_OFFSET(0x15565A40)

inline static constexpr unsigned int Class_2_1B9F98789F136A2C___c__DisplayClass7_0_TypeDefinitionIndex = 76280;

class Class_2_1B9F98789F136A2C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_1B9F98789F136A2C* __4__this; // 0x10
	::Class_2_B8E38BF47138A2E5* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __AddEventEmitter_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET))(this, a1);
	}

	::System::Void __AddEventEmitter_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_1B9F98789F136A2C___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET))(this, a1);
	}
};
