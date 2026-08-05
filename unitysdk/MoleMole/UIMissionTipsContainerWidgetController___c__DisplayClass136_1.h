#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass136_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19016A80)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__PLAYHDDHANGTIP_B__2_OFFSET UNITYSDK_OFFSET(0x19016A90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__PLAYHDDHANGTIP_B__3_OFFSET UNITYSDK_OFFSET(0x19016BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass136_1_TypeDefinitionIndex = 91181;

	class UIMissionTipsContainerWidgetController___c__DisplayClass136_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass136_0* CS___8__locals1; // 0x18
		::System::Action* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__PLAYHDDHANGTIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS136_1__PLAYHDDHANGTIP_B__3_OFFSET))(this);
		}
	};
}
