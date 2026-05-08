#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6A920)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListPageContext_TypeDefinitionIndex = 67495;

	class UIOverlordFeastTodoListPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetTodoQuest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
