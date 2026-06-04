#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GrowthGuideData; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xBCD9250)
#define RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET UNITYSDK_OFFSET(0xBCD84E0)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xBCD96F0)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xBCD5F80)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET UNITYSDK_OFFSET(0xBCDAEF0)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xBCDAD20)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xBCD9DE0)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xBCD7CB0)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD8250)
#define RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xBCD8710)
#define RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBCDB1F0)
#define RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBCDAF90)
#define RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET UNITYSDK_OFFSET(0xBCDAAC0)
#define RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET UNITYSDK_OFFSET(0xBCDA050)
#define RPG_CLIENT_GROWTHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCDB230)
#define RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELASE_OFFSET UNITYSDK_OFFSET(0xBCD9BF0)
#define RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xBCDAD80)
#define RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET UNITYSDK_OFFSET(0xBCD8590)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMSBYAVATAR_OFFSET UNITYSDK_OFFSET(0xBCD6330)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD8AE0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD7DD0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD8060)
#define RPG_CLIENT_GROWTHMODULE__GETPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD6400)
#define RPG_CLIENT_GROWTHMODULE__GETSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xBCD66E0)
#define RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET UNITYSDK_OFFSET(0xBCD89E0)
#define RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET UNITYSDK_OFFSET(0xBCD8FE0)
#define RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNITEM_OFFSET UNITYSDK_OFFSET(0xBCD6BA0)
#define RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET UNITYSDK_OFFSET(0xBCDA250)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule_TypeDefinitionIndex = 61335;

	class GrowthModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _TRACK_OF_DESTINY_ID = 0xF1; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GrowthGuideData*>* _GrowthGuideByAvatarID; // 0x10
		::Il2CppArray<::System::Func_2<::System::UInt32, ::System::Boolean>*>* _ItemPriority; // 0x18
		::System::Boolean _AutoShowFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAllGrowthTargetMaterial(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterial(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean CheckComposableMaterialExist(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarGrowableMinimumStep(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET))(this, a1);
		}

		::System::Void CheckAvatarSkillGrowableMinimumStep(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Boolean& a3, ::System::Boolean& a4, ::System::Boolean& a5, ::System::UInt32& a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAllGrowthTargetMaterialForPreRelease(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterialForPrerelease(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1);
		}

		::System::Void GetPotentialSkillTreeNeedItems(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALSKILLTREENEEDITEMS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GetLevelUpNeedItemsByAvatar(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMSBYAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void _GetLevelUpNeedItems(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GatherMaterialItemsForPrerelase(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELASE_OFFSET))(this, a1, a2);
		}

		::System::Void _GetPotentialLevelUpNeedItems(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALLEVELUPNEEDITEMS_OFFSET))(this, a1);
		}

		::System::Void _GetPromotionNeedItems(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPROMOTIONNEEDITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void _GetPotentialPromotionNeedItems(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALPROMOTIONNEEDITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void _GetSkillTreeNeedItems(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETSKILLTREENEEDITEMS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsNeededItemsAllGot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET))(this, a1);
		}

		::System::Int32 _CompareGrowthTargetItem(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveAlreadyOwnItem(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveComposableItem(::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>* a1, ::System::Int32 a2, ::System::UInt32 a3, ::RPG::GameCore::ItemConfig*& a4, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>*, ::System::Int32, ::System::UInt32, ::RPG::GameCore::ItemConfig*&, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _AddNeedCoin(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*& a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ItemComposeConfigRow* _GetItemComposeRowByItemID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET))(this, a1);
		}

		::System::Void _InsertItem(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide(::System::UInt32 a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthGuideData* _GetGrowthGuide(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET))(this, a1);
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
