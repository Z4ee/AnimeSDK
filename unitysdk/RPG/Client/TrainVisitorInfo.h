#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_37.h"
#include "unitysdk/System/Object.h"

class Class_1_2AF2F5628A9B57FA_1;
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA615850)
#define RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA615630)
#define RPG_CLIENT_TRAINVISITORINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA615CE0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_BEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xA615E50)
#define RPG_CLIENT_TRAINVISITORINFO_GET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0xA615D60)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA615D80)
#define RPG_CLIENT_TRAINVISITORINFO_GET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0xA615D20)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA615CC0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA615D40)
#define RPG_CLIENT_TRAINVISITORINFO_GET_TOTALBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xA615DA0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0xA615D00)
#define RPG_CLIENT_TRAINVISITORINFO_HASUNCLAIMEDCOMPENSATION_OFFSET UNITYSDK_OFFSET(0xA615C40)
#define RPG_CLIENT_TRAINVISITORINFO_MARKASRECEIVED_OFFSET UNITYSDK_OFFSET(0xA615C80)
#define RPG_CLIENT_TRAINVISITORINFO_SET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0xA615D70)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA615D90)
#define RPG_CLIENT_TRAINVISITORINFO_SET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0xA615D30)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA615CD0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA615D50)
#define RPG_CLIENT_TRAINVISITORINFO_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0xA615D10)
#define RPG_CLIENT_TRAINVISITORINFO_SYNCBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0xA615910)
#define RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA6157A0)
#define RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA615720)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainVisitorInfo_TypeDefinitionIndex = 55645;

	class TrainVisitorInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainVisitorConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedBehaviorList_k__BackingField; // 0x18
		::System::UInt32 _RelatedMissionID_k__BackingField; // 0x20
		::System::UInt32 _VisitorID_k__BackingField; // 0x24
		::System::Boolean _IsAbleTakeReward_k__BackingField; // 0x28
		::Enum_3_4608E37A1B3D374A_37 _Status_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 visitorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET))(this, visitorID);
		}

		static ::RPG::Client::TrainVisitorInfo* Create(::Class_1_2AF2F5628A9B57FA_1* profile)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::Class_1_2AF2F5628A9B57FA_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET))(profile);
		}

		static ::RPG::Client::TrainVisitorInfo* Create_1(::System::UInt32 visitorID)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET))(visitorID);
		}

		::System::Void Sync(::Class_1_2AF2F5628A9B57FA_1* profile)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2AF2F5628A9B57FA_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET))(this, profile);
		}

		::System::Void SyncBehaviorList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SYNCBEHAVIORLIST_OFFSET))(this, list);
		}

		::System::Boolean HasUnclaimedCompensation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_HASUNCLAIMEDCOMPENSATION_OFFSET))(this);
		}

		::System::Void MarkAsReceived()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_MARKASRECEIVED_OFFSET))(this);
		}

		::RPG::GameCore::TrainVisitorConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainVisitorConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::TrainVisitorConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_VisitorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_VISITORID_OFFSET))(this);
		}

		::System::Void set_VisitorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_VISITORID_OFFSET))(this, value);
		}

		::System::UInt32 get_RelatedMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_RELATEDMISSIONID_OFFSET))(this);
		}

		::System::Void set_RelatedMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_RELATEDMISSIONID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_37 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_37(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_4608E37A1B3D374A_37 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_37))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedBehaviorList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_FINISHEDBEHAVIORLIST_OFFSET))(this);
		}

		::System::Void set_FinishedBehaviorList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_FINISHEDBEHAVIORLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsAbleTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_ISABLETAKEREWARD_OFFSET))(this);
		}

		::System::Void set_IsAbleTakeReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_ISABLETAKEREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalBehaviorCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_TOTALBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_BehaviorCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_BEHAVIORCOUNT_OFFSET))(this);
		}
	};
}
