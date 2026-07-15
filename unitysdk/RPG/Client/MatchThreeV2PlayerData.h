#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_113;
class Class_1_D17272E82AE804C2_641;
class Class_1_FFE5B8A52EC38E9C_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MatchThreeV2PlayerBird; }
namespace RPG::Client { class MatchThreeV2PlayerProp; }
namespace RPG::Client { class MatchThreeV2PlayerPveCareer; }
namespace RPG::Client { class MatchThreeV2PlayerPvpCareer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET UNITYSDK_OFFSET(0x1AB8CCF0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AB88A80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB894E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x1AB88320)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x1AB8C7F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_BIRDS_OFFSET UNITYSDK_OFFSET(0x1AB8AA10)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_COSTITEMDATA_OFFSET UNITYSDK_OFFSET(0x1AB8B110)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_MAXPROPSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB8AF70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPSFORPVP_OFFSET UNITYSDK_OFFSET(0x1AB8AC70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPS_OFFSET UNITYSDK_OFFSET(0x1AB8AB40)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVECAREER_OFFSET UNITYSDK_OFFSET(0x1AB8AF30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0x1AB8AF50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1AB8B3C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AB8C510)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x1AB8C6D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1AB8C5A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1AB8CAC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB8C990)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AB8C760)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AB8C8A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET UNITYSDK_OFFSET(0x1AB8CE70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET UNITYSDK_OFFSET(0x1AB8AF40)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0x1AB8AF60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET UNITYSDK_OFFSET(0x1AB86910)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x1AB8BDB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x1AB8B880)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x1AB87D70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET UNITYSDK_OFFSET(0x1AB87B00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8B2E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB8C1D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x1AB8B5D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVECAREER_OFFSET UNITYSDK_OFFSET(0x1AB8B470)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVPCAREER_OFFSET UNITYSDK_OFFSET(0x1AB8B550)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0x1AB8C220)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerData_TypeDefinitionIndex = 63069;

	class MatchThreeV2PlayerData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2PlayerPvpCareer* _PvpCareer_k__BackingField; // 0x10
		::RPG::Client::MatchThreeV2PlayerPveCareer* _PveCareer_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2PlayerProp*>* _Props; // 0x20
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

		::System::Void set_PveCareer(::RPG::Client::MatchThreeV2PlayerPveCareer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPveCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerPvpCareer* get_PvpCareer()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPvpCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET))(this);
		}

		::System::Void set_PvpCareer(::RPG::Client::MatchThreeV2PlayerPvpCareer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPvpCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET))(this, a1);
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

		::System::Void SyncAllData(::Class_1_FFE5B8A52EC38E9C_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET))(this, a1);
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

		::System::Boolean IsBirdUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerBird* GetPlayerBird(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PlayerBird*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Void _SetupInitialUnlockPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET))(this);
		}

		::System::Void _UpdateUnlockedPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET))(this);
		}

		::System::Void SyncAllPlayerBird(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_641*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_641*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Void SyncSinglePlayerBird(::Class_1_D17272E82AE804C2_641* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_641*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelsAllFinished(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsPropUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerProp* GetPlayerProp(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET))(this, a1);
		}

		::System::Boolean IsPropUpgradeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsPropAtMaxLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPropAtMaxLevel_1(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET))(this, a1);
		}

		::System::Boolean CanAffordToUpgradeProp(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET))(this, a1);
		}

		::System::Void SyncAllPlayerProp(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET))(this, a1);
		}

		::System::Void SyncSinglePlayerProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET))(this, a1, a2);
		}

		::System::Void MarkAllPropSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET))(this);
		}
	};
}
