#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevelGroup; }

#define RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19321390)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS28_0__GETLEVELGROUPBYLEVELID_B__0_OFFSET UNITYSDK_OFFSET(0x19323A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityParkourModule___c__DisplayClass28_0_TypeDefinitionIndex = 59085;

	class ActivityParkourModule___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 levelID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLevelGroupByLevelID_b__0(::RPG::Client::ParkourLevelGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___C__DISPLAYCLASS28_0__GETLEVELGROUPBYLEVELID_B__0_OFFSET))(this, a1);
		}
	};
}
