#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18339230)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__RESUME_B__0_OFFSET UNITYSDK_OFFSET(0x18339240)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass97_0_TypeDefinitionIndex = 91215;

	class UIMissionTipsContainerWidgetController___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _Resume_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__RESUME_B__0_OFFSET))(this);
		}
	};
}
