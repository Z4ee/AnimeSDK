#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x176D4E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleCollectPageController_PanelData_TypeDefinitionIndex = 72649;

	class UIBangbooMicroWebRoleCollectPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenHandBookOnClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
