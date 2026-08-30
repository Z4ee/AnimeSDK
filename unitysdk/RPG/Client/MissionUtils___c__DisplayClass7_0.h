#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionIcon; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E13BC0)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x19E18C10)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass7_0_TypeDefinitionIndex = 66236;

	class MissionUtils___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 submissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPlayerCloseToSubMissionWaypoint_b__0(::RPG::Client::IMissionIcon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET))(this, a1);
		}
	};
}
