#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVTASKCOMPLETEPOPUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F56B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskCompletePopupPopWindowController_Context_TypeDefinitionIndex = 78356;

	class UIBangkovTaskCompletePopupPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 QuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKCOMPLETEPOPUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
