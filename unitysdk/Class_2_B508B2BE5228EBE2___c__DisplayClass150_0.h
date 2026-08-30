#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_379;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x15935740)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15932820)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass150_0_TypeDefinitionIndex = 49710;

class Class_2_B508B2BE5228EBE2___c__DisplayClass150_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_379* s; // 0x10
	::Class_0_16E4307DCC419505_374* profileChangeAsyncHandle; // 0x18
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x20
	::System::Action* onFinish; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, a1);
	}
};
