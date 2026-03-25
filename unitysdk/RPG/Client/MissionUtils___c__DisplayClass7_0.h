#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionIcon; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF9A10)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x9BFED90)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass7_0_TypeDefinitionIndex = 53808;

	class MissionUtils___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 submissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPlayerCloseToSubMissionWaypoint_b__0(::RPG::Client::IMissionIcon* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET))(this, data);
		}
	};
}
