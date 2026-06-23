#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_930;

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C88290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventDialogPopWindowController_Context_TypeDefinitionIndex = 57995;

	class UIBangbooMicroWebEventDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_930* EventConfig; // 0x28
		::System::Boolean IsOpenByGetEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
