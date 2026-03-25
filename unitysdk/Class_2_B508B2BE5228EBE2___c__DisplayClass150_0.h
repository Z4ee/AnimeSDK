#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x8B71080)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6F0E0)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass150_0_TypeDefinitionIndex = 39974;

class Class_2_B508B2BE5228EBE2___c__DisplayClass150_0 : public ::System::Object
{
public:
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x10
	::Class_0_16E4307DCC419505_310* profileChangeAsyncHandle; // 0x18
	::System::Action* onFinish; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, v);
	}
};
