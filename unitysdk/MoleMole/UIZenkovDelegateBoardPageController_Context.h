#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E46690)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController_Context_TypeDefinitionIndex = 88487;

	class UIZenkovDelegateBoardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 TargetQuestId; // 0x28
		::Enum_3_C96DD177C1F2A967 DelegateSubType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
