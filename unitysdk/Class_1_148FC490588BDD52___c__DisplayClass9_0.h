#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_148FC490588BDD52;
namespace RPG::Client { class UIController; }

#define CLASS_1_148FC490588BDD52___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D1A10)
#define CLASS_1_148FC490588BDD52___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET UNITYSDK_OFFSET(0xB8D1CA0)

inline static constexpr unsigned int Class_1_148FC490588BDD52___c__DisplayClass9_0_TypeDefinitionIndex = 59867;

class Class_1_148FC490588BDD52___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::Client::UIController* currentTop; // 0x10
	::Class_1_148FC490588BDD52* __4__this; // 0x18
	::System::UInt32 blockUID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowLast_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET))(this);
	}
};
