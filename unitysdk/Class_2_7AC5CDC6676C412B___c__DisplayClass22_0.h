#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1041;
class Class_2_7AC5CDC6676C412B;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15154420)
#define CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x15155810)
#define CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET UNITYSDK_OFFSET(0x151557D0)

inline static constexpr unsigned int Class_2_7AC5CDC6676C412B___c__DisplayClass22_0_TypeDefinitionIndex = 68397;

class Class_2_7AC5CDC6676C412B___c__DisplayClass22_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1041* battleEventPanel; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18
	::Class_2_7AC5CDC6676C412B* __4__this; // 0x20
	::System::UInt32 slotIndex; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateBattleEventPanel_b__1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET))(this);
	}

	::System::Void __CreateBattleEventPanel_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET))(this);
	}
};
