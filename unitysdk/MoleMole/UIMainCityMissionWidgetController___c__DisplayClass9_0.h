#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1693B620)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SHOWCURRENTMISSIONFINISHANDSWITCH_B__0_OFFSET UNITYSDK_OFFSET(0x1693B630)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 84191;

	class UIMainCityMissionWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 questId; // 0x20
		::System::Boolean playSound; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCurrentMissionFinishAndSwitch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SHOWCURRENTMISSIONFINISHANDSWITCH_B__0_OFFSET))(this);
		}
	};
}
