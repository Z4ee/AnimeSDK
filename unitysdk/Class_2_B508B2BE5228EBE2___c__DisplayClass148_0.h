#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_0_16E4307DCC419505_360;
class Class_2_B508B2BE5228EBE2;

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__APPLYSTACKSYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x1797E9D0)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1797BBE0)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass148_0_TypeDefinitionIndex = 47429;

class Class_2_B508B2BE5228EBE2___c__DisplayClass148_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_360* s; // 0x10
	::Class_0_16E4307DCC419505_355* profileChangeAsyncHandle; // 0x18
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackSyncResLoading_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__APPLYSTACKSYNCRESLOADING_B__0_OFFSET))(this, a1);
	}
};
