#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_604;
class Class_0_16E4307DCC419505_605;
class Class_1_02098A44CBBFEEE1;
class Class_1_29E6BE84CDFF3FCC;
class Class_1_2FB3CED2F6656F56;
class Class_1_56BF5B959E649773;
class Class_1_B292FE068586E4C9;
class Class_1_FA4F4A67B1C04320_209;
class Class_1_FA4F4A67B1C04320_211;
class Class_1_FA4F4A67B1C04320_212;
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDINSERT_OFFSET UNITYSDK_OFFSET(0x93A0FC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDUPGRADE_OFFSET UNITYSDK_OFFSET(0x93A0C10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAWITHREORDER_OFFSET UNITYSDK_OFFSET(0x93A0D60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_CREATE_OFFSET UNITYSDK_OFFSET(0x939A130)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x939A6A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GETREFRESHCOST_OFFSET UNITYSDK_OFFSET(0x93A1CE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISLOCKFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93A1A20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISMASTERRECOMMENDATIONFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93A1870)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISNEWITEMSLOTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93A1B70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISREFRESHFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93A18D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_STALL_OFFSET UNITYSDK_OFFSET(0x93A1800)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_TUTORIALTASKUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x93A1BF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ISTUTORIALGAME_OFFSET UNITYSDK_OFFSET(0x93A1810)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ITEMMINSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x93A1790)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x93A1140)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x93A16A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0x93A07C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERABOUGHT_OFFSET UNITYSDK_OFFSET(0x939C150)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERASKILL_OFFSET UNITYSDK_OFFSET(0x939BCA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYITEMBOUGHT_OFFSET UNITYSDK_OFFSET(0x939C210)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYSHOPUPDATE_OFFSET UNITYSDK_OFFSET(0x939BDA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYUPDATETEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x939BEC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0x93A0BC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_PREPAREBUILDINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x939AFC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0x93A0B30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETCHIMERALOCKED_OFFSET UNITYSDK_OFFSET(0x93A0600)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x93A06E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYBUYITEM_OFFSET UNITYSDK_OFFSET(0x93A1360)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYENDSTAGE_OFFSET UNITYSDK_OFFSET(0x93A1700)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYTRIGGERPENDINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x939BAB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__BUYITEMANDAPPLY_OFFSET UNITYSDK_OFFSET(0x93A1540)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x93A1C60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__SYNC_OFFSET UNITYSDK_OFFSET(0x93A0570)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__TRYAPPENDPERFORMANCESTEP_OFFSET UNITYSDK_OFFSET(0x93A04C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop_TypeDefinitionIndex = 51390;

	class ChimeraDuelGameSessionShop : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* _PendingUpgradeEffect; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_604*>* _ViewPerformance; // 0x18
		::Class_0_16E4307DCC419505_605* _Dependencies; // 0x20
		::System::Action* OnBuyFinished; // 0x28
		::RPG::Client::ChimeraDuelGameShopStallData* _Stall_k__BackingField; // 0x30
		::System::Nullable_1<::System::UInt32> _PendingBuyingChimeraUniqueID; // 0x38
		::System::Nullable_1<::System::UInt32> _PendingBuyingItemUniqueID; // 0x40
		::System::Boolean _IsBuildingPerformance; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_605* dependencies)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_605*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__CTOR_OFFSET))(this, dependencies);
		}

		::System::Void OnNotifyUpdateTeamMember(::Class_1_02098A44CBBFEEE1* chimeraUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYUPDATETEAMMEMBER_OFFSET))(this, chimeraUpdate);
		}

		::System::Void OnNotifyShopUpdate(::Class_1_56BF5B959E649773* shopUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56BF5B959E649773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYSHOPUPDATE_OFFSET))(this, shopUpdate);
		}

		::System::Void OnNotifyChimeraBought(::System::UInt32 chimeraUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERABOUGHT_OFFSET))(this, chimeraUniqueID);
		}

		::System::Void OnNotifyItemBought(::System::UInt32 itemUniqueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYITEMBOUGHT_OFFSET))(this, itemUniqueId);
		}

		::System::Void OnNotifyChimeraSkill(::Class_1_2FB3CED2F6656F56* skill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FB3CED2F6656F56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERASKILL_OFFSET))(this, skill);
		}

		::System::Void SetChimeraLocked(::RPG::Client::ChimeraDuelGameSessionShopChimera* chimera, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopChimera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETCHIMERALOCKED_OFFSET))(this, chimera, locked);
		}

		::System::Void SetItemLocked(::RPG::Client::ChimeraDuelGameSessionShopItem* item, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETITEMLOCKED_OFFSET))(this, item, locked);
		}

		::System::Void OnLockScRsp(::Class_1_29E6BE84CDFF3FCC* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_29E6BE84CDFF3FCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONLOCKSCRSP_OFFSET))(this, rsp);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_REFRESH_OFFSET))(this);
		}

		::System::Void OnRefreshScRsp(::Class_1_FA4F4A67B1C04320_212* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONREFRESHSCRSP_OFFSET))(this, rsp);
		}

		::System::Void BuyChimeraAndUpgrade(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDUPGRADE_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void BuyChimeraAndInsert(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDINSERT_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void BuyChimeraWithReorder(::System::UInt32 shopChimeraUniqueID, ::Il2CppArray<::System::UInt32>* lineup, ::System::UInt32 upgradedMemberUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAWITHREORDER_OFFSET))(this, shopChimeraUniqueID, lineup, upgradedMemberUniqueID);
		}

		::System::Void OnBuyChimeraScRsp(::Class_1_FA4F4A67B1C04320_209* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_209*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYCHIMERASCRSP_OFFSET))(this, rsp);
		}

		::System::Boolean TryBuyItem(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYBUYITEM_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void _BuyItemAndApply(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__BUYITEMANDAPPLY_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void OnBuyItemScRsp(::Class_1_FA4F4A67B1C04320_211* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_211*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYITEMSCRSP_OFFSET))(this, rsp);
		}

		::System::Void TryEndStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYENDSTAGE_OFFSET))(this);
		}

		::System::Int32 get__ItemMinSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ITEMMINSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameShopStallData* get_Stall()
		{
			return ((::RPG::Client::ChimeraDuelGameShopStallData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_STALL_OFFSET))(this);
		}

		::System::Boolean get__IsTutorialGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ISTUTORIALGAME_OFFSET))(this);
		}

		::System::Boolean get_IsMasterRecommendationFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISMASTERRECOMMENDATIONFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsRefreshFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISREFRESHFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsLockFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISLOCKFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNewItemSlotUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISNEWITEMSLOTUNLOCKED_OFFSET))(this);
		}

		::System::String* get_TutorialTaskUnlockKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_TUTORIALTASKUNLOCKKEY_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShop* Create(::Class_0_16E4307DCC419505_605* dependencies, ::Class_1_B292FE068586E4C9* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShop*(*)(::Class_0_16E4307DCC419505_605*, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_CREATE_OFFSET))(dependencies, serverData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_DISPOSE_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_B292FE068586E4C9* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__SYNC_OFFSET))(this, serverData);
		}

		::System::Int32 GetRefreshCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GETREFRESHCOST_OFFSET))(this);
		}

		::System::Void PrepareBuildingPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_PREPAREBUILDINGPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryAppendPerformanceStep(::Class_0_16E4307DCC419505_604* command)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_604*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__TRYAPPENDPERFORMANCESTEP_OFFSET))(this, command);
		}

		::System::Void TryTriggerPendingPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYTRIGGERPENDINGPERFORMANCE_OFFSET))(this);
		}
	};
}
