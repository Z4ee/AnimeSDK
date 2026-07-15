#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCheckPointInfo; }
namespace RPG::Client { class ClockParkRoundInfo; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1AE02EE0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1AE02E00)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE02EA0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0x1AE02E80)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISENDCHAPTER_OFFSET UNITYSDK_OFFSET(0x1AE02DA0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0x1AE02F30)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x1AE02E20)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1AE02E40)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE02EC0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE02E60)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1AE02E10)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE02EB0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0x1AE02E90)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x1AE02E30)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1AE02E50)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE02ED0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE02E70)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE02A40)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE02F90)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__ONCHAPTERCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE02B10)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkChapterInfo_TypeDefinitionIndex = 58750;

	class ClockParkChapterInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* _CheckAttribute_k__BackingField; // 0x10
		::RPG::GameCore::ClockParkChapterConfigRow* _Row_k__BackingField; // 0x18
		::RPG::Client::ClockParkCheckPointInfo* _CheckPointInfo_k__BackingField; // 0x20
		::RPG::Client::ClockParkRoundInfo* _RoundInfo_k__BackingField; // 0x28
		::System::Int32 _ChapterIndex_k__BackingField; // 0x30
		::System::Int32 _TotalRoundCount_k__BackingField; // 0x34
		::System::UInt32 _RoundIndex_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _OnChapterChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO__ONCHAPTERCHANGED_OFFSET))(this, a1);
		}

		::System::Int32 get_ChapterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::System::Void set_ChapterIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHAPTERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoundIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_RoundIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkRoundInfo* get_RoundInfo()
		{
			return ((::RPG::Client::ClockParkRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINFO_OFFSET))(this);
		}

		::System::Void set_RoundInfo(::RPG::Client::ClockParkRoundInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINFO_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_TOTALROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoundCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_TOTALROUNDCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCheckPointInfo* get_CheckPointInfo()
		{
			return ((::RPG::Client::ClockParkCheckPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKPOINTINFO_OFFSET))(this);
		}

		::System::Void set_CheckPointInfo(::RPG::Client::ClockParkCheckPointInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCheckPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKPOINTINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* get_CheckAttribute()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_CheckAttribute(::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKATTRIBUTE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkChapterConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkChapterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkChapterConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROW_OFFSET))(this, a1);
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
