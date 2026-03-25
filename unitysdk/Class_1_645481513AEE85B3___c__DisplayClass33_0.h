#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_645481513AEE85B3;
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105BC450)
#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x105BF030)

inline static constexpr unsigned int Class_1_645481513AEE85B3___c__DisplayClass33_0_TypeDefinitionIndex = 61948;

class Class_1_645481513AEE85B3___c__DisplayClass33_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* param; // 0x10
	::Class_1_645481513AEE85B3* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowChangeDicePage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET))(this);
	}
};
