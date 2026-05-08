#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelBangbooInfoWidgetController; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167758A0)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS99_0__OPENBANGBOOINFOFAKE_B__0_OFFSET UNITYSDK_OFFSET(0x167758B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c__DisplayClass99_0_TypeDefinitionIndex = 60387;

	class UIBangBooAutoBattleInLevelPageController___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangBooAutoBattleInLevelPageController* __4__this; // 0x10
		::System::Int32 cfgID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenBangBooInfoFake_b__0(::MoleMole::UIABInLevelBangbooInfoWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelBangbooInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS99_0__OPENBANGBOOINFOFAKE_B__0_OFFSET))(this, widget);
		}
	};
}
