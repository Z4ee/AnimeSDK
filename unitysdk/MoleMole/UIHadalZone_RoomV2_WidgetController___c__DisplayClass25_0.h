#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalZone_RoomV2_WidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169CA820)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x169CA830)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x169CA8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RoomV2_WidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 51354;

	class UIHadalZone_RoomV2_WidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::MoleMole::UIHadalZone_RoomV2_WidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__DISPLAYCLASS25_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET))(this);
		}
	};
}
