#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ActivityPhotoExhibitionDetailData; }
namespace RPG::Client { class ActivityPhotoExhibitionGroupData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19327010)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_FORCEPREPAREMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x19327AB0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GETDETAILDATA_OFFSET UNITYSDK_OFFSET(0x19327250)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x19327160)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x19327A60)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_HASANYAVAILABLEGROUPUNSEEN_OFFSET UNITYSDK_OFFSET(0x19327590)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_HASANYGROUPREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x193276E0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x19326E10)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x19327920)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ISFINISHALLGROUP_OFFSET UNITYSDK_OFFSET(0x19327440)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x193270B0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_RECORDGROUPSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x19327830)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19328040)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE__TRYPREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x19327110)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionModule_TypeDefinitionIndex = 58984;

	class ActivityPhotoExhibitionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityPhotoExhibitionGroupData*>* GroupDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::RPG::Client::ActivityPhotoExhibitionGroupData* GetGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPhotoExhibitionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GETGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityPhotoExhibitionDetailData* GetDetailData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPhotoExhibitionDetailData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GETDETAILDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishAllGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ISFINISHALLGROUP_OFFSET))(this);
		}

		::System::Boolean HasAnyAvailableGroupUnSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_HASANYAVAILABLEGROUPUNSEEN_OFFSET))(this);
		}

		::System::Boolean HasAnyGroupRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_HASANYGROUPREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void RecordGroupSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_RECORDGROUPSEENUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_ISACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ForcePrepareMissionDataReady()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_FORCEPREPAREMISSIONDATAREADY_OFFSET))(this);
		}

		::System::Void _TryPrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE__TRYPREPAREMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE_GET_ACTIVITYID_OFFSET))(this);
		}
	};
}
