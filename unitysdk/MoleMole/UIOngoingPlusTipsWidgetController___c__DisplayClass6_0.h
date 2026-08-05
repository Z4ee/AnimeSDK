#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOngoingPlusTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIONGOINGPLUSTIPSWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CLOSECHAT_B__0_OFFSET UNITYSDK_OFFSET(0x17D208C0)
#define MOLEMOLE_UIONGOINGPLUSTIPSWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D208B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOngoingPlusTipsWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 90913;

	class UIOngoingPlusTipsWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* onEnd; // 0x10
		::MoleMole::UIOngoingPlusTipsWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGPLUSTIPSWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseChat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGPLUSTIPSWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CLOSECHAT_B__0_OFFSET))(this);
		}
	};
}
