#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_950;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_46549D0C6D7D269B___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x980C8A0)
#define CLASS_2_46549D0C6D7D269B___C__DISPLAYCLASS14_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x980D7A0)

inline static constexpr unsigned int Class_2_46549D0C6D7D269B___c__DisplayClass14_0_TypeDefinitionIndex = 66012;

class Class_2_46549D0C6D7D269B___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_950* battleEventPanel; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18
	::System::UInt32 slotIndex; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateBattleEventPanel_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B___C__DISPLAYCLASS14_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET))(this);
	}
};
