#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22B4C7CF09D1BAC1_1;
namespace RPG::Client { class ChessRogueMainMissionReplayDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEREPLAYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB656B30)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GETMAINSTORYUNLOCKEDNUM_OFFSET UNITYSDK_OFFSET(0xB6670A0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GETMAINSTORYUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0xB666EF0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GETSORTEDSUBSTORYREPLAYINFO_OFFSET UNITYSDK_OFFSET(0xB6668C0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GETUNLOCKEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB667210)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GETUNLOCKEDSUBSTORYNUM_OFFSET UNITYSDK_OFFSET(0xB6673C0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_MAINSTORYLIST_OFFSET UNITYSDK_OFFSET(0xB667E30)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_SUBSTORYLIST_OFFSET UNITYSDK_OFFSET(0xB667E10)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_SYNCNEWSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB667E50)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB656870)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_SETSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xB667550)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_SET_MAINSTORYLIST_OFFSET UNITYSDK_OFFSET(0xB667E40)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_SET_SUBSTORYLIST_OFFSET UNITYSDK_OFFSET(0xB667E20)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB6639E0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6564F0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO__INITMAINSTORY_OFFSET UNITYSDK_OFFSET(0xB667B00)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO__INITSUBSTORY_OFFSET UNITYSDK_OFFSET(0xB6675B0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO__SYNCMAINSTORY_OFFSET UNITYSDK_OFFSET(0xB666400)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO__SYNCSUBSTORY_OFFSET UNITYSDK_OFFSET(0xB665C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueReplayInfo_TypeDefinitionIndex = 62609;

	class ChessRogueReplayInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueMainMissionReplayDataItem*>* _MainStoryList_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SyncNewSubStoryIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* _SubStoryList_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_22B4C7CF09D1BAC1_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*>* GetSortedSubStoryReplayInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GETSORTEDSUBSTORYREPLAYINFO_OFFSET))(this);
		}

		::System::Single GetMainStoryUnlockProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GETMAINSTORYUNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetMainStoryUnlockedNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GETMAINSTORYUNLOCKEDNUM_OFFSET))(this);
		}

		::System::Single GetUnlockedProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GETUNLOCKEDPROGRESS_OFFSET))(this);
		}

		::System::UInt32 GetUnlockedSubStoryNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GETUNLOCKEDSUBSTORYNUM_OFFSET))(this);
		}

		::System::Void SetSubStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_SETSUBSTORYSEEN_OFFSET))(this, a1);
		}

		::System::Void _SyncSubStory(::Class_1_22B4C7CF09D1BAC1_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO__SYNCSUBSTORY_OFFSET))(this, a1);
		}

		::System::Void _InitSubStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO__INITSUBSTORY_OFFSET))(this);
		}

		::System::Void _SyncMainStory(::Class_1_22B4C7CF09D1BAC1_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO__SYNCMAINSTORY_OFFSET))(this, a1);
		}

		::System::Void _InitMainStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO__INITMAINSTORY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* get_SubStoryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_SUBSTORYLIST_OFFSET))(this);
		}

		::System::Void set_SubStoryList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_SET_SUBSTORYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueMainMissionReplayDataItem*>* get_MainStoryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueMainMissionReplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_MAINSTORYLIST_OFFSET))(this);
		}

		::System::Void set_MainStoryList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueMainMissionReplayDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueMainMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_SET_MAINSTORYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SyncNewSubStoryIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO_GET_SYNCNEWSUBSTORYIDS_OFFSET))(this);
		}
	};
}
