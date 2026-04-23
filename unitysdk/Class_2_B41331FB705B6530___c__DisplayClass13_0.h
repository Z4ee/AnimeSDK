#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6_1;
class Class_2_B41331FB705B6530;

#define CLASS_2_B41331FB705B6530___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA546720)
#define CLASS_2_B41331FB705B6530___C__DISPLAYCLASS13_0__REQUESTCLAIMREWARD_B__0_OFFSET UNITYSDK_OFFSET(0xA546AE0)

inline static constexpr unsigned int Class_2_B41331FB705B6530___c__DisplayClass13_0_TypeDefinitionIndex = 56622;

class Class_2_B41331FB705B6530___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_2_B41331FB705B6530* __4__this; // 0x10
	::System::Int32 roundIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _RequestClaimReward_b__0(::Class_1_C821CB457FB5EBC6_1* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_1*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530___C__DISPLAYCLASS13_0__REQUESTCLAIMREWARD_B__0_OFFSET))(this, rsp);
	}
};
