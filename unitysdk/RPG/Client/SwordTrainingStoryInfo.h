#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_90;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class SwordTrainingStoryData; }
namespace RPG::Client { class SwordTrainingStoryLineData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYINFO_CLEARSTORYFINISH_OFFSET UNITYSDK_OFFSET(0xB263F60)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB263DE0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETCURRENTFINISHSTORYLINEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB264A40)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETENDINGSTORYDATABYSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xB264810)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETFINISHSTORYDATALIST_OFFSET UNITYSDK_OFFSET(0xB262370)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYDATA_OFFSET UNITYSDK_OFFSET(0xB264100)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYLINEDATABYSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xB2646F0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB2637C0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_STARTSTORYBYLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB2644F0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHEDSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB264390)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHSTORY_OFFSET UNITYSDK_OFFSET(0xB251450)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYINFO_OFFSET UNITYSDK_OFFSET(0xB2540B0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB2641E0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB2650D0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITFINISHSTORYLINEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB263B90)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGLINEDATALIST_OFFSET UNITYSDK_OFFSET(0xB263A50)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGSTORYDATADICT_OFFSET UNITYSDK_OFFSET(0xB263820)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__ONPERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0xB264DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryInfo_TypeDefinitionIndex = 57185;

	class SwordTrainingStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* _FinishStoryDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTrainingStoryData*>* _AllStoryDataDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*>* _FinishStoryLineEffectDescDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryLineData*>* StoryLineDataList; // 0x28
		::System::UInt32 _ActiveStoryID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearStoryFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_CLEARSTORYFINISH_OFFSET))(this);
		}

		::System::Void SyncStoryInfo(::Class_1_45BB92167AED63A0_90* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYINFO_OFFSET))(this, info);
		}

		::System::Void SyncFinishStory(::System::UInt32 storyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHSTORY_OFFSET))(this, storyID);
		}

		::System::Void SyncStoryLine(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* finishedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYLINE_OFFSET))(this, finishedIDs);
		}

		::System::Void SyncFinishedStoryLine(::System::UInt32 finishedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHEDSTORYLINE_OFFSET))(this, finishedID);
		}

		::RPG::Client::SwordTrainingStoryData* GetStoryData(::System::UInt32 storyID)
		{
			return ((::RPG::Client::SwordTrainingStoryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYDATA_OFFSET))(this, storyID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* GetFinishStoryDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETFINISHSTORYDATALIST_OFFSET))(this);
		}

		::System::Void StartStoryByLevelGraph(::System::UInt32 storyID, ::System::Boolean isRepeat)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_STARTSTORYBYLEVELGRAPH_OFFSET))(this, storyID, isRepeat);
		}

		::RPG::Client::SwordTrainingStoryLineData* GetStoryLineDataByStoryLineID(::System::UInt32 ID)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYLINEDATABYSTORYLINEID_OFFSET))(this, ID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* GetEndingStoryDataByStoryLineID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETENDINGSTORYDATABYSTORYLINEID_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetCurrentFinishStoryLineEffectDesc()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETCURRENTFINISHSTORYLINEEFFECTDESC_OFFSET))(this);
		}

		::System::Void _InitSwordTrainingLineDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGLINEDATALIST_OFFSET))(this);
		}

		::System::Void _InitSwordTrainingStoryDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGSTORYDATADICT_OFFSET))(this);
		}

		::System::Void _InitFinishStoryLineEffectDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO__INITFINISHSTORYLINEEFFECTDESC_OFFSET))(this);
		}

		::System::Void _OnPerformanceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO__ONPERFORMANCEFINISH_OFFSET))(this);
		}
	};
}
