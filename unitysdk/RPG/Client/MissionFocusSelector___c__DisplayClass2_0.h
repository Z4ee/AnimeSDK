#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D9870)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__0_OFFSET UNITYSDK_OFFSET(0xD6D9D80)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__1_OFFSET UNITYSDK_OFFSET(0xD6D9E30)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionFocusSelector___c__DisplayClass2_0_TypeDefinitionIndex = 66164;

	class MissionFocusSelector___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* missionData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMostRelevantShownAndStartedMissionIDToFocus_b__0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetMostRelevantShownAndStartedMissionIDToFocus_b__1(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS2_0__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__1_OFFSET))(this, a1);
		}
	};
}
