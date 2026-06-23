#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183EC0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialWidgetController_Context_TypeDefinitionIndex = 44295;

	class UIActivityTeamTrialWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuest; // 0x28
		::System::Int32 questID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
