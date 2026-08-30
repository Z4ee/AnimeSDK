#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_39.h"
#include "unitysdk/System/Object.h"

class Class_1_75C6B25526EF2380_2;
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B2A91A0)
#define RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2A8F20)
#define RPG_CLIENT_TRAINVISITORINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B2A97F0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_BEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A99D0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x1B2A98A0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1B2A98C0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B2A9860)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B2A97D0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B2A9880)
#define RPG_CLIENT_TRAINVISITORINFO_GET_TOTALBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A98E0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0x1B2A9840)
#define RPG_CLIENT_TRAINVISITORINFO_HASUNCLAIMEDCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x1B2A9750)
#define RPG_CLIENT_TRAINVISITORINFO_MARKASRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B2A9790)
#define RPG_CLIENT_TRAINVISITORINFO_SET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x1B2A98B0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1B2A98D0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B2A9870)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1B2A97E0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B2A9890)
#define RPG_CLIENT_TRAINVISITORINFO_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0x1B2A9850)
#define RPG_CLIENT_TRAINVISITORINFO_SYNCBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x1B2A9260)
#define RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1B2A9110)
#define RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A9080)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainVisitorInfo_TypeDefinitionIndex = 68152;

	class TrainVisitorInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedBehaviorList_k__BackingField; // 0x10
		::RPG::GameCore::TrainVisitorConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _RelatedMissionID_k__BackingField; // 0x20
		::Enum_3_4608E37A1B3D374A_39 _Status_k__BackingField; // 0x24
		::System::Boolean _IsAbleTakeReward_k__BackingField; // 0x28
		::System::UInt32 _VisitorID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TrainVisitorInfo* Create(::Class_1_75C6B25526EF2380_2* a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::Class_1_75C6B25526EF2380_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::TrainVisitorInfo* Create_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_75C6B25526EF2380_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_75C6B25526EF2380_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncBehaviorList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SYNCBEHAVIORLIST_OFFSET))(this, a1);
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

		::System::Void set_Row(::RPG::GameCore::TrainVisitorConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_VisitorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_VISITORID_OFFSET))(this);
		}

		::System::Void set_VisitorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_VISITORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_RELATEDMISSIONID_OFFSET))(this);
		}

		::System::Void set_RelatedMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_RELATEDMISSIONID_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_39 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_39(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_4608E37A1B3D374A_39 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_39))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedBehaviorList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_FINISHEDBEHAVIORLIST_OFFSET))(this);
		}

		::System::Void set_FinishedBehaviorList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_FINISHEDBEHAVIORLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAbleTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_ISABLETAKEREWARD_OFFSET))(this);
		}

		::System::Void set_IsAbleTakeReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_ISABLETAKEREWARD_OFFSET))(this, a1);
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
