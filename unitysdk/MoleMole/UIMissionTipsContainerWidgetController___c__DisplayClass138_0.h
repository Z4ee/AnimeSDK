#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC9FE0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYMISSIONWIDGET_B__0_OFFSET UNITYSDK_OFFSET(0x15DC9FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass138_0_TypeDefinitionIndex = 55066;

	class UIMissionTipsContainerWidgetController___c__DisplayClass138_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10
		::System::Boolean fromResume; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionWidget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYMISSIONWIDGET_B__0_OFFSET))(this);
		}
	};
}
