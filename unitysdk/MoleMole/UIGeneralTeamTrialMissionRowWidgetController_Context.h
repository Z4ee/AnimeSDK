#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALTEAMTRIALMISSIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169C5250)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTeamTrialMissionRowWidgetController_Context_TypeDefinitionIndex = 68835;

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
