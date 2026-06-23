#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174F4CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListPageContext_TypeDefinitionIndex = 41995;

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
