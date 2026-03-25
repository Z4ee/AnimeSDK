#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_102;
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO_CREATERESULT_OFFSET UNITYSDK_OFFSET(0x901C390)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x901E180)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTOTALTRACKINFO_OFFSET UNITYSDK_OFFSET(0x901E280)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTRACKRESULT_OFFSET UNITYSDK_OFFSET(0x901E370)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__TRYGETCONFIG_OFFSET UNITYSDK_OFFSET(0x901ED40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoStageResultInfo_TypeDefinitionIndex = 50340;

	class ActivityTrackPhotoStageResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeTotalCount; // 0x10
		::RPG::Client::ActivityTrackPhotoStageData* StageDataRef; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeScore; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeCount; // 0x28
		::System::UInt32 StageID; // 0x30
		::System::Boolean IsNewHighest; // 0x34
		::System::UInt32 Score; // 0x38
		::System::UInt32 ExtraShotTotalCount; // 0x3C
		::System::UInt32 ExtraShotScore; // 0x40
		::System::UInt32 TotalScore; // 0x44
		::System::UInt32 ExtraShotCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityTrackPhotoStageResultInfo* CreateResult(::System::UInt32 stageID, ::System::UInt32 score, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_102*>* takeCanInfos, ::RPG::Client::ActivityTrackPhotoStageInstance* curStageInstance)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageResultInfo*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_102*>*, ::RPG::Client::ActivityTrackPhotoStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO_CREATERESULT_OFFSET))(stageID, score, takeCanInfos, curStageInstance);
		}

		::System::Void _SyncTotalTrackInfo(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* totalCount, ::System::UInt32 extraShotTotalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTOTALTRACKINFO_OFFSET))(this, totalCount, extraShotTotalCount);
		}

		::System::Void _SyncTrackResult(::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_102*>* takeCanInfos, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* clientShotParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_102*>*, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTRACKRESULT_OFFSET))(this, takeCanInfos, clientShotParams);
		}

		::RPG::GameCore::TrackPhotoTrashCanConfigRow* _TryGetConfig(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* clientShotParams, ::System::UInt32 entityID)
		{
			return ((::RPG::GameCore::TrackPhotoTrashCanConfigRow*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__TRYGETCONFIG_OFFSET))(this, clientShotParams, entityID);
		}
	};
}
