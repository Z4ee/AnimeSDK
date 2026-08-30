#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_379;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B43E9E0)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1B43EA20)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43B410)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass144_0_TypeDefinitionIndex = 49707;

class Class_2_B508B2BE5228EBE2___c__DisplayClass144_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_379* source; // 0x10
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x18
	::System::Action* onChangeFinish; // 0x20
	::Class_0_16E4307DCC419505_374* profileChangeAsyncHandle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__CTOR_OFFSET))(this);
	}

	::System::Void _ActiveProfileAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__0_OFFSET))(this);
	}

	::System::Void _ActiveProfileAsync_b__1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS144_0__ACTIVEPROFILEASYNC_B__1_OFFSET))(this, a1);
	}
};
