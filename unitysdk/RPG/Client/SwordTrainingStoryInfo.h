#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_102;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class SwordTrainingStoryData; }
namespace RPG::Client { class SwordTrainingStoryLineData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYINFO_CLEARSTORYFINISH_OFFSET UNITYSDK_OFFSET(0xE13FE90)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE13FD10)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETCURRENTFINISHSTORYLINEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xE1410D0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETENDINGSTORYDATABYSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xE140E90)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETFINISHSTORYDATALIST_OFFSET UNITYSDK_OFFSET(0xE140870)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYDATA_OFFSET UNITYSDK_OFFSET(0xE140490)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYLINEDATABYSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xE140D90)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xE13F550)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_STARTSTORYBYLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xE140B80)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHEDSTORYLINE_OFFSET UNITYSDK_OFFSET(0xE140700)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHSTORY_OFFSET UNITYSDK_OFFSET(0xE140320)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYINFO_OFFSET UNITYSDK_OFFSET(0xE1400A0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYLINE_OFFSET UNITYSDK_OFFSET(0xE140540)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE141680)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITFINISHSTORYLINEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xE13FA70)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGLINEDATALIST_OFFSET UNITYSDK_OFFSET(0xE13F850)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__INITSWORDTRAININGSTORYDATADICT_OFFSET UNITYSDK_OFFSET(0xE13F5B0)
#define RPG_CLIENT_SWORDTRAININGSTORYINFO__ONPERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0xE141420)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryInfo_TypeDefinitionIndex = 62076;

	class SwordTrainingStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryLineData*>* StoryLineDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*>* _FinishStoryLineEffectDescDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTrainingStoryData*>* _AllStoryDataDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* _FinishStoryDataList; // 0x28
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

		::System::Void SyncStoryInfo(::Class_1_45BB92167AED63A0_102* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void SyncFinishStory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHSTORY_OFFSET))(this, a1);
		}

		::System::Void SyncStoryLine(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCSTORYLINE_OFFSET))(this, a1);
		}

		::System::Void SyncFinishedStoryLine(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_SYNCFINISHEDSTORYLINE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingStoryData* GetStoryData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingStoryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* GetFinishStoryDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETFINISHSTORYDATALIST_OFFSET))(this);
		}

		::System::Void StartStoryByLevelGraph(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_STARTSTORYBYLEVELGRAPH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::SwordTrainingStoryLineData* GetStoryLineDataByStoryLineID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETSTORYLINEDATABYSTORYLINEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>* GetEndingStoryDataByStoryLineID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingStoryData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYINFO_GETENDINGSTORYDATABYSTORYLINEID_OFFSET))(this, a1);
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
