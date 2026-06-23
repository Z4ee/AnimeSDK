#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E74370)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachPageController_Context_TypeDefinitionIndex = 85639;

	class UICoopTeachPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
