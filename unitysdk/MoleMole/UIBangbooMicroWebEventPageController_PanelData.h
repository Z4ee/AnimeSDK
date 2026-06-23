#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17600970)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventPageController_PanelData_TypeDefinitionIndex = 72538;

	class UIBangbooMicroWebEventPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenHandBookOnClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
