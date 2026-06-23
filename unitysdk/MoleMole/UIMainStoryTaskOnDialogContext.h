#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINSTORYTASKONDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1693FDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryTaskOnDialogContext_TypeDefinitionIndex = 79799;

	class UIMainStoryTaskOnDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* callback; // 0x28
		::System::Int32 tipid; // 0x30
		::System::Boolean beginPerform; // 0x34
		::System::Boolean hasPlotPlay; // 0x35
		::System::Int32 questid; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYTASKONDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
