#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GETDISPLAYITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xCA98F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xCA994B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISRARE_OFFSET UNITYSDK_OFFSET(0xCA99560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xCA992E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVELTITLE_OFFSET UNITYSDK_OFFSET(0xCA99530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCA99490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xCA99450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xCA99080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCA98F00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__ITEMSORT_OFFSET UNITYSDK_OFFSET(0xCA99380)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildLevelRewardInfo_TypeDefinitionIndex = 69392;

	class TrainPartyBuildLevelRewardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayItemDataList; // 0x10
		::RPG::GameCore::TrainPartyRewardConfigRow* _RewardRow; // 0x18
		::RPG::Client::TrainParty::TrainPartyBuildManager* _Owner; // 0x20

		::System::Void _ctor(::RPG::GameCore::TrainPartyRewardConfigRow* a1, ::RPG::Client::TrainParty::TrainPartyBuildManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyRewardConfigRow*, ::RPG::Client::TrainParty::TrainPartyBuildManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetDisplayItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_GETDISPLAYITEMDATALIST_OFFSET))(this);
		}

		::System::Void TryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Int32 _ItemSort(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__ITEMSORT_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildLevelRewardInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDLEVELREWARDINFO__COMPARETO_OFFSET))(this, a1);
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
