#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleMapState.h"
#include "unitysdk/System/Object.h"

class Class_1_65EC9CACFF41765E;
class Class_1_97E659ED8D5D259C_12;
class Class_1_9EE357109ED696DE;
class Class_1_B53F5451D96E4B06;
class Class_1_C350877AE912EE6F;
class Class_2_2677292940697014;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleRouteMonstersViewModel; }
namespace RPG::Client { class ExpeditionBattleRouteRecordViewModel; }
namespace RPG::Client { class ExpeditionBattleStarInfoDetailViewModel; }
namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_ADDROUTELINEUP_OFFSET UNITYSDK_OFFSET(0xCE549D0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCE54130)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETALLAVATARLIST_OFFSET UNITYSDK_OFFSET(0xCE54250)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCE54CC0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETROUTES_OFFSET UNITYSDK_OFFSET(0xCE54980)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSAVEDTEAMLIST_OFFSET UNITYSDK_OFFSET(0xCE54920)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSTARS_OFFSET UNITYSDK_OFFSET(0xCE54C70)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSTATE_OFFSET UNITYSDK_OFFSET(0xCE54BD0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0xCE548D0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETTRIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0xCE541F0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xCE53620)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_MAP_OFFSET UNITYSDK_OFFSET(0xCE53640)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_ROUTEMONSTERVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53680)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_ROUTERECORDVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53660)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_STARINFODETAILVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE536A0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SENDSETLINEUPCSREQ_OFFSET UNITYSDK_OFFSET(0xCE54AF0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xCE53630)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_MAP_OFFSET UNITYSDK_OFFSET(0xCE53650)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_ROUTEMONSTERVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53690)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_ROUTERECORDVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53670)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_STARINFODETAILVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE536B0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCE536C0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITCURRENTRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCE53C40)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTEMONSTERS_OFFSET UNITYSDK_OFFSET(0xCE53F10)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTEMONSTERVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE537D0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTERECORDVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53A00)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITSTARINFODETAILVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCE53CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeamEditViewModel_TypeDefinitionIndex = 63957;

	class ExpeditionBattleTeamEditViewModel : public ::System::Object
	{
	public:
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x10
		::System::Collections::Generic::List_1<::Class_1_B53F5451D96E4B06*>* _PendingLineups; // 0x18
		::Class_1_65EC9CACFF41765E* _MapService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*>* _StarInfoDetailViewModelList_k__BackingField; // 0x28
		::RPG::Client::ExpeditionBattleRankViewModel* _RankViewModel; // 0x30
		::Class_1_C350877AE912EE6F* _MonsterService; // 0x38
		::Class_2_2677292940697014* _NetworkService; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteMonstersViewModel*>* _RouteMonsterViewModelList_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* _RouteRecordViewModelList_k__BackingField; // 0x50
		::RPG::Client::ExpeditionBattleMap* _Map_k__BackingField; // 0x58
		::System::UInt32 _MapID_k__BackingField; // 0x60

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_65EC9CACFF41765E* a2, ::Class_2_2677292940697014* a3, ::Class_1_C350877AE912EE6F* a4, ::Class_1_9EE357109ED696DE* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_65EC9CACFF41765E*, ::Class_2_2677292940697014*, ::Class_1_C350877AE912EE6F*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_MAPID_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleMap* get_Map()
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_MAP_OFFSET))(this);
		}

		::System::Void set_Map(::RPG::Client::ExpeditionBattleMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_MAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* get_RouteRecordViewModelList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_ROUTERECORDVIEWMODELLIST_OFFSET))(this);
		}

		::System::Void set_RouteRecordViewModelList(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_ROUTERECORDVIEWMODELLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteMonstersViewModel*>* get_RouteMonsterViewModelList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteMonstersViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_ROUTEMONSTERVIEWMODELLIST_OFFSET))(this);
		}

		::System::Void set_RouteMonsterViewModelList(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteMonstersViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteMonstersViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_ROUTEMONSTERVIEWMODELLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*>* get_StarInfoDetailViewModelList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GET_STARINFODETAILVIEWMODELLIST_OFFSET))(this);
		}

		::System::Void set_StarInfoDetailViewModelList(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SET_STARINFODETAILVIEWMODELLIST_OFFSET))(this, a1);
		}

		::System::Void _InitRouteMonsterViewModelList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTEMONSTERVIEWMODELLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* _InitRouteMonsters(::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_12*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_12*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTEMONSTERS_OFFSET))(this, a1);
		}

		::System::Void _InitRouteRecordViewModelList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITROUTERECORDVIEWMODELLIST_OFFSET))(this);
		}

		::System::Void _InitCurrentRankViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITCURRENTRANKVIEWMODEL_OFFSET))(this);
		}

		::System::Void _InitStarInfoDetailViewModelList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL__INITSTARINFODETAILVIEWMODELLIST_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleTeamEditViewModel* Create(::System::UInt32 a1, ::Class_1_65EC9CACFF41765E* a2, ::Class_2_2677292940697014* a3, ::Class_1_C350877AE912EE6F* a4, ::Class_1_9EE357109ED696DE* a5)
		{
			return ((::RPG::Client::ExpeditionBattleTeamEditViewModel*(*)(::System::UInt32, ::Class_1_65EC9CACFF41765E*, ::Class_2_2677292940697014*, ::Class_1_C350877AE912EE6F*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetTrialAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETTRIALAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETALLAVATARLIST_OFFSET))(this);
		}

		::System::UInt32 GetTeamCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETTEAMCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*>* GetSavedTeamList()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSAVEDTEAMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>* GetRoutes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETROUTES_OFFSET))(this);
		}

		::System::Void AddRouteLineup(::System::UInt32 a1, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_ADDROUTELINEUP_OFFSET))(this, a1, a2);
		}

		::System::Void SendSetLineupCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_SENDSETLINEUPCSREQ_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleMapState GetState()
		{
			return ((::RPG::Client::ExpeditionBattleMapState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSTATE_OFFSET))(this);
		}

		::System::UInt32 GetStars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETSTARS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* GetRankViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMEDITVIEWMODEL_GETRANKVIEWMODEL_OFFSET))(this);
		}
	};
}
