#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleDeckData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FBADF0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETALLDECKS_OFFSET UNITYSDK_OFFSET(0x9FA4960)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETUNLOCKEDDECKS_OFFSET UNITYSDK_OFFSET(0x9FBB5E0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GET_DECKDATAS_OFFSET UNITYSDK_OFFSET(0x9FBB730)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9FBAB60)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_RECORDDECKSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FBB0F0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x9FBB4E0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_SYNCDECKSSTATE_OFFSET UNITYSDK_OFFSET(0x9FBAEA0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_TRYGETDECKDATA_OFFSET UNITYSDK_OFFSET(0x9F9B2E0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FBB740)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__LOADDECKDATAS_OFFSET UNITYSDK_OFFSET(0x9FBAC10)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__SYNCDECKDATAS_OFFSET UNITYSDK_OFFSET(0x9FBB330)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckInfo_TypeDefinitionIndex = 56652;

	class ChenLingBattleDeckInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleDeckData*>* _DeckDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncDecksState(::System::Collections::Generic::List_1<::System::UInt32>* deckIDs, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_SYNCDECKSSTATE_OFFSET))(this, deckIDs, isUnlock);
		}

		::System::Void RecordDeckSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_RECORDDECKSEENUNLOCK_OFFSET))(this);
		}

		::System::Void _LoadDeckDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO__LOADDECKDATAS_OFFSET))(this);
		}

		::System::Void _SyncDeckDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO__SYNCDECKDATAS_OFFSET))(this);
		}

		::System::Void SetUnlockState(::System::UInt32 deckID, ::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_SETUNLOCKSTATE_OFFSET))(this, deckID, isUnlocked);
		}

		::RPG::Client::ChenLingBattleDeckData* TryGetDeckData(::System::UInt32 deckID)
		{
			return ((::RPG::Client::ChenLingBattleDeckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_TRYGETDECKDATA_OFFSET))(this, deckID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattleDeckData*>* GetAllDecks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattleDeckData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETALLDECKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattleDeckData*>* GetUnlockedDecks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattleDeckData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETUNLOCKEDDECKS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleDeckData*>* get_DeckDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleDeckData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_GET_DECKDATAS_OFFSET))(this);
		}
	};
}
