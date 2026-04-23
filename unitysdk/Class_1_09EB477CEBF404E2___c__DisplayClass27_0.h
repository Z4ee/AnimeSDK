#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09EB477CEBF404E2;
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1283F130)
#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1283F140)

inline static constexpr unsigned int Class_1_09EB477CEBF404E2___c__DisplayClass27_0_TypeDefinitionIndex = 69873;

class Class_1_09EB477CEBF404E2___c__DisplayClass27_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatShopPageParam* param; // 0x10
	::Class_1_09EB477CEBF404E2* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowShopPage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS27_0__HANDLESHOWSHOPPAGE_B__0_OFFSET))(this);
	}
};
