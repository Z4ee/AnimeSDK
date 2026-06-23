#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePrepPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FA740)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__SHOWINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x1A1FA750)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController___c__DisplayClass12_0_TypeDefinitionIndex = 58245;

	class UIAutoBattlePrepPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* recursiveShowInvite; // 0x10
		::MoleMole::UIAutoBattlePrepPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowInvite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__SHOWINVITE_B__0_OFFSET))(this);
		}
	};
}
