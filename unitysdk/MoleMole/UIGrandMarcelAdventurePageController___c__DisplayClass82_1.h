#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityNormalContextBase; }
namespace MoleMole { class UIGrandMarcelAdventurePageController___c__DisplayClass82_0; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS82_1__CHECKTEMPUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x155BFBF0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS82_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155BFBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c__DisplayClass82_1_TypeDefinitionIndex = 64032;

	class UIGrandMarcelAdventurePageController___c__DisplayClass82_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGrandMarcelAdventurePageController___c__DisplayClass82_0* CS___8__locals1; // 0x10
		::MoleMole::UIActivityNormalContextBase* activityPageContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS82_1__CTOR_OFFSET))(this);
		}

		::System::Void _CheckTempUnlock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS82_1__CHECKTEMPUNLOCK_B__0_OFFSET))(this);
		}
	};
}
