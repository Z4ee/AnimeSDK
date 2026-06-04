#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_2D5FDF08D5D53B49_Class_1_649009C7AFC75085;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xB0C4CD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB0C4CE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB0C5030)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE__CREATESWITCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xB0C4E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C5090)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenArrangeGameState_TypeDefinitionIndex = 70381;

	class ActivityHipplenArrangeGameState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, a1);
		}

		::Class_1_2D5FDF08D5D53B49_Class_1_649009C7AFC75085* _CreateSwitchContext()
		{
			return ((::Class_1_2D5FDF08D5D53B49_Class_1_649009C7AFC75085*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE__CREATESWITCHCONTEXT_OFFSET))(this);
		}
	};
}
