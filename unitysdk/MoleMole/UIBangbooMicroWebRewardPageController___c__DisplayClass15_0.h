#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175B63C0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS15_0__SCHEDULESCROLLTOFIRSTFOCUSREWARDONCE_B__0_OFFSET UNITYSDK_OFFSET(0x175B63D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass15_0_TypeDefinitionIndex = 58550;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* handler; // 0x10
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleScrollToFirstFocusRewardOnce_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS15_0__SCHEDULESCROLLTOFIRSTFOCUSREWARDONCE_B__0_OFFSET))(this);
		}
	};
}
