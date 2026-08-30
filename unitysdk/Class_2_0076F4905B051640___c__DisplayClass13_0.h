#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184949F0)
#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x18495000)

inline static constexpr unsigned int Class_2_0076F4905B051640___c__DisplayClass13_0_TypeDefinitionIndex = 67825;

class Class_2_0076F4905B051640___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::System::UInt32 blockUID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryDelayForRewardDialog_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET))(this);
	}
};
