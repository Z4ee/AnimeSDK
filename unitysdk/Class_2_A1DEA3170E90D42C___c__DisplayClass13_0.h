#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCBC50)
#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x8BCC2E0)

inline static constexpr unsigned int Class_2_A1DEA3170E90D42C___c__DisplayClass13_0_TypeDefinitionIndex = 55327;

class Class_2_A1DEA3170E90D42C___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::System::UInt32 blockUID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryDelayForRewardDialog_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET))(this);
	}
};
