#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15224FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebMainPageController_PanelData_TypeDefinitionIndex = 41938;

	class UIBangbooMicroWebMainPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenHandBookOnClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
