#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01820C560DDC5DD9;
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A54E0)
#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xA4A8620)

inline static constexpr unsigned int Class_1_01820C560DDC5DD9___c__DisplayClass27_0_TypeDefinitionIndex = 70685;

class Class_1_01820C560DDC5DD9___c__DisplayClass27_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatShopPageParam* param; // 0x10
	::Class_1_01820C560DDC5DD9* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowShopPage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET))(this);
	}
};
