#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_09F9B94762F07206___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC16C4F0)
#define CLASS_1_09F9B94762F07206___C__DISPLAYCLASS4_0___SHOWCHESSROGUENEWLEVELDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xC16C600)

inline static constexpr unsigned int Class_1_09F9B94762F07206___c__DisplayClass4_0_TypeDefinitionIndex = 66963;

class Class_1_09F9B94762F07206___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowChessRogueNewLevelDialog_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206___C__DISPLAYCLASS4_0___SHOWCHESSROGUENEWLEVELDIALOG_B__0_OFFSET))(this);
	}
};
