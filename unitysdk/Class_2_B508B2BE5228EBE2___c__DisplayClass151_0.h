#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS151_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x159357E0)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS151_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15932B70)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass151_0_TypeDefinitionIndex = 49711;

class Class_2_B508B2BE5228EBE2___c__DisplayClass151_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_374* profileChangeAsyncHandle; // 0x10
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x18
	::System::Action* onFinish; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS151_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS151_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, a1);
	}
};
