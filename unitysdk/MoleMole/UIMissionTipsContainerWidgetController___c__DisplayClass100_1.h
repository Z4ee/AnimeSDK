#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass100_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C643C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__PLAYINTERKNOTTIP_B__2_OFFSET UNITYSDK_OFFSET(0x15C6EF30)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__PLAYINTERKNOTTIP_B__3_OFFSET UNITYSDK_OFFSET(0x15C6F040)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass100_1_TypeDefinitionIndex = 55038;

	class UIMissionTipsContainerWidgetController___c__DisplayClass100_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass100_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayInterKnotTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__PLAYINTERKNOTTIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayInterKnotTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS100_1__PLAYINTERKNOTTIP_B__3_OFFSET))(this);
		}
	};
}
