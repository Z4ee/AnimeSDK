#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYTEAMTRIALMISSIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173D95F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialMissionRowWidgetController_Context_TypeDefinitionIndex = 88840;

	class UIActivityTeamTrialMissionRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 index; // 0x28
		::System::Int32 questID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALMISSIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
