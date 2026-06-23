#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMusicBattleInLevelPerfectEffWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1716A730)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___C__DISPLAYCLASS7_0__PLAYEFFANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1716A740)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPerfectEffWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 77040;

	class UIMusicBattleInLevelPerfectEffWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* onCompleted; // 0x10
		::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEffAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___C__DISPLAYCLASS7_0__PLAYEFFANIM_B__0_OFFSET))(this);
		}
	};
}
