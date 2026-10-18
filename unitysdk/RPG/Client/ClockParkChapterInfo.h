#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCheckPointInfo; }
namespace RPG::Client { class ClockParkRoundInfo; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xCB81920)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xCB81840)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCB818E0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0xCB818C0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISENDCHAPTER_OFFSET UNITYSDK_OFFSET(0xCB817E0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0xCB81970)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xCB81860)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xCB81880)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCB81900)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_GET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xCB818A0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xCB81850)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCB818F0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_CHECKPOINTINFO_OFFSET UNITYSDK_OFFSET(0xCB818D0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xCB81870)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xCB81890)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCB81910)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xCB818B0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCB81480)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB819D0)
#define RPG_CLIENT_CLOCKPARKCHAPTERINFO__ONCHAPTERCHANGED_OFFSET UNITYSDK_OFFSET(0xCB81550)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkChapterInfo_TypeDefinitionIndex = 61487;

	class ClockParkChapterInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkRoundInfo* _RoundInfo_k__BackingField; // 0x10
		::RPG::GameCore::ClockParkChapterConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::UInt32>* _CheckAttribute_k__BackingField; // 0x20
		::RPG::Client::ClockParkCheckPointInfo* _CheckPointInfo_k__BackingField; // 0x28
		::System::UInt32 _RoundIndex_k__BackingField; // 0x30
		::System::Int32 _TotalRoundCount_k__BackingField; // 0x34
		::System::Int32 _ChapterIndex_k__BackingField; // 0x38

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
