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

#define RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xD2D6540)
#define RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET UNITYSDK_OFFSET(0xD2D56B0)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xD2D2F70)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET UNITYSDK_OFFSET(0xD2D8240)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xD2D8070)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xD2D5250)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D6F60)
#define RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0xD2D58E0)
#define RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD2D8540)
#define RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD2D82E0)
#define RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET UNITYSDK_OFFSET(0xD2D7E10)
#define RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET UNITYSDK_OFFSET(0xD2D73F0)
#define RPG_CLIENT_GROWTHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2D8580)
#define RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELASE_OFFSET UNITYSDK_OFFSET(0xD2D6AC0)
#define RPG_CLIENT_GROWTHMODULE__GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xD2D3390)
#define RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0xD2D80D0)
#define RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET UNITYSDK_OFFSET(0xD2D5760)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMSBYAVATAR_OFFSET UNITYSDK_OFFSET(0xD2D3850)
#define RPG_CLIENT_GROWTHMODULE__GETLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D5DD0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALBYAVATAR_OFFSET UNITYSDK_OFFSET(0xD2D5590)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0xD2D52F0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALLEVELUPNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D6CD0)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D7200)
#define RPG_CLIENT_GROWTHMODULE__GETPROMOTIONNEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D3920)
#define RPG_CLIENT_GROWTHMODULE__GETSKILLTREENEEDITEMS_OFFSET UNITYSDK_OFFSET(0xD2D3C60)
#define RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET UNITYSDK_OFFSET(0xD2D5CD0)
#define RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET UNITYSDK_OFFSET(0xD2D62D0)
#define RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNITEM_OFFSET UNITYSDK_OFFSET(0xD2D4120)
#define RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET UNITYSDK_OFFSET(0xD2D75E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule_TypeDefinitionIndex = 65602;

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

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterial(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _GetAllGrowthTargetMaterialForPreRelease(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPotentialGrowthTargetMaterialForPreRelease(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPotentialGrowthTargetMaterialByAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALBYAVATAR_OFFSET))(this, a1);
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
