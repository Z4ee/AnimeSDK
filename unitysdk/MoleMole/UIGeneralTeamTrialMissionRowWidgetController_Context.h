#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALTEAMTRIALMISSIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C7740)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTeamTrialMissionRowWidgetController_Context_TypeDefinitionIndex = 45451;

	class UIGeneralTeamTrialMissionRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 index; // 0x28
		::System::Int32 questID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEAMTRIALMISSIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
