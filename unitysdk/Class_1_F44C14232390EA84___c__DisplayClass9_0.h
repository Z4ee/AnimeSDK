#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayScreenTransfer; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1417C2A0)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS9_0___UIOPENLOBBYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1417C9C0)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass9_0_TypeDefinitionIndex = 61745;

class Class_1_F44C14232390EA84___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::PlayScreenTransfer* screenTransfer; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __UiOpenLobbyPage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS9_0___UIOPENLOBBYPAGE_B__0_OFFSET))(this);
	}
};
