#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E773500)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController_Context_TypeDefinitionIndex = 93217;

	class UIBallGameOptionsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::Struct_2_A725E4562D03EA4E_5>* Options; // 0x28
		::Class_3_6F28FFD006F2B451* world; // 0x30
		::System::Boolean IsEventTypeOptions; // 0x38
		::System::Int32 EventID; // 0x3C
		::System::Int32 EventType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
