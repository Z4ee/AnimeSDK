#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197017A0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS24_0__SCHEDULESCROLLTOFIRSTFOCUSREWARDONCE_B__0_OFFSET UNITYSDK_OFFSET(0x197017B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass24_0_TypeDefinitionIndex = 73649;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x10
		::System::Action* handler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleScrollToFirstFocusRewardOnce_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS24_0__SCHEDULESCROLLTOFIRSTFOCUSREWARDONCE_B__0_OFFSET))(this);
		}
	};
}
