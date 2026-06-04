#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01820C560DDC5DD9;
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A59B0)
#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xA4A8700)

inline static constexpr unsigned int Class_1_01820C560DDC5DD9___c__DisplayClass33_0_TypeDefinitionIndex = 70686;

class Class_1_01820C560DDC5DD9___c__DisplayClass33_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* param; // 0x10
	::Class_1_01820C560DDC5DD9* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowChangeDicePage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS33_0__HANDLESHOWCHANGEDICEPAGE_B__0_OFFSET))(this);
	}
};
