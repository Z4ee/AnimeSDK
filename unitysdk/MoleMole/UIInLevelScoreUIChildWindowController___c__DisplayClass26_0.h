#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D83DC7376F4C0DA0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelScoreUIChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1910BFB0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__RESTARTSCORETIP_B__0_OFFSET UNITYSDK_OFFSET(0x1910BFC0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__RESTARTSCORETIP_B__1_OFFSET UNITYSDK_OFFSET(0x1910C060)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelScoreUIChildWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 86911;

	class UIInLevelScoreUIChildWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Struct_2_D83DC7376F4C0DA0 param; // 0x10
		::MoleMole::UIInLevelScoreUIChildWindowController* __4__this; // 0x50
		::System::Action* __9__1; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RestartScoreTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__RESTARTSCORETIP_B__0_OFFSET))(this);
		}

		::System::Void _RestartScoreTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__RESTARTSCORETIP_B__1_OFFSET))(this);
		}
	};
}
