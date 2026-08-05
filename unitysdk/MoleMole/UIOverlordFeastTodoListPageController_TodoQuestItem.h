#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER_TODOQUESTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1673EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListPageController_TodoQuestItem_TypeDefinitionIndex = 79095;

	class UIOverlordFeastTodoListPageController_TodoQuestItem : public ::System::Object
	{
	public:
		::System::Boolean ForceUninteractable; // 0x10
		::System::Boolean IsMainQuest; // 0x11
		::System::Int32 TabIndex; // 0x14
		::System::Int32 QuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER_TODOQUESTITEM__CTOR_OFFSET))(this);
		}
	};
}
