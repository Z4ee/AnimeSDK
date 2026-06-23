#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIACTIVITYTEAMTRIALLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F63F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialListRowWidgetController_Data_TypeDefinitionIndex = 64586;

	class UIActivityTeamTrialListRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 activityID; // 0x10
		::System::Int32 questID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
