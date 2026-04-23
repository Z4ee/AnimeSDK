#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__DISPLAYCLASS5_0__CHECKTRAITISINCURTRAITLIST_B__0_OFFSET UNITYSDK_OFFSET(0x9AEA430)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEA190)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameCycleData___c__DisplayClass5_0_TypeDefinitionIndex = 69562;

	class ActivityHipplenGameCycleData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckTraitIsInCurTraitList_b__0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__DISPLAYCLASS5_0__CHECKTRAITISINCURTRAITLIST_B__0_OFFSET))(this, x);
		}
	};
}
