#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass140_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17965850)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__PLAYZENKOVTIP_B__0_OFFSET UNITYSDK_OFFSET(0x17965860)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__PLAYZENKOVTIP_B__1_OFFSET UNITYSDK_OFFSET(0x17965970)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass140_1_TypeDefinitionIndex = 91224;

	class UIMissionTipsContainerWidgetController___c__DisplayClass140_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass140_0* CS___8__locals1; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayZenkovTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__PLAYZENKOVTIP_B__0_OFFSET))(this);
		}

		::System::Void _PlayZenkovTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_1__PLAYZENKOVTIP_B__1_OFFSET))(this);
		}
	};
}
