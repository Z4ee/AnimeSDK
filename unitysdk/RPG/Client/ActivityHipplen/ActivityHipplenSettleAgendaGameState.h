#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4_2;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenStatusData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GETOLDSTATUSVALUE_OFFSET UNITYSDK_OFFSET(0xB0E3790)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0xB0E3830)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xB0E2CD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB0E3630)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB0E3740)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_SET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0xB0E3840)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E2CE0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleAgendaGameState_TypeDefinitionIndex = 70393;

	class ActivityHipplenSettleAgendaGameState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* TraitList; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenStatusData* StatusData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* _GiftList_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_325963497EC7CBB4_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, a1);
		}

		::System::Int32 GetOldStatusValue(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GETOLDSTATUSVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* get_GiftList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_GET_GIFTLIST_OFFSET))(this);
		}

		::System::Void set_GiftList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE_SET_GIFTLIST_OFFSET))(this, a1);
		}
	};
}
