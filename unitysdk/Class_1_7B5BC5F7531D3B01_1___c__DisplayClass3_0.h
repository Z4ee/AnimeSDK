#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B5BC5F7531D3B01_1;
class Class_1_D17272E82AE804C2_703;

#define CLASS_1_7B5BC5F7531D3B01_1___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB914E10)
#define CLASS_1_7B5BC5F7531D3B01_1___C__DISPLAYCLASS3_0__FINISHREPORT_B__0_OFFSET UNITYSDK_OFFSET(0xB914E20)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_1___c__DisplayClass3_0_TypeDefinitionIndex = 80224;

class Class_1_7B5BC5F7531D3B01_1___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_7B5BC5F7531D3B01_1* __4__this; // 0x10
	::System::UInt32 reportID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_1___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _FinishReport_b__0(::Class_1_D17272E82AE804C2_703* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_703*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_1___C__DISPLAYCLASS3_0__FINISHREPORT_B__0_OFFSET))(this, a1);
	}
};
