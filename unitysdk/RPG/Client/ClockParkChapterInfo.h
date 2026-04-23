#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCheckPointInfo; }
namespace RPG::Client { class ClockParkRoundInfo; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xA09BB50)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xA09BA70)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA09BB10)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0xA09BAF0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISENDCHAPTER_OFFSET UNITYSDK_OFFSET(0xA09BA10)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0xA09BBA0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xA09BA90)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA09BAB0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA09BB30)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA09BAD0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xA09BA80)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA09BB20)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0xA09BB00)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xA09BAA0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA09BAC0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA09BB40)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA09BAE0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA09B6B0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA09BC00)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__ONCHAPTERCHANGED_OFFSET UNITYSDK_OFFSET(0xA09B780)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkChapterInfo_TypeDefinitionIndex = 56704;

	class ClockParkChapterInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkRoundInfo* _RoundInfo_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* _CheckAttribute_k__BackingField; // 0x18
		::RPG::Client::ClockParkCheckPointInfo* _CheckPointInfo_k__BackingField; // 0x20
		::RPG::GameCore::ClockParkChapterConfigRow* _Row_k__BackingField; // 0x28
		::System::Int32 _ChapterIndex_k__BackingField; // 0x30
		::System::UInt32 _RoundIndex_k__BackingField; // 0x34
		::System::Int32 _TotalRoundCount_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 chapterID, ::System::Int32 chapterIndex, ::System::UInt32 roundID, ::System::UInt32 roundIndexInChapter, ::System::UInt32 checkPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SYNC_OFFSET))(this, chapterID, chapterIndex, roundID, roundIndexInChapter, checkPointID);
		}

		::System::Void _OnChapterChanged(::System::UInt32 chapterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO__ONCHAPTERCHANGED_OFFSET))(this, chapterID);
		}

		::System::Int32 get_ChapterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::System::Void set_ChapterIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHAPTERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_RoundIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_RoundIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINDEX_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkRoundInfo* get_RoundInfo()
		{
			return ((::RPG::Client::ClockParkRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINFO_OFFSET))(this);
		}

		::System::Void set_RoundInfo(::RPG::Client::ClockParkRoundInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINFO_OFFSET))(this, value);
		}

		::System::Int32 get_TotalRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_TOTALROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoundCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_TOTALROUNDCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkCheckPointInfo* get_CheckPointInfo()
		{
			return ((::RPG::Client::ClockParkCheckPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKPOINTINFO_OFFSET))(this);
		}

		::System::Void set_CheckPointInfo(::RPG::Client::ClockParkCheckPointInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCheckPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKPOINTINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* get_CheckAttribute()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_CheckAttribute(::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKATTRIBUTE_OFFSET))(this, value);
		}

		::RPG::GameCore::ClockParkChapterConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkChapterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkChapterConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsEndChapter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISENDCHAPTER_OFFSET))(this);
		}

		::System::Boolean get_IsTrueEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISTRUEENDING_OFFSET))(this);
		}
	};
}
