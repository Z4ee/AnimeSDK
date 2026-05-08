#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMEREVENTTASKDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7E420)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventTaskDialogPopWindowContext_TypeDefinitionIndex = 40716;

	class UISummerEventTaskDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTTASKDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
