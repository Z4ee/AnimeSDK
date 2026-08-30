#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1211;
class Class_1_0F98E9AF592164E3;
class Class_1_34C75A5049644ECD;
class Class_1_4BC03BAAC61C4531;
class Class_2_0E13001AB9D5FF59;
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1824C6E0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x1824CAB0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x1824CA90)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1824C9F0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1824C660)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x1824CA70)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1824C990)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x1824CAC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x1824CAA0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x1824CA80)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0x1824E1D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET UNITYSDK_OFFSET(0x1824E540)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1824E5D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x1824E670)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1824EBD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1824F330)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x1824DB70)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1824CAD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET UNITYSDK_OFFSET(0x1824D050)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1824FC30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1824F270)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1824FBC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET UNITYSDK_OFFSET(0x1824F650)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET UNITYSDK_OFFSET(0x1824DA30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x1824CFC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1824CD30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET UNITYSDK_OFFSET(0x1824D2F0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET UNITYSDK_OFFSET(0x1824D0B0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET UNITYSDK_OFFSET(0x1824CD80)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET UNITYSDK_OFFSET(0x1824D750)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x1824E150)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET UNITYSDK_OFFSET(0x1824E780)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x1824E2C0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1824EFE0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x1824DCD0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET UNITYSDK_OFFSET(0x1824D250)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapConnectivityModule_TypeDefinitionIndex = 74432;

	class MapConnectivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::UnityEngine::GameObject* _RootGameObject; // 0x10
		::Class_1_34C75A5049644ECD* _WaypointRefresher_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ObjectPool; // 0x20
		::Class_0_16E4307DCC419505_1211* _CurNavArea_k__BackingField; // 0x28
		::Class_1_4BC03BAAC61C4531* _CurWeightedGraph_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetGameObject(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void ReturnGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET))(this, a1);
		}

		static ::RPG::Client::NavMap::MapConnectivityModule* get_Instance()
		{
			return ((::RPG::Client::NavMap::MapConnectivityModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET))();
		}

		::Class_1_34C75A5049644ECD* get_WaypointRefresher()
		{
			return ((::Class_1_34C75A5049644ECD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET))(this);
		}

		::System::Void set_WaypointRefresher(::Class_1_34C75A5049644ECD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34C75A5049644ECD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET))(this, a1);
		}

		::Class_1_4BC03BAAC61C4531* get_CurWeightedGraph()
		{
			return ((::Class_1_4BC03BAAC61C4531*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET))(this);
		}

		::System::Void set_CurWeightedGraph(::Class_1_4BC03BAAC61C4531* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1211* get_CurNavArea()
		{
			return ((::Class_0_16E4307DCC419505_1211*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET))(this);
		}

		::System::Void set_CurNavArea(::Class_0_16E4307DCC419505_1211* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1211*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnMazeMapInfoUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnFiveDimLeaveFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET))(this, a1);
		}

		::System::Void _RequestCurMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET))(this);
		}

		::System::Void _ClearCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET))(this);
		}

		::System::Void _UpdateCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET))(this);
		}

		::System::Void _SetupCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET))(this);
		}

		::System::Boolean _IsNeedCreateNavGraph(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET))(this, a1);
		}

		::System::Void TryUpdateCurNavNode(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateCurNavNode(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET))(this, a1);
		}

		::System::Void _TryForceUpdateCurNavNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET))(this);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeByCartographer(::RPG::Client::NavMap::ICartographer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeForFiveDim(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single TryGetNearestMappingInfoNodeToTargetDistance(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNode(::RPG::Client::MapDataKey* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_0F98E9AF592164E3* _TryGetNearestMappingInfoNode(::RPG::Client::NavMap::ICartographer* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
		{
			return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, a1, a2);
		}

		::Class_1_0F98E9AF592164E3* _TryGetNearestMappingInfoNode_1(::RPG::Client::MapDataKey* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
		{
			return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetNextWaypoint(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::NavMap::ITrackPointInfo* _TryGetNextWaypoint(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single TryGetPlayerToTargetDistance(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _IsInSameScene(::RPG::Client::NavMap::ICartographer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET))(this, a1);
		}

		::System::Boolean _HandleException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Boolean _HandleNavShortestPathException(::Class_2_0E13001AB9D5FF59* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0E13001AB9D5FF59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET))(this, a1);
		}
	};
}
