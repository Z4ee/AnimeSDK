#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherCollectionData; }
namespace RPG::Client { class AetherDivideLevelRewardData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class AetherDivideTrainerLevelRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9077380)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETAETHERCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x907ADF0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETDISPLAYQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x907B040)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETDISPLAYTRAINERLEVELROWLIST_OFFSET UNITYSDK_OFFSET(0x907AE80)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETREWARDDATA_OFFSET UNITYSDK_OFFSET(0x90794F0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETSORTEDQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x907B0E0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETTRAINERLEVELROW_OFFSET UNITYSDK_OFFSET(0x907AFD0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GET_TRAINERLEVELROW_OFFSET UNITYSDK_OFFSET(0x9075BA0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_GET_TRAINERLEVEL_OFFSET UNITYSDK_OFFSET(0x907B230)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9079250)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_SET_TRAINERLEVEL_OFFSET UNITYSDK_OFFSET(0x907B240)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0x9078BA0)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90767B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideTrainerData_TypeDefinitionIndex = 50543;

	class AetherDivideTrainerData : public ::System::Object
	{
	public:
		::RPG::Client::AetherDivideLevelRewardData* _RewardData; // 0x10
		::System::UInt32 _TrainerLevel_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateByServer(::System::UInt32 trainerLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_UPDATEBYSERVER_OFFSET))(this, trainerLevel);
		}

		::System::Void Refresh(::System::UInt32 trainerLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_REFRESH_OFFSET))(this, trainerLevel);
		}

		::RPG::Client::AetherCollectionData* GetAetherCollectionData()
		{
			return ((::RPG::Client::AetherCollectionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETAETHERCOLLECTIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideTrainerLevelRow*>* GetDisplayTrainerLevelRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideTrainerLevelRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETDISPLAYTRAINERLEVELROWLIST_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideTrainerLevelRow* GetTrainerLevelRow(::System::UInt32 level)
		{
			return ((::RPG::GameCore::AetherDivideTrainerLevelRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETTRAINERLEVELROW_OFFSET))(this, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetDisplayQuestDataList(::System::UInt32 level)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETDISPLAYQUESTDATALIST_OFFSET))(this, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetSortedQuestDataList(::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* origin)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETSORTEDQUESTDATALIST_OFFSET))(this, origin);
		}

		::RPG::Client::AetherDivideLevelRewardData* GetRewardData()
		{
			return ((::RPG::Client::AetherDivideLevelRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GETREWARDDATA_OFFSET))(this);
		}

		::System::UInt32 get_TrainerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GET_TRAINERLEVEL_OFFSET))(this);
		}

		::System::Void set_TrainerLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_SET_TRAINERLEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::AetherDivideTrainerLevelRow* get_TrainerLevelRow()
		{
			return ((::RPG::GameCore::AetherDivideTrainerLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA_GET_TRAINERLEVELROW_OFFSET))(this);
		}
	};
}
