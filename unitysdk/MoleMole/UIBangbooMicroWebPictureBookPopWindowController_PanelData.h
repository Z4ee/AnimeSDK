#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1930C120)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookPopWindowController_PanelData_TypeDefinitionIndex = 80383;

	class UIBangbooMicroWebPictureBookPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenHandBookOnClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
