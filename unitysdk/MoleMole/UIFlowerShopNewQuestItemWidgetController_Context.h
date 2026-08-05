#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERSHOPNEWQUESTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19385D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewQuestItemWidgetController_Context_TypeDefinitionIndex = 41966;

	class UIFlowerShopNewQuestItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWQUESTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
