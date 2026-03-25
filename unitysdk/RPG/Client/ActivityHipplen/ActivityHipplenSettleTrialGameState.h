#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_4;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_FINALGRADE_OFFSET UNITYSDK_OFFSET(0x8F2DF90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0x8F2DFB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GRADEUP_OFFSET UNITYSDK_OFFSET(0x8F2DF70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_ORIGINALGRADE_OFFSET UNITYSDK_OFFSET(0x8F2DF50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x8F2D9E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x8F2DC30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F2DD30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_FINALGRADE_OFFSET UNITYSDK_OFFSET(0x8F2DFA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0x8F2DFC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GRADEUP_OFFSET UNITYSDK_OFFSET(0x8F2DF80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_ORIGINALGRADE_OFFSET UNITYSDK_OFFSET(0x8F2DF60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2D9F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleTrialGameState_TypeDefinitionIndex = 61674;

	class ActivityHipplenSettleTrialGameState : public ::System::Object
	{
	public:
		::Class_1_1DC52A0BEDF50632_4* _AgendaResultNotify; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* _GiftList_k__BackingField; // 0x18
		::System::Boolean _NeedExitGameWhenFinish; // 0x20
		::System::UInt32 _OriginalGrade_k__BackingField; // 0x24
		::System::Int32 _GradeUp_k__BackingField; // 0x28
		::System::UInt32 _FinalGrade_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_1DC52A0BEDF50632_4* ntf, ::System::Boolean needExitGameWhenFinish)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632_4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE__CTOR_OFFSET))(this, ntf, needExitGameWhenFinish);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, game);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::UInt32 get_OriginalGrade()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_ORIGINALGRADE_OFFSET))(this);
		}

		::System::Void set_OriginalGrade(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_ORIGINALGRADE_OFFSET))(this, value);
		}

		::System::Int32 get_GradeUp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GRADEUP_OFFSET))(this);
		}

		::System::Void set_GradeUp(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GRADEUP_OFFSET))(this, value);
		}

		::System::UInt32 get_FinalGrade()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_FINALGRADE_OFFSET))(this);
		}

		::System::Void set_FinalGrade(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_FINALGRADE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* get_GiftList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GIFTLIST_OFFSET))(this);
		}

		::System::Void set_GiftList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GIFTLIST_OFFSET))(this, value);
		}
	};
}
