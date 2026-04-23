#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_323;
class Class_2_B508B2BE5228EBE2;

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99CB250)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0x99CD540)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__1_OFFSET UNITYSDK_OFFSET(0x99CD560)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass145_0_TypeDefinitionIndex = 45880;

class Class_2_B508B2BE5228EBE2___c__DisplayClass145_0 : public ::System::Object
{
public:
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x10
	::Class_0_16E4307DCC419505_318* profileChangeAsyncHandle; // 0x18
	::Class_0_16E4307DCC419505_323* s; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__0_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__1(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__1_OFFSET))(this, v);
	}
};
