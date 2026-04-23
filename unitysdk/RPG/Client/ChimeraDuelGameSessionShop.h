#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_695;
class Class_0_16E4307DCC419505_696;
class Class_1_34A67A60E0FAC469;
class Class_1_6D9CA5A41DD53E47;
class Class_1_8F38FF89E4BFAA77;
class Class_1_D17272E82AE804C2_216;
class Class_1_D17272E82AE804C2_218;
class Class_1_D17272E82AE804C2_219;
class Class_1_DCE302F7FD05DE84_1;
class Class_1_FE6CD7C4A65B646F;
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDINSERT_OFFSET UNITYSDK_OFFSET(0xA00EF50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAANDUPGRADE_OFFSET UNITYSDK_OFFSET(0xA00EBA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_BUYCHIMERAWITHREORDER_OFFSET UNITYSDK_OFFSET(0xA00ECF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_CREATE_OFFSET UNITYSDK_OFFSET(0xA0080F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA008660)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GETREFRESHCOST_OFFSET UNITYSDK_OFFSET(0xA00FCA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISLOCKFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA00F9D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISMASTERRECOMMENDATIONFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA00F810)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISNEWITEMSLOTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA00FB30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_ISREFRESHFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA00F870)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_STALL_OFFSET UNITYSDK_OFFSET(0xA00F7A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET_TUTORIALTASKUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0xA00FBB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ISTUTORIALGAME_OFFSET UNITYSDK_OFFSET(0xA00F7B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GET__ITEMMINSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA00F730)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xA00F0D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA00F630)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0xA00E740)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERABOUGHT_OFFSET UNITYSDK_OFFSET(0xA00A070)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERASKILL_OFFSET UNITYSDK_OFFSET(0xA009BC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYITEMBOUGHT_OFFSET UNITYSDK_OFFSET(0xA00A130)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYSHOPUPDATE_OFFSET UNITYSDK_OFFSET(0xA009CC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYUPDATETEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xA009DE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0xA00EB50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_PREPAREBUILDINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA008F80)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0xA00EAB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETCHIMERALOCKED_OFFSET UNITYSDK_OFFSET(0xA00E580)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETITEMLOCKED_OFFSET UNITYSDK_OFFSET(0xA00E670)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYBUYITEM_OFFSET UNITYSDK_OFFSET(0xA00F2F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYENDSTAGE_OFFSET UNITYSDK_OFFSET(0xA00F690)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYTRIGGERPENDINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA0099D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__BUYITEMANDAPPLY_OFFSET UNITYSDK_OFFSET(0xA00F4D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xA00FC20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__SYNC_OFFSET UNITYSDK_OFFSET(0xA00E4F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__TRYAPPENDPERFORMANCESTEP_OFFSET UNITYSDK_OFFSET(0xA00E440)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop_TypeDefinitionIndex = 58328;

	class ChimeraDuelGameSessionShop : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* _PendingUpgradeEffect; // 0x10
		::System::Action* OnBuyFinished; // 0x18
		::RPG::Client::ChimeraDuelGameShopStallData* _Stall_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_695* _Dependencies; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_696*>* _ViewPerformance; // 0x30
		::System::Nullable_1<::System::UInt32> _PendingBuyingItemUniqueID; // 0x38
		::System::Nullable_1<::System::UInt32> _PendingBuyingChimeraUniqueID; // 0x40
		::System::Boolean _IsBuildingPerformance; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_695* dependencies)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_695*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__CTOR_OFFSET))(this, dependencies);
		}

		::System::Void OnNotifyUpdateTeamMember(::Class_1_DCE302F7FD05DE84_1* chimeraUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYUPDATETEAMMEMBER_OFFSET))(this, chimeraUpdate);
		}

		::System::Void OnNotifyShopUpdate(::Class_1_34A67A60E0FAC469* shopUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYSHOPUPDATE_OFFSET))(this, shopUpdate);
		}

		::System::Void OnNotifyChimeraBought(::System::UInt32 chimeraUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERABOUGHT_OFFSET))(this, chimeraUniqueID);
		}

		::System::Void OnNotifyItemBought(::System::UInt32 itemUniqueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYITEMBOUGHT_OFFSET))(this, itemUniqueId);
		}

		::System::Void OnNotifyChimeraSkill(::Class_1_8F38FF89E4BFAA77* skill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8F38FF89E4BFAA77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONNOTIFYCHIMERASKILL_OFFSET))(this, skill);
		}

		::System::Void SetChimeraLocked(::RPG::Client::ChimeraDuelGameSessionShopChimera* chimera, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopChimera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETCHIMERALOCKED_OFFSET))(this, chimera, locked);
		}

		::System::Void SetItemLocked(::RPG::Client::ChimeraDuelGameSessionShopItem* item, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_SETITEMLOCKED_OFFSET))(this, item, locked);
		}

		::System::Void OnLockScRsp(::Class_1_6D9CA5A41DD53E47* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6D9CA5A41DD53E47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONLOCKSCRSP_OFFSET))(this, rsp);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_REFRESH_OFFSET))(this);
		}

		::System::Void OnRefreshScRsp(::Class_1_D17272E82AE804C2_219* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_219*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONREFRESHSCRSP_OFFSET))(this, rsp);
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

		::System::Void OnBuyChimeraScRsp(::Class_1_D17272E82AE804C2_216* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_216*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYCHIMERASCRSP_OFFSET))(this, rsp);
		}

		::System::Boolean TryBuyItem(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYBUYITEM_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void _BuyItemAndApply(::System::Int32 shopSlotIndex, ::System::Int32 teamSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__BUYITEMANDAPPLY_OFFSET))(this, shopSlotIndex, teamSlotIndex);
		}

		::System::Void OnBuyItemScRsp(::Class_1_D17272E82AE804C2_218* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_218*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_ONBUYITEMSCRSP_OFFSET))(this, rsp);
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

		static ::RPG::Client::ChimeraDuelGameSessionShop* Create(::Class_0_16E4307DCC419505_695* dependencies, ::Class_1_FE6CD7C4A65B646F* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShop*(*)(::Class_0_16E4307DCC419505_695*, ::Class_1_FE6CD7C4A65B646F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_CREATE_OFFSET))(dependencies, serverData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_DISPOSE_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_FE6CD7C4A65B646F* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__SYNC_OFFSET))(this, serverData);
		}

		::System::Int32 GetRefreshCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_GETREFRESHCOST_OFFSET))(this);
		}

		::System::Void PrepareBuildingPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_PREPAREBUILDINGPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryAppendPerformanceStep(::Class_0_16E4307DCC419505_696* command)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_696*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP__TRYAPPENDPERFORMANCESTEP_OFFSET))(this, command);
		}

		::System::Void TryTriggerPendingPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP_TRYTRIGGERPENDINGPERFORMANCE_OFFSET))(this);
		}
	};
}
