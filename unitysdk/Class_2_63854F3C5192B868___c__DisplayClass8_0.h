#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_133;
class Class_2_63854F3C5192B868;

#define CLASS_2_63854F3C5192B868___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF5CF10)
#define CLASS_2_63854F3C5192B868___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET UNITYSDK_OFFSET(0xAF5D760)

inline static constexpr unsigned int Class_2_63854F3C5192B868___c__DisplayClass8_0_TypeDefinitionIndex = 57400;

class Class_2_63854F3C5192B868___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_63854F3C5192B868* __4__this; // 0x10
	::System::Int32 roundIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _RequestDraw_b__0(::Class_1_D17272E82AE804C2_133* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_133*))((::PBYTE)hIl2Cpp + CLASS_2_63854F3C5192B868___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET))(this, a1);
	}
};
