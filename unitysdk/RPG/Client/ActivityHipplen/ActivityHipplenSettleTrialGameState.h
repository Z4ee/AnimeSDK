#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4_2;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_FINALGRADE_OFFSET UNITYSDK_OFFSET(0xB0E3E40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0xB0E3E60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GRADEUP_OFFSET UNITYSDK_OFFSET(0xB0E3E20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_ORIGINALGRADE_OFFSET UNITYSDK_OFFSET(0xB0E3E00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xB0E3A50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB0E3C80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB0E3D90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_FINALGRADE_OFFSET UNITYSDK_OFFSET(0xB0E3E50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GIFTLIST_OFFSET UNITYSDK_OFFSET(0xB0E3E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GRADEUP_OFFSET UNITYSDK_OFFSET(0xB0E3E30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_ORIGINALGRADE_OFFSET UNITYSDK_OFFSET(0xB0E3E10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E3A60)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleTrialGameState_TypeDefinitionIndex = 70396;

	class ActivityHipplenSettleTrialGameState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* _GiftList_k__BackingField; // 0x10
		::Class_1_325963497EC7CBB4_2* _AgendaResultNotify; // 0x18
		::System::UInt32 _FinalGrade_k__BackingField; // 0x20
		::System::UInt32 _OriginalGrade_k__BackingField; // 0x24
		::System::Int32 _GradeUp_k__BackingField; // 0x28
		::System::Boolean _NeedExitGameWhenFinish; // 0x2C

		::System::Void _ctor(::Class_1_325963497EC7CBB4_2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginalGrade()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_ORIGINALGRADE_OFFSET))(this);
		}

		::System::Void set_OriginalGrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_ORIGINALGRADE_OFFSET))(this, a1);
		}

		::System::Int32 get_GradeUp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GRADEUP_OFFSET))(this);
		}

		::System::Void set_GradeUp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GRADEUP_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalGrade()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_FINALGRADE_OFFSET))(this);
		}

		::System::Void set_FinalGrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_FINALGRADE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* get_GiftList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_GET_GIFTLIST_OFFSET))(this);
		}

		::System::Void set_GiftList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE_SET_GIFTLIST_OFFSET))(this, a1);
		}
	};
}
