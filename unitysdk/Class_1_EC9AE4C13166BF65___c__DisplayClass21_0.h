#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EC9AE4C13166BF65;
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA370F0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS21_0__HANDLESHOWSHOPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xAA39390)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65___c__DisplayClass21_0_TypeDefinitionIndex = 70760;

class Class_1_EC9AE4C13166BF65___c__DisplayClass21_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatShopPageParam* param; // 0x10
	::Class_1_EC9AE4C13166BF65* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowShopPage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS21_0__HANDLESHOWSHOPPAGE_B__0_OFFSET))(this);
	}
};
