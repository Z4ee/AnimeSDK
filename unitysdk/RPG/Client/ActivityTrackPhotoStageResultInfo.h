#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_113;
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO_CREATERESULT_OFFSET UNITYSDK_OFFSET(0xB21AE10)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB21CB10)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTOTALTRACKINFO_OFFSET UNITYSDK_OFFSET(0xB21CC10)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTRACKRESULT_OFFSET UNITYSDK_OFFSET(0xB21CD00)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__TRYGETCONFIG_OFFSET UNITYSDK_OFFSET(0xB21D730)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoStageResultInfo_TypeDefinitionIndex = 57989;

	class ActivityTrackPhotoStageResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeTotalCount; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeScore; // 0x20
		::RPG::Client::ActivityTrackPhotoStageData* StageDataRef; // 0x28
		::System::Boolean IsNewHighest; // 0x30
		::System::UInt32 StageID; // 0x34
		::System::UInt32 ExtraShotCount; // 0x38
		::System::UInt32 ExtraShotScore; // 0x3C
		::System::UInt32 ExtraShotTotalCount; // 0x40
		::System::UInt32 TotalScore; // 0x44
		::System::UInt32 Score; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityTrackPhotoStageResultInfo* CreateResult(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_113*>* a3, ::RPG::Client::ActivityTrackPhotoStageInstance* a4)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageResultInfo*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_113*>*, ::RPG::Client::ActivityTrackPhotoStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO_CREATERESULT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _SyncTotalTrackInfo(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTOTALTRACKINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncTrackResult(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_113*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_113*>*, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__SYNCTRACKRESULT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TrackPhotoTrashCanConfigRow* _TryGetConfig(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TrackPhotoTrashCanConfigRow*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGERESULTINFO__TRYGETCONFIG_OFFSET))(this, a1, a2);
		}
	};
}
