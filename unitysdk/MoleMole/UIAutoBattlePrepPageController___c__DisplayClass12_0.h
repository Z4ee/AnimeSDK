#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePrepPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196F9120)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__DISPLAYCLASS12_0__SHOWINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x196F9130)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController___c__DisplayClass12_0_TypeDefinitionIndex = 56986;

	class UIAutoBattlePrepPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePrepPageController* __4__this; // 0x10
		::System::Action* recursiveShowInvite; // 0x18

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
