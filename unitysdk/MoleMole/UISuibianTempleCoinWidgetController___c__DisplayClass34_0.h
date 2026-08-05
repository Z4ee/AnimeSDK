#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleCoinWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLECOINWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47850)
#define MOLEMOLE_UISUIBIANTEMPLECOINWIDGETCONTROLLER___C__DISPLAYCLASS34_0__PLAYANIMBYSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x15A47860)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleCoinWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 81863;

	class UISuibianTempleCoinWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianTempleCoinWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLECOINWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimByState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLECOINWIDGETCONTROLLER___C__DISPLAYCLASS34_0__PLAYANIMBYSTATE_B__0_OFFSET))(this);
		}
	};
}
