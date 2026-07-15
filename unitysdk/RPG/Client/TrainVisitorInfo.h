#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_40.h"
#include "unitysdk/System/Object.h"

class Class_1_75C6B25526EF2380_1;
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19899500)
#define RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x19899280)
#define RPG_CLIENT_TRAINVISITORINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19899B50)
#define RPG_CLIENT_TRAINVISITORINFO_GET_BEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x19899D30)
#define RPG_CLIENT_TRAINVISITORINFO_GET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x19899C00)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0x19899C20)
#define RPG_CLIENT_TRAINVISITORINFO_GET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0x19899BC0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19899B30)
#define RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x19899BE0)
#define RPG_CLIENT_TRAINVISITORINFO_GET_TOTALBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x19899C40)
#define RPG_CLIENT_TRAINVISITORINFO_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0x19899BA0)
#define RPG_CLIENT_TRAINVISITORINFO_HASUNCLAIMEDCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x19899AB0)
#define RPG_CLIENT_TRAINVISITORINFO_MARKASRECEIVED_OFFSET UNITYSDK_OFFSET(0x19899AF0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_FINISHEDBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x19899C10)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ISABLETAKEREWARD_OFFSET UNITYSDK_OFFSET(0x19899C30)
#define RPG_CLIENT_TRAINVISITORINFO_SET_RELATEDMISSIONID_OFFSET UNITYSDK_OFFSET(0x19899BD0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0x19899B40)
#define RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x19899BF0)
#define RPG_CLIENT_TRAINVISITORINFO_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0x19899BB0)
#define RPG_CLIENT_TRAINVISITORINFO_SYNCBEHAVIORLIST_OFFSET UNITYSDK_OFFSET(0x198995C0)
#define RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x19899470)
#define RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x198993E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainVisitorInfo_TypeDefinitionIndex = 65144;

	class TrainVisitorInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedBehaviorList_k__BackingField; // 0x10
		::RPG::GameCore::TrainVisitorConfigRow* _Row_k__BackingField; // 0x18
		::Enum_3_4608E37A1B3D374A_40 _Status_k__BackingField; // 0x20
		::System::Boolean _IsAbleTakeReward_k__BackingField; // 0x24
		::System::UInt32 _RelatedMissionID_k__BackingField; // 0x28
		::System::UInt32 _VisitorID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TrainVisitorInfo* Create(::Class_1_75C6B25526EF2380_1* a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::Class_1_75C6B25526EF2380_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::TrainVisitorInfo* Create_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_CREATE_1_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_75C6B25526EF2380_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_75C6B25526EF2380_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SYNC_OFFSET))(this, a1);
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

		::Enum_3_4608E37A1B3D374A_40 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_40(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_4608E37A1B3D374A_40 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_40))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINVISITORINFO_SET_STATUS_OFFSET))(this, a1);
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
