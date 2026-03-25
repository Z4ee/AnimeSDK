#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_940;
class Class_1_6992FBCA02C33988;
class Class_1_87AA5DF0D42C0A0C;
class Class_1_BE0E97EFC15B9DBB;
class Class_2_0E13001AB9D5FF59;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MapFloorInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9E130D0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x9E13440)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x9E13420)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9E133A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9E13050)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x9E13400)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9E13340)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0x9E13450)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0x9E13430)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0x9E13410)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0x9E14800)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET UNITYSDK_OFFSET(0x9E14C60)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E14CF0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x9E14D90)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9E15240)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E15850)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9E14320)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E13460)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET UNITYSDK_OFFSET(0x9E138C0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E15E30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9E157A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9E15DC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET UNITYSDK_OFFSET(0x9E15B70)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET UNITYSDK_OFFSET(0x9E14130)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x9E13830)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9E13670)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET UNITYSDK_OFFSET(0x9E13B80)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET UNITYSDK_OFFSET(0x9E13920)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET UNITYSDK_OFFSET(0x9E136C0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET UNITYSDK_OFFSET(0x9E13FA0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9E14780)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET UNITYSDK_OFFSET(0x9E14EA0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x9E148F0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9E15520)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0x9E14480)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET UNITYSDK_OFFSET(0x9E13AE0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E15E90)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapConnectivityModule_TypeDefinitionIndex = 61290;

	class MapConnectivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_6992FBCA02C33988* _WaypointRefresher_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ObjectPool; // 0x18
		::UnityEngine::GameObject* _RootGameObject; // 0x20
		::Class_0_16E4307DCC419505_940* _CurNavArea_k__BackingField; // 0x28
		::Class_1_BE0E97EFC15B9DBB* _CurWeightedGraph_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetGameObject(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET))(this, name);
		}

		::System::Void ReturnGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET))(this, gameObject);
		}

		static ::RPG::Client::NavMap::MapConnectivityModule* get_Instance()
		{
			return ((::RPG::Client::NavMap::MapConnectivityModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET))();
		}

		::Class_1_6992FBCA02C33988* get_WaypointRefresher()
		{
			return ((::Class_1_6992FBCA02C33988*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET))(this);
		}

		::System::Void set_WaypointRefresher(::Class_1_6992FBCA02C33988* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6992FBCA02C33988*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET))(this, value);
		}

		::Class_1_BE0E97EFC15B9DBB* get_CurWeightedGraph()
		{
			return ((::Class_1_BE0E97EFC15B9DBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET))(this);
		}

		::System::Void set_CurWeightedGraph(::Class_1_BE0E97EFC15B9DBB* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_940* get_CurNavArea()
		{
			return ((::Class_0_16E4307DCC419505_940*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET))(this);
		}

		::System::Void set_CurNavArea(::Class_0_16E4307DCC419505_940* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_940*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET))(this, value);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnMazeMapInfoUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnFiveDimLeaveFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET))(this, arg);
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

		::System::Boolean _IsNeedCreateNavGraph(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET))(this, mapDef);
		}

		::System::Void TryUpdateCurNavNode(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET))(this, worldPosition);
		}

		::System::Void _TryUpdateCurNavNode(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET))(this, worldPosition);
		}

		::System::Void _TryForceUpdateCurNavNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET))(this);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeByCartographer(::RPG::Client::NavMap::ICartographer* cartographer, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET))(this, cartographer, position);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeForFiveDim(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET))(this, cartographer, groupID, instanceID, entityID);
		}

		::System::Single TryGetNearestMappingInfoNodeToTargetDistance(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET))(this, cartographer, groupID, instanceID, entityID);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNode(::RPG::Client::NavMap::MapFloorInfo* mapFloorInfo, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* nodes, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::MapFloorInfo*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, mapFloorInfo, nodes, position);
		}

		::Class_1_87AA5DF0D42C0A0C* _TryGetNearestMappingInfoNode(::RPG::Client::NavMap::ICartographer* cartographer, ::RPG::Client::NavMap::ITrackPointInfo* trackPointInfo)
		{
			return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, cartographer, trackPointInfo);
		}

		::Class_1_87AA5DF0D42C0A0C* _TryGetNearestMappingInfoNode_1(::RPG::Client::NavMap::MapFloorInfo* mapFloorInfo, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* nodes, ::RPG::Client::NavMap::ITrackPointInfo* trackPointInfo)
		{
			return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::RPG::Client::NavMap::MapFloorInfo*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET))(this, mapFloorInfo, nodes, trackPointInfo);
		}

		::System::Boolean TryGetNextWaypoint(::System::UInt32& targetGroupID, ::System::UInt32& targetInstanceID, ::System::UInt32& targetLittleGameEntityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET))(this, targetGroupID, targetInstanceID, targetLittleGameEntityID);
		}

		::RPG::Client::NavMap::ITrackPointInfo* _TryGetNextWaypoint(::System::UInt32 targetGroupID, ::System::UInt32 targetInstanceID, ::System::UInt32 targetLittleGameEntityID)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET))(this, targetGroupID, targetInstanceID, targetLittleGameEntityID);
		}

		::System::Single TryGetPlayerToTargetDistance(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET))(this, cartographer, groupID, instanceID, littleGameEntityID);
		}

		::System::Boolean _IsInSameScene(::RPG::Client::NavMap::ICartographer* cartographer)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET))(this, cartographer);
		}

		::System::Boolean _HandleException(::System::Exception* ex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET))(this, ex);
		}

		::System::Boolean _HandleNavShortestPathException(::Class_2_0E13001AB9D5FF59* pathException)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0E13001AB9D5FF59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET))(this, pathException);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
