#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevelGroup; }

#define RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C39B90)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS27_0__GETLEVELGROUPBYID_B__0_OFFSET UNITYSDK_OFFSET(0x9C3C050)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityParkourModule___c__DisplayClass27_0_TypeDefinitionIndex = 57031;

	class ActivityParkourModule___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLevelGroupByID_b__0(::RPG::Client::ParkourLevelGroup* levelGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS27_0__GETLEVELGROUPBYID_B__0_OFFSET))(this, levelGroup);
		}
	};
}
