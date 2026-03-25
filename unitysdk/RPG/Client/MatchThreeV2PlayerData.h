#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_520;
class Class_1_FA4F4A67B1C04320_95;
class Class_1_FFE5B8A52EC38E9C_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MatchThreeV2PlayerBird; }
namespace RPG::Client { class MatchThreeV2PlayerProp; }
namespace RPG::Client { class MatchThreeV2PlayerPveCareer; }
namespace RPG::Client { class MatchThreeV2PlayerPvpCareer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET UNITYSDK_OFFSET(0x9B64F70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B5FCC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B607E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x9B5EFF0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x9B64870)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_BIRDS_OFFSET UNITYSDK_OFFSET(0x9B62020)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_COSTITEMDATA_OFFSET UNITYSDK_OFFSET(0x9B62810)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_MAXPROPSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B62660)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPSFORPVP_OFFSET UNITYSDK_OFFSET(0x9B62140)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPS_OFFSET UNITYSDK_OFFSET(0x9B620B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVECAREER_OFFSET UNITYSDK_OFFSET(0x9B62620)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0x9B62640)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9B62A90)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B645E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x9B64730)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET UNITYSDK_OFFSET(0x9B64690)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET UNITYSDK_OFFSET(0x9B64DF0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9B64B90)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B647C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B64950)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET UNITYSDK_OFFSET(0x9B65150)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET UNITYSDK_OFFSET(0x9B62630)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0x9B62650)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET UNITYSDK_OFFSET(0x9B5D5B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x9B638B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x9B62FD0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x9B5E8C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x9B5E620)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B629B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B641C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x9B62C30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVECAREER_OFFSET UNITYSDK_OFFSET(0x9B62AF0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVPCAREER_OFFSET UNITYSDK_OFFSET(0x9B62BB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x9B64210)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerData_TypeDefinitionIndex = 53629;

	class MatchThreeV2PlayerData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2PlayerPveCareer* _PveCareer_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2PlayerProp*>* _Props; // 0x18
		::RPG::Client::MatchThreeV2PlayerPvpCareer* _PvpCareer_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2PlayerBird*>* _Birds; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerBird*>* get_Birds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerBird*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_BIRDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>* get_Props()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>* get_PropsForPvp()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPSFORPVP_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2PlayerPveCareer* get_PveCareer()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPveCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVECAREER_OFFSET))(this);
		}

		::System::Void set_PveCareer(::RPG::Client::MatchThreeV2PlayerPveCareer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPveCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2PlayerPvpCareer* get_PvpCareer()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPvpCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET))(this);
		}

		::System::Void set_PvpCareer(::RPG::Client::MatchThreeV2PlayerPvpCareer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPvpCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPropSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_MAXPROPSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_CostItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_COSTITEMDATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2PlayerData* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAllData(::Class_1_FFE5B8A52EC38E9C_2* allData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET))(this, allData);
		}

		::System::Void _SetupPveCareer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVECAREER_OFFSET))(this);
		}

		::System::Void _OnPassedLevelsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__ONPASSEDLEVELSCHANGED_OFFSET))(this);
		}

		::System::Void _SetupPvpCareer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVPCAREER_OFFSET))(this);
		}

		::System::Boolean IsBirdUnlocked(::System::UInt32 birdID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET))(this, birdID);
		}

		::RPG::Client::MatchThreeV2PlayerBird* GetPlayerBird(::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeV2PlayerBird*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET))(this, birdID);
		}

		::System::Void _SetupInitialUnlockPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET))(this);
		}

		::System::Void _UpdateUnlockedPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET))(this);
		}

		::System::Void SyncAllPlayerBird(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_520*>* birdRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_520*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET))(this, birdRecordList);
		}

		::System::Void SyncSinglePlayerBird(::Class_1_FA4F4A67B1C04320_520* birdRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_520*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET))(this, birdRecord);
		}

		::System::Boolean IsLevelsAllFinished(::Il2CppArray<::System::UInt32>* levelIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET))(this, levelIDs);
		}

		::System::Boolean IsLevelFinished(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET))(this, levelID);
		}

		::System::Boolean IsPropUnlocked(::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET))(this, propID);
		}

		::RPG::Client::MatchThreeV2PlayerProp* GetPlayerProp(::System::UInt32 propID)
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET))(this, propID);
		}

		::System::Boolean IsPropUpgradeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsPropAtMaxLevel(::System::UInt32 propID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET))(this, propID, level);
		}

		::System::Boolean IsPropAtMaxLevel_1(::RPG::Client::IMatchThreePropData* propData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET))(this, propData);
		}

		::System::Boolean CanAffordToUpgradeProp(::RPG::Client::IMatchThreePropData* propData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET))(this, propData);
		}

		::System::Void SyncAllPlayerProp(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>* propLevelList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET))(this, propLevelList);
		}

		::System::Void SyncSinglePlayerProp(::System::UInt32 propID, ::System::UInt32 propLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET))(this, propID, propLevel);
		}

		::System::Void MarkAllPropSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET))(this);
		}
	};
}
