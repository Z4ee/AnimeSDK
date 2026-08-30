#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_59A4B833349D9A26___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB3FE0)
#define CLASS_2_59A4B833349D9A26___C__DISPLAYCLASS5_0___SHOWROGUENOUSNEWMAINSTORYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18CB4450)

inline static constexpr unsigned int Class_2_59A4B833349D9A26___c__DisplayClass5_0_TypeDefinitionIndex = 67481;

class Class_2_59A4B833349D9A26___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowRogueNousNewMainStoryPage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26___C__DISPLAYCLASS5_0___SHOWROGUENOUSNEWMAINSTORYPAGE_B__0_OFFSET))(this);
	}
};
