#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass137_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19016EF0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__PLAYCHALLENGETIP_B__2_OFFSET UNITYSDK_OFFSET(0x19016F00)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__PLAYCHALLENGETIP_B__3_OFFSET UNITYSDK_OFFSET(0x19017010)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass137_1_TypeDefinitionIndex = 91193;

	class UIMissionTipsContainerWidgetController___c__DisplayClass137_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass137_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__PLAYCHALLENGETIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_1__PLAYCHALLENGETIP_B__3_OFFSET))(this);
		}
	};
}
