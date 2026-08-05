#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_686;

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180226D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventDialogPopWindowController_Context_TypeDefinitionIndex = 70992;

	class UIBangbooMicroWebEventDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_686* EventConfig; // 0x28
		::System::Boolean IsOpenByGetEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
