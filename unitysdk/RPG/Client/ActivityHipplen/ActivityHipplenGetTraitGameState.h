#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_GET_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0x8F1B720)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x8F1B1E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x8F1B550)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F1B6D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_SET_GETTRAITLIST_OFFSET UNITYSDK_OFFSET(0x8F1B730)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1B1F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGetTraitGameState_TypeDefinitionIndex = 61663;

	class ActivityHipplenGetTraitGameState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* _GetTraitList_k__BackingField; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* getTraitIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE__CTOR_OFFSET))(this, getTraitIDList);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, game);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* get_GetTraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_GET_GETTRAITLIST_OFFSET))(this);
		}

		::System::Void set_GetTraitList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGETTRAITGAMESTATE_SET_GETTRAITLIST_OFFSET))(this, value);
		}
	};
}
