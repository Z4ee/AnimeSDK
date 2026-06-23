#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass116_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174E37C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__PLAYCHALLENGETIP_B__2_OFFSET UNITYSDK_OFFSET(0x174E37D0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__PLAYCHALLENGETIP_B__3_OFFSET UNITYSDK_OFFSET(0x174E38E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass116_1_TypeDefinitionIndex = 69630;

	class UIMissionTipsContainerWidgetController___c__DisplayClass116_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass116_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__PLAYCHALLENGETIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS116_1__PLAYCHALLENGETIP_B__3_OFFSET))(this);
		}
	};
}
