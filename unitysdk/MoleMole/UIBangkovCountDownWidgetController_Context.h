#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A641E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovCountDownWidgetController_Context_TypeDefinitionIndex = 84367;

	class UIBangkovCountDownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowInMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
