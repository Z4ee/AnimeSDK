#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GETDISPLAYITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xA5EFA00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA5EFF80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISRARE_OFFSET UNITYSDK_OFFSET(0xA5F0030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA5EFDB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVELTITLE_OFFSET UNITYSDK_OFFSET(0xA5F0000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA5EFF60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xA5EFF20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA5EFB50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EF9F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__ITEMSORT_OFFSET UNITYSDK_OFFSET(0xA5EFE50)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildLevelRewardInfo_TypeDefinitionIndex = 61092;

	class TrainPartyBuildLevelRewardInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyRewardConfigRow* _RewardRow; // 0x10
		::RPG::Client::TrainParty::TrainPartyBuildManager* _Owner; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayItemDataList; // 0x20

		::System::Void _ctor(::RPG::GameCore::TrainPartyRewardConfigRow* row, ::RPG::Client::TrainParty::TrainPartyBuildManager* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyRewardConfigRow*, ::RPG::Client::TrainParty::TrainPartyBuildManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__CTOR_OFFSET))(this, row, owner);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetDisplayItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GETDISPLAYITEMDATALIST_OFFSET))(this);
		}

		::System::Void TryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Int32 _ItemSort(::RPG::Client::ItemDisplayData* a, ::RPG::Client::ItemDisplayData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__ITEMSORT_OFFSET))(this, a, b);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildLevelRewardInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean get_CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVELTITLE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsRare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISRARE_OFFSET))(this);
		}
	};
}
