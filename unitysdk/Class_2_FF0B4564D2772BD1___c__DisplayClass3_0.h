#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4E0B0)
#define CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS3_0___SHOWROGUENOUSNEWSUBSTORYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x13A4EBA0)

inline static constexpr unsigned int Class_2_FF0B4564D2772BD1___c__DisplayClass3_0_TypeDefinitionIndex = 67482;

class Class_2_FF0B4564D2772BD1___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowRogueNousNewSubStoryPage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS3_0___SHOWROGUENOUSNEWSUBSTORYPAGE_B__0_OFFSET))(this);
	}
};
