#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Map_MapObjectsUpdateRequestState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_278;
class Class_0_16E4307DCC419505_357;
class Class_2_510E2A3B742BC0DC;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_OnMapObjectsUpdateRequestFinish; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET UNITYSDK_OFFSET(0xBEB3AC0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xBEAFE50)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xBEB0390)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xBEB00D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xBEB04E0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEBB760)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEB8E00)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEBB880)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEBB7F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEAFCE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xBEBB910)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0xBEBBB10)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET UNITYSDK_OFFSET(0xBEB05B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET UNITYSDK_OFFSET(0xBEBB5F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0xBEBA770)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEBB1A0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEBAF90)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB0970)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0xBEBBB60)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0xBEBBD50)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEBA0C0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEBA310)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBEBBF10)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xBEB9750)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET UNITYSDK_OFFSET(0xBEB9BB0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xBEBA700)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET UNITYSDK_OFFSET(0xBEBAA30)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0xBEB99C0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEB9660)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEB8E70)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xBEB9E40)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET UNITYSDK_OFFSET(0xBEB9CC0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET UNITYSDK_OFFSET(0xBEBAF20)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest_TypeDefinitionIndex = 56888;

	class Map_MapObjectsUpdateRequest : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_357*>* _DeferDeletingMapObjects; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* _MapObjectsCreated; // 0x18
		::RPG::Client::Map* _Map; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefToBeDestroy; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeCreated; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupOperationCount; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefsToBeCreated; // 0x40
		::RPG::Client::Map_RefreshEntitiesExtraInfo* ExtraInfo; // 0x48
		::RPG::Client::Map_OnMapObjectsUpdateRequestFinish* OnUpdateRequestFinish; // 0x50
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeDestroy; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupLoadVersionStamp; // 0x60
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* _MapObjectsCreating; // 0x68
		::RPG::Client::Map_MapObjectsUpdateRequestState _State; // 0x70

		::System::Void _ctor(::RPG::Client::Map* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET))(this, a1);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET))(this);
		}

		::System::Void _Process_DestroyObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET))(this);
		}

		::System::Void _OnGroupChangeScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET))(this);
		}

		::System::Void _TryRecoverFromNpcRecycleBin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET))(this);
		}

		::System::Void _OnMapObjectsCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET))(this);
		}

		::System::Boolean _CheckAllObjectAlive(::Class_2_510E2A3B742BC0DC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET))(this, a1);
		}

		::System::Void _HoyoGroupEntitiesAllCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _HoyoGroupEntitiesCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _StartMapObjectsLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* _WaitForEntityLoaded(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_357* _ConvertToMapObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _ConvertToMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _AddMapObjectsToMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET))(this);
		}

		::System::Void _Process_CreateObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET))(this);
		}

		::System::Void _OnRequestFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET))(this);
		}

		::System::Boolean HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET))(this);
		}

		::System::Void CreateObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::System::Void DestroyObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::System::Void _DoAddMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* a1, ::Class_2_510E2A3B742BC0DC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _DoRemoveMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* a1, ::Class_2_510E2A3B742BC0DC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _IncreaseGroupOperationCount(::Class_2_510E2A3B742BC0DC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void CreateObjectsByMapGroupDef(::Class_2_510E2A3B742BC0DC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyObjectsByMapGroupDef(::Class_2_510E2A3B742BC0DC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET))(this, a1);
		}
	};
}
