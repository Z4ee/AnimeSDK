#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_40CD5CE8474BAA94;
class Class_1_9C8BB23B0435A836;

#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1651E330)
#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS62_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET UNITYSDK_OFFSET(0x16522830)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___c__DisplayClass62_0_TypeDefinitionIndex = 57616;

class Class_1_40CD5CE8474BAA94___c__DisplayClass62_0 : public ::System::Object
{
public:
	::Class_1_9C8BB23B0435A836* dice; // 0x10
	::Class_1_40CD5CE8474BAA94* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshHoldedDicesData_b__0(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS62_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET))(this, a1);
	}
};
