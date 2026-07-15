#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleDeckData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFEF0E0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETALLDECKS_OFFSET UNITYSDK_OFFSET(0x1AFEFAB0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GETUNLOCKEDDECKS_OFFSET UNITYSDK_OFFSET(0x1AFEFBE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_GET_DECKDATAS_OFFSET UNITYSDK_OFFSET(0x1AFEFE10)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AFEEE10)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_RECORDDECKSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AFEF330)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1AFEF950)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_SYNCDECKSSTATE_OFFSET UNITYSDK_OFFSET(0x1AFEF180)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO_TRYGETDECKDATA_OFFSET UNITYSDK_OFFSET(0x1AFEFA20)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEFE50)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__LOADDECKDATAS_OFFSET UNITYSDK_OFFSET(0x1AFEEEC0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO__SYNCDECKDATAS_OFFSET UNITYSDK_OFFSET(0x1AFEF5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckInfo_TypeDefinitionIndex = 58691;

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

		::System::Void SyncDecksState(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_SYNCDECKSSTATE_OFFSET))(this, a1, a2);
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

		::System::Void SetUnlockState(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_SETUNLOCKSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingBattleDeckData* TryGetDeckData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattleDeckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO_TRYGETDECKDATA_OFFSET))(this, a1);
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
