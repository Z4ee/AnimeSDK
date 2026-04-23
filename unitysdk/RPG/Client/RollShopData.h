#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RollShopRewardGroup; }
namespace RPG::GameCore { class RollShopConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROLLSHOPDATA_GETREMAINT1REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB12F8F0)
#define RPG_CLIENT_ROLLSHOPDATA_GETREWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB12F660)
#define RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEMID_OFFSET UNITYSDK_OFFSET(0xB12F230)
#define RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEMNUM_OFFSET UNITYSDK_OFFSET(0xB12F260)
#define RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEM_OFFSET UNITYSDK_OFFSET(0xB12F250)
#define RPG_CLIENT_ROLLSHOPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB12F1E0)
#define RPG_CLIENT_ROLLSHOPDATA_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0xB12F280)
#define RPG_CLIENT_ROLLSHOPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB12F200)
#define RPG_CLIENT_ROLLSHOPDATA_GET_SHOULDEXITAFTERROLLING_OFFSET UNITYSDK_OFFSET(0xB12F2E0)
#define RPG_CLIENT_ROLLSHOPDATA_GET_T1REWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB12F2A0)
#define RPG_CLIENT_ROLLSHOPDATA_GET_T2REWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB12F2B0)
#define RPG_CLIENT_ROLLSHOPDATA_GET_T3REWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB12F2C0)
#define RPG_CLIENT_ROLLSHOPDATA_GET_T4REWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB12F2D0)
#define RPG_CLIENT_ROLLSHOPDATA_IST1REWARDSALLTAKEN_OFFSET UNITYSDK_OFFSET(0xB12F840)
#define RPG_CLIENT_ROLLSHOPDATA_IST1REWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB12F7B0)
#define RPG_CLIENT_ROLLSHOPDATA_SETTAKENT1REWARDS_OFFSET UNITYSDK_OFFSET(0xB12F6F0)
#define RPG_CLIENT_ROLLSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB12F300)
#define RPG_CLIENT_ROLLSHOPDATA__GETREMAINT1REWARDCOUNT_B__34_0_OFFSET UNITYSDK_OFFSET(0xB12F9C0)
#define RPG_CLIENT_ROLLSHOPDATA__IST1REWARDSALLTAKEN_B__33_0_OFFSET UNITYSDK_OFFSET(0xB12F9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopData_TypeDefinitionIndex = 62580;

	class RollShopData : public ::System::Object
	{
	public:
		::RPG::Client::RollShopRewardGroup* _T1RewardGroup_k__BackingField; // 0x10
		::RPG::GameCore::RollShopConfigRow* _Row; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenT1RewardIDs; // 0x20
		::RPG::Client::RollShopRewardGroup* _T2RewardGroup_k__BackingField; // 0x28
		::RPG::Client::RollShopRewardGroup* _T3RewardGroup_k__BackingField; // 0x30
		::RPG::Client::ItemData* _CostItem_k__BackingField; // 0x38
		::RPG::Client::RollShopRewardGroup* _T4RewardGroup_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::RollShopConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RollShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CostItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEMID_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_CostItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEM_OFFSET))(this);
		}

		::System::UInt32 get_CostItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_COSTITEMNUM_OFFSET))(this);
		}

		::System::Int32 get_IntroduceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_INTRODUCEID_OFFSET))(this);
		}

		::RPG::Client::RollShopRewardGroup* get_T1RewardGroup()
		{
			return ((::RPG::Client::RollShopRewardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_T1REWARDGROUP_OFFSET))(this);
		}

		::RPG::Client::RollShopRewardGroup* get_T2RewardGroup()
		{
			return ((::RPG::Client::RollShopRewardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_T2REWARDGROUP_OFFSET))(this);
		}

		::RPG::Client::RollShopRewardGroup* get_T3RewardGroup()
		{
			return ((::RPG::Client::RollShopRewardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_T3REWARDGROUP_OFFSET))(this);
		}

		::RPG::Client::RollShopRewardGroup* get_T4RewardGroup()
		{
			return ((::RPG::Client::RollShopRewardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_T4REWARDGROUP_OFFSET))(this);
		}

		::System::Boolean get_ShouldExitAfterRolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GET_SHOULDEXITAFTERROLLING_OFFSET))(this);
		}

		::RPG::Client::RollShopRewardGroup* GetRewardGroup(::System::Int32 tier)
		{
			return ((::RPG::Client::RollShopRewardGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GETREWARDGROUP_OFFSET))(this, tier);
		}

		::System::Void SetTakenT1Rewards(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* rewardIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_SETTAKENT1REWARDS_OFFSET))(this, rewardIDs);
		}

		::System::Boolean IsT1RewardTaken(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_IST1REWARDTAKEN_OFFSET))(this, index);
		}

		::System::Boolean IsT1RewardsAllTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_IST1REWARDSALLTAKEN_OFFSET))(this);
		}

		::System::Int32 GetRemainT1RewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA_GETREMAINT1REWARDCOUNT_OFFSET))(this);
		}

		::System::Boolean _IsT1RewardsAllTaken_b__33_0(::System::UInt32 rewardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA__IST1REWARDSALLTAKEN_B__33_0_OFFSET))(this, rewardID);
		}

		::System::Boolean _GetRemainT1RewardCount_b__34_0(::System::UInt32 rewardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPDATA__GETREMAINT1REWARDCOUNT_B__34_0_OFFSET))(this, rewardID);
		}
	};
}
