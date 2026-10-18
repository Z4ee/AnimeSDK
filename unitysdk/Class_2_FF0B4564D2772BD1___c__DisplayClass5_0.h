#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4F000)
#define CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS5_0___SHOWROGUENOUSNEWMAINSTORYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x13A4F470)

inline static constexpr unsigned int Class_2_FF0B4564D2772BD1___c__DisplayClass5_0_TypeDefinitionIndex = 67483;

class Class_2_FF0B4564D2772BD1___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowRogueNousNewMainStoryPage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF0B4564D2772BD1___C__DISPLAYCLASS5_0___SHOWROGUENOUSNEWMAINSTORYPAGE_B__0_OFFSET))(this);
	}
};
