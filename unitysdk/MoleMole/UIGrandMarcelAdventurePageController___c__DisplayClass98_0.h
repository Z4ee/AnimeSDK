#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGrandMarcelAdventurePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAE1F0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS98_0__SHOWINVITE_B__0_OFFSET UNITYSDK_OFFSET(0x15CAE200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c__DisplayClass98_0_TypeDefinitionIndex = 64034;

	class UIGrandMarcelAdventurePageController___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGrandMarcelAdventurePageController* __4__this; // 0x10
		::System::Action* recursiveShowInvite; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowInvite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS98_0__SHOWINVITE_B__0_OFFSET))(this);
		}
	};
}
