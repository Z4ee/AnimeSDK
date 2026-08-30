#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EC9AE4C13166BF65;
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7BA60)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS27_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19B7DCE0)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65___c__DisplayClass27_0_TypeDefinitionIndex = 75710;

class Class_1_EC9AE4C13166BF65___c__DisplayClass27_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* param; // 0x10
	::Class_1_EC9AE4C13166BF65* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowChangeDicePage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS27_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET))(this);
	}
};
