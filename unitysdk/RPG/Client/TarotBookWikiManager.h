#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotWikiTimeLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_GETALLDATA_OFFSET UNITYSDK_OFFSET(0xE1B6A70)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_FIRSTTIMEJUMPTOID_OFFSET UNITYSDK_OFFSET(0xE1B6840)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_ISFIRSTTIME_OFFSET UNITYSDK_OFFSET(0xE1B67E0)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_WIKISCROLLTIME_OFFSET UNITYSDK_OFFSET(0xE1B6950)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_MARKALLDATASEEN_OFFSET UNITYSDK_OFFSET(0xE1B6D50)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xE1B6CC0)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xE1AF3E0)
#define RPG_CLIENT_TAROTBOOKWIKIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AF380)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookWikiManager_TypeDefinitionIndex = 68080;

	class TarotBookWikiManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiTimeLine*>* _Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFirstTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_ISFIRSTTIME_OFFSET))(this);
		}

		::System::UInt32 get_FirstTimeJumpToID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_FIRSTTIMEJUMPTOID_OFFSET))(this);
		}

		::System::Single get_WikiScrollTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_GET_WIKISCROLLTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiTimeLine*>* GetAllData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotWikiTimeLine*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_GETALLDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_MARKHASSEEN_OFFSET))(this);
		}

		::System::Void MarkAllDataSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKWIKIMANAGER_MARKALLDATASEEN_OFFSET))(this);
		}
	};
}
