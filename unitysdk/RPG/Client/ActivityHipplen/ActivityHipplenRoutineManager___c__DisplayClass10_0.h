#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFEAE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER___C__DISPLAYCLASS10_0__GETSORTEDSELECTABLEWORKLIST_B__0_OFFSET UNITYSDK_OFFSET(0x9AFECA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutineManager___c__DisplayClass10_0_TypeDefinitionIndex = 69665;

	class ActivityHipplenRoutineManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenStatType statType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedSelectableWorkList_b__0(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* x, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINEMANAGER___C__DISPLAYCLASS10_0__GETSORTEDSELECTABLEWORKLIST_B__0_OFFSET))(this, x, y);
		}
	};
}
