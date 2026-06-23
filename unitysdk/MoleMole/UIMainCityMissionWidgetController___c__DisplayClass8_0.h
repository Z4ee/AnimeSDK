#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D88E50)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SHOWMISSIONFINISHANDSWITCHTOCURRENT_B__0_OFFSET UNITYSDK_OFFSET(0x15D88E60)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SHOWMISSIONFINISHANDSWITCHTOCURRENT_B__1_OFFSET UNITYSDK_OFFSET(0x15D88F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 84193;

	class UIMainCityMissionWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x18
		::System::Int32 orginalQuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndSwitchToCurrent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SHOWMISSIONFINISHANDSWITCHTOCURRENT_B__0_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndSwitchToCurrent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SHOWMISSIONFINISHANDSWITCHTOCURRENT_B__1_OFFSET))(this);
		}
	};
}
