#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_155;
class Class_2_B654C9D1B5DDEC27;

#define CLASS_2_B654C9D1B5DDEC27___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15212530)
#define CLASS_2_B654C9D1B5DDEC27___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET UNITYSDK_OFFSET(0x15212EE0)

inline static constexpr unsigned int Class_2_B654C9D1B5DDEC27___c__DisplayClass8_0_TypeDefinitionIndex = 61493;

class Class_2_B654C9D1B5DDEC27___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_B654C9D1B5DDEC27* __4__this; // 0x10
	::System::Int32 roundIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _RequestDraw_b__0(::Class_1_D17272E82AE804C2_155* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_155*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET))(this, a1);
	}
};
