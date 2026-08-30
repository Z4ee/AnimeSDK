#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_33;
namespace RPG::GameCore { class ClockParkScriptConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCC3D960)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xCC3DDF0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETREACHEDENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3DB70)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_CHAPTERLIST_OFFSET UNITYSDK_OFFSET(0xCC3E600)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTCHARACTERISTIC_OFFSET UNITYSDK_OFFSET(0xCC3E290)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTGAMEPLAYDESC_OFFSET UNITYSDK_OFFSET(0xCC3E430)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCC3E170)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xCC3E380)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xCC3E1F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCC3E190)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_MAXCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3E640)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_REACHEDCHAPTERLIST_OFFSET UNITYSDK_OFFSET(0xCC3E5E0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCC3DEB0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_SCRIPTTYPE_OFFSET UNITYSDK_OFFSET(0xCC3E530)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_TOTALENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3E620)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISCHAPTERENDREACHED_OFFSET UNITYSDK_OFFSET(0xCC3DD30)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDFALSEENDING_OFFSET UNITYSDK_OFFSET(0xCC3DC50)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDTRUEENDING_OFFSET UNITYSDK_OFFSET(0xCC39BE0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_CHAPTERLIST_OFFSET UNITYSDK_OFFSET(0xCC3E610)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCC3E180)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_MAXCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3E650)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_REACHEDCHAPTERLIST_OFFSET UNITYSDK_OFFSET(0xCC3E5F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_TOTALENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3E630)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xCC3DA60)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC3D7F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETCHAPTERDEPTH_OFFSET UNITYSDK_OFFSET(0xCC3DF20)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC3E010)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__INITCHAPTERSDATA_OFFSET UNITYSDK_OFFSET(0xCC3D8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkScriptData_TypeDefinitionIndex = 61563;

	class ClockParkScriptData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ReachedChapterList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ChapterList_k__BackingField; // 0x18
		::RPG::GameCore::ClockParkScriptConfigRow* _Row; // 0x20
		::System::Int32 _TotalEndChapterCount_k__BackingField; // 0x28
		::System::Int32 _MaxChapterCount_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ClockParkScriptData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_45BB92167AED63A0_33* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Int32 GetReachedEndChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETREACHEDENDCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsReachedTrueEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDTRUEENDING_OFFSET))(this);
		}

		::System::Boolean IsReachedFalseEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDFALSEENDING_OFFSET))(this);
		}

		::System::Boolean IsChapterEndReached(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISCHAPTERENDREACHED_OFFSET))(this, a1);
		}

		::System::Int32 GetChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETCHAPTERINDEX_OFFSET))(this, a1);
		}

		::System::Void _InitChaptersData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__INITCHAPTERSDATA_OFFSET))(this);
		}

		::System::Int32 _GetEndChapterCount(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETENDCHAPTERCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetChapterDepth(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETCHAPTERDEPTH_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_HasScriptCharacteristic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTCHARACTERISTIC_OFFSET))(this);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Boolean get_HasScriptGamePlayDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTGAMEPLAYDESC_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkScriptType get_ScriptType()
		{
			return ((::RPG::GameCore::ClockParkScriptType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_SCRIPTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkScriptConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkScriptConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ReachedChapterList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_REACHEDCHAPTERLIST_OFFSET))(this);
		}

		::System::Void set_ReachedChapterList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_REACHEDCHAPTERLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChapterList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_CHAPTERLIST_OFFSET))(this);
		}

		::System::Void set_ChapterList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_CHAPTERLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalEndChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_TOTALENDCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalEndChapterCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_TOTALENDCHAPTERCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_MAXCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxChapterCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_MAXCHAPTERCOUNT_OFFSET))(this, a1);
		}
	};
}
