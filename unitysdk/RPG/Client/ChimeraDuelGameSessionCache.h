#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterRecommendationData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_GETSHOPAPPLIEDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x939E2E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPDUELCONFIRMSKIPCHECKED_OFFSET UNITYSDK_OFFSET(0x939E720)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0x939E6C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPNEWRARITYSEEN_OFFSET UNITYSDK_OFFSET(0x939E110)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPREFRESHUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0x939E580)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPSHOULDSKIPDUELCONFIRM_OFFSET UNITYSDK_OFFSET(0x939E7C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDBATTLESTAGE_OFFSET UNITYSDK_OFFSET(0x939AC40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDSHOPSTAGE_OFFSET UNITYSDK_OFFSET(0x939AA80)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINMEMORYCACHE_OFFSET UNITYSDK_OFFSET(0x939DEB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINSESSIONCACHEWITHFORCESAVE_OFFSET UNITYSDK_OFFSET(0x939DEF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETPREFCACHE_OFFSET UNITYSDK_OFFSET(0x939DC90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPAPPLIEDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x939E1C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPDUELCONFIRMSKIPCHECKED_OFFSET UNITYSDK_OFFSET(0x939E770)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0x939E630)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPNEWRARITYSEEN_OFFSET UNITYSDK_OFFSET(0x939E010)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPREFRESHUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0x939E480)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPSHOULDSKIPDUELCONFIRM_OFFSET UNITYSDK_OFFSET(0x939E810)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x939A120)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionCache_TypeDefinitionIndex = 51386;

	class ChimeraDuelGameSessionCache : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsShopDuelConfirmSkipChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionCache_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::Boolean* StaticGet__IsShopShouldSkipDuelConfirm()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionCache_TypeDefinitionIndex)->GetStaticField(0x126E1);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void ResetPrefCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETPREFCACHE_OFFSET))();
		}

		static ::System::Void ResetInMemoryCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINMEMORYCACHE_OFFSET))();
		}

		::System::Void ResetInSessionCacheWithForceSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINSESSIONCACHEWITHFORCESAVE_OFFSET))(this);
		}

		::System::Void OnEndRoundShopStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDSHOPSTAGE_OFFSET))(this);
		}

		::System::Void OnEndRoundBattleStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDBATTLESTAGE_OFFSET))(this);
		}

		::System::Void SetShopNewRaritySeen(::System::Boolean seen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPNEWRARITYSEEN_OFFSET))(this, seen);
		}

		::System::Boolean IsShopNewRaritySeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPNEWRARITYSEEN_OFFSET))(this);
		}

		::System::Void SetShopAppliedRecommendation(::RPG::Client::ChimeraDuelMasterRecommendationData* recommendation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterRecommendationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPAPPLIEDRECOMMENDATION_OFFSET))(this, recommendation);
		}

		::RPG::Client::ChimeraDuelMasterRecommendationData* GetShopAppliedRecommendation()
		{
			return ((::RPG::Client::ChimeraDuelMasterRecommendationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_GETSHOPAPPLIEDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void SetShopRefreshUnlockHintSeen(::System::Boolean seen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPREFRESHUNLOCKHINTSEEN_OFFSET))(this, seen);
		}

		::System::Boolean IsShopRefreshUnlockHintSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPREFRESHUNLOCKHINTSEEN_OFFSET))(this);
		}

		::System::Void SetShopItemSlotUnlockHintSeen(::System::Boolean seen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET))(this, seen);
		}

		::System::Boolean IsShopItemSlotUnlockHintSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET))(this);
		}

		::System::Boolean IsShopDuelConfirmSkipChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPDUELCONFIRMSKIPCHECKED_OFFSET))(this);
		}

		::System::Void SetShopDuelConfirmSkipChecked(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPDUELCONFIRMSKIPCHECKED_OFFSET))(this, isChecked);
		}

		::System::Boolean IsShopShouldSkipDuelConfirm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPSHOULDSKIPDUELCONFIRM_OFFSET))(this);
		}

		::System::Void SetShopShouldSkipDuelConfirm(::System::Boolean shouldSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPSHOULDSKIPDUELCONFIRM_OFFSET))(this, shouldSkip);
		}
	};
}
