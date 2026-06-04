#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_999;
class Class_2_831E473E028F1284;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144795E0)
#define CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x1447AA80)
#define CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET UNITYSDK_OFFSET(0x1447AA40)

inline static constexpr unsigned int Class_2_831E473E028F1284___c__DisplayClass22_0_TypeDefinitionIndex = 66953;

class Class_2_831E473E028F1284___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::Class_2_831E473E028F1284* __4__this; // 0x18
	::Class_0_16E4307DCC419505_999* battleEventPanel; // 0x20
	::System::UInt32 slotIndex; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateBattleEventPanel_b__1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET))(this);
	}

	::System::Void __CreateBattleEventPanel_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831E473E028F1284___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET))(this);
	}
};
