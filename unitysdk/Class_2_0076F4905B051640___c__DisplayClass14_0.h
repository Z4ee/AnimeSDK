#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA486530)
#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS14_0___TRYSHOWFIRSTREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xA486980)

inline static constexpr unsigned int Class_2_0076F4905B051640___c__DisplayClass14_0_TypeDefinitionIndex = 63452;

class Class_2_0076F4905B051640___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryShowFirstRewardDialog_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS14_0___TRYSHOWFIRSTREWARDDIALOG_B__1_OFFSET))(this);
	}
};
