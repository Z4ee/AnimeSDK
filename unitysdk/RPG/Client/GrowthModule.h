#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class GrowthGuideData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xA5D73C0)
#define RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET UNITYSDK_OFFSET(0xA5D6780)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xA5D78B0)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA5D4250)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET UNITYSDK_OFFSET(0xA5D8C30)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xA5D89D0)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xA5D7E70)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA5D5D80)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D6410)
#define RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xA5D6970)
#define RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA5D8F00)
#define RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA5D8C90)
#define RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET UNITYSDK_OFFSET(0xA5D8870)
#define RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET UNITYSDK_OFFSET(0xA5D80B0)
#define RPG_CLIENT_GROWTHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D8F40)
#define RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELASE_OFFSET UNITYSDK_OFFSET(0xA5D7C70)
#define RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xA5D8A80)
#define RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET UNITYSDK_OFFSET(0xA5D6840)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMSBYAVATAR_OFFSET UNITYSDK_OFFSET(0xA5D45E0)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D6CB0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D5EA0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D6110)
#define RPG_CLIENT_GROWTHMODULE__GETPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D46B0)
#define RPG_CLIENT_GROWTHMODULE__GETSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xA5D49C0)
#define RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET UNITYSDK_OFFSET(0xA5D6C00)
#define RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET UNITYSDK_OFFSET(0xA5D7170)
#define RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNITEM_OFFSET UNITYSDK_OFFSET(0xA5D4F10)
#define RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET UNITYSDK_OFFSET(0xA5D82B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule_TypeDefinitionIndex = 60400;

	class GrowthModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _TRACK_OF_DESTINY_ID = 0xF1; // 0x0
		::Il2CppArray<::System::Func_2<::System::UInt32, ::System::Boolean>*>* _ItemPriority; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GrowthGuideData*>* _GrowthGuideByAvatarID; // 0x18
		::System::Boolean _AutoShowFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAllGrowthTargetMaterial(::System::UInt32 avatarID, ::System::Boolean includeLowPrioritySkillTree, ::System::Boolean ignoreExistingItem)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET))(this, avatarID, includeLowPrioritySkillTree, ignoreExistingItem);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterial(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET))(this, avatar);
		}

		::System::Boolean CheckComposableMaterialExist(::System::UInt32 lowLevelMaterial, ::System::UInt32 highLevelMaterial)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET))(this, lowLevelMaterial, highLevelMaterial);
		}

		::System::Boolean IsAvatarGrowableMinimumStep(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET))(this, avatar);
		}

		::System::Void CheckAvatarSkillGrowableMinimumStep(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Boolean includeLowPriority, ::System::Boolean& isAllDone, ::System::Boolean& isGrowable, ::System::Boolean& needFutureLevel, ::System::UInt32& pointID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET))(this, avatar, includeLowPriority, isAllDone, isGrowable, needFutureLevel, pointID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAllGrowthTargetMaterialForPreRelease(::System::UInt32 avatarID, ::System::Boolean includeLowPrioritySkillTree)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, avatarID, includeLowPrioritySkillTree);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterialForPrerelease(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, avatarID);
		}

		::System::Void GetPotentialSkillTreeNeedItems(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Boolean includeLowPriority, ::System::Collections::Generic::List_1<::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALSKILLTREENEEDITEMS_OFFSET))(this, avatar, includeLowPriority, needItems);
		}

		::System::Void _GetLevelUpNeedItemsByAvatar(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMSBYAVATAR_OFFSET))(this, avatar, needItems);
		}

		::System::Void _GetLevelUpNeedItems(::System::Int32 needExp, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems, ::System::Boolean ignoreCoin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMS_OFFSET))(this, needExp, needItems, ignoreCoin);
		}

		::System::Void _GatherMaterialItemsForPrerelase(::System::UInt32 avatarID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELASE_OFFSET))(this, avatarID, needItems);
		}

		::System::Void _GetPotentialLevelUpNeedItems(::System::Collections::Generic::List_1<::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALLEVELUPNEEDITEMS_OFFSET))(this, needItems);
		}

		::System::Void _GetPromotionNeedItems(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPROMOTIONNEEDITEMS_OFFSET))(this, avatar, needItems);
		}

		::System::Void _GetPotentialPromotionNeedItems(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Collections::Generic::List_1<::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALPROMOTIONNEEDITEMS_OFFSET))(this, avatar, needItems);
		}

		::System::Void _GetSkillTreeNeedItems(::RPG::Client::IAvatarInfoProvider* avatar, ::System::Boolean includeLowPriority, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETSKILLTREENEEDITEMS_OFFSET))(this, avatar, includeLowPriority, needItems);
		}

		::System::Boolean _IsNeededItemsAllGot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* needItems)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET))(this, needItems);
		}

		::System::Int32 _CompareGrowthTargetItem(::RPG::GameCore::ItemConfig* lhs, ::RPG::GameCore::ItemConfig* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET))(this, lhs, rhs);
		}

		::System::Void _RemoveAlreadyOwnItem(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNITEM_OFFSET))(this, needItems);
		}

		::System::Void _RemoveComposableItem(::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>* composeList, ::System::Int32 index, ::System::UInt32 extraNeedCount, ::RPG::GameCore::ItemConfig*& parentNeedConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& needItems, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& ownedItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>*, ::System::Int32, ::System::UInt32, ::RPG::GameCore::ItemConfig*&, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET))(this, composeList, index, extraNeedCount, parentNeedConfig, needItems, ownedItems);
		}

		::System::Void _AddNeedCoin(::System::UInt32 coinCount, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& needItems, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& ownedItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET))(this, coinCount, needItems, ownedItems);
		}

		::RPG::GameCore::ItemComposeConfigRow* _GetItemComposeRowByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET))(this, itemID);
		}

		::System::Void _InsertItem(::System::UInt32 ID, ::System::UInt32 num, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& needItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET))(this, ID, num, needItems);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET))(this, avatarID);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide_1(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET))(this, avatar);
		}

		::RPG::Client::GrowthGuideData* _GetGrowthGuide(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET))(this, avatar);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET))(this);
		}
	};
}
