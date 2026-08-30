#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0xC6A96C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6A99C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0xC6AA1C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC6AA410)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xC6AA290)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xC6AA610)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC6AA210)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC6AA3B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC6AA630)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_VIEWRANGE_OFFSET UNITYSDK_OFFSET(0xC6AA590)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOFINISH_OFFSET UNITYSDK_OFFSET(0xC6A9D40)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOSHOT_OFFSET UNITYSDK_OFFSET(0xC6A9B90)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSETRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xC6A9A30)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSEUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xC6AA6C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xC6A9AB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xC6AA700)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xC6AA620)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC6AA640)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_UPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xC6AA650)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CALCULATETOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC6AA110)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC6A9920)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__FINISHINTERVAL_OFFSET UNITYSDK_OFFSET(0xC6A9DB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__RESETTOTALTIME_OFFSET UNITYSDK_OFFSET(0xC6AA0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoStageInstance_TypeDefinitionIndex = 62089;

	class ActivityTrackPhotoStageInstance : public ::System::Object
	{
	public:
		::RPG::Client::ActivityTrackPhotoStageData* _StageDataRef_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* _TrackShotParamList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeTotalCount; // 0x20
		::System::Single _TotalTime; // 0x28
		::System::Boolean _IsUpdateTotalTime; // 0x2C
		::System::UInt32 _TotalScore; // 0x30
		::System::UInt32 ExtraShotTotalCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityTrackPhotoStageInstance* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void PauseTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSETRACKPHOTO_OFFSET))(this);
		}

		::System::Void RecoverTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERTRACKPHOTO_OFFSET))(this);
		}

		::System::Void OnTrackPhotoShot(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOSHOT_OFFSET))(this, a1);
		}

		::System::Void OnTrackPhotoFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOFINISH_OFFSET))(this);
		}

		::System::Void _CalculateTotalScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CALCULATETOTALSCORE_OFFSET))(this);
		}

		::System::Void _FinishInterval()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__FINISHINTERVAL_OFFSET))(this);
		}

		::System::UInt32 get_CurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_CURCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Single get_ViewRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_VIEWRANGE_OFFSET))(this);
		}

		::RPG::Client::ActivityTrackPhotoStageData* get_StageDataRef()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_STAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_StageDataRef(::RPG::Client::ActivityTrackPhotoStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTrackPhotoStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_STAGEDATAREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* get_TrackShotParamList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TRACKSHOTPARAMLIST_OFFSET))(this);
		}

		::System::Void set_TrackShotParamList(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_TRACKSHOTPARAMLIST_OFFSET))(this, a1);
		}

		::System::Void UpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_UPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void PauseUpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSEUPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void RecoverUpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERUPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void _ResetTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__RESETTOTALTIME_OFFSET))(this);
		}
	};
}
