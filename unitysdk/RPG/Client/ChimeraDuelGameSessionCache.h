#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterRecommendationData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_GETSHOPAPPLIEDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xA00C230)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPDUELCONFIRMSKIPCHECKED_OFFSET UNITYSDK_OFFSET(0xA00C670)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA00C610)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPNEWRARITYSEEN_OFFSET UNITYSDK_OFFSET(0xA00C060)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPREFRESHUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA00C4D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ISSHOPSHOULDSKIPDUELCONFIRM_OFFSET UNITYSDK_OFFSET(0xA00C710)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDBATTLESTAGE_OFFSET UNITYSDK_OFFSET(0xA008C00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_ONENDROUNDSHOPSTAGE_OFFSET UNITYSDK_OFFSET(0xA008A40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINMEMORYCACHE_OFFSET UNITYSDK_OFFSET(0xA00BE00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETINSESSIONCACHEWITHFORCESAVE_OFFSET UNITYSDK_OFFSET(0xA00BE40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_RESETPREFCACHE_OFFSET UNITYSDK_OFFSET(0xA00BBE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPAPPLIEDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xA00C110)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPDUELCONFIRMSKIPCHECKED_OFFSET UNITYSDK_OFFSET(0xA00C6C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPITEMSLOTUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA00C580)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPNEWRARITYSEEN_OFFSET UNITYSDK_OFFSET(0xA00BF60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPREFRESHUNLOCKHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA00C3D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE_SETSHOPSHOULDSKIPDUELCONFIRM_OFFSET UNITYSDK_OFFSET(0xA00C760)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0080E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionCache_TypeDefinitionIndex = 58324;

	class ChimeraDuelGameSessionCache : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsShopDuelConfirmSkipChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionCache_TypeDefinitionIndex)->GetStaticField(0x10050);
		}
		static ::System::Boolean* StaticGet__IsShopShouldSkipDuelConfirm()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionCache_TypeDefinitionIndex)->GetStaticField(0x10051);
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
