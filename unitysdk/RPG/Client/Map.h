#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_357;
class Class_1_303D5A33D1401D59;
class Class_1_5878A2422EE7CDFB;
class Class_1_67ED1B7BCF908CF6;
class Class_1_742452531DFCB28E;
class Class_1_777F514A924455D9;
class Class_1_9585466CD003AA4F;
class Class_1_B48FFE703050178A;
class Class_1_C58549E83E2A95B6;
class Class_1_DA840AB4B3A0176B;
class Class_2_2CF600F518D344A2;
class Class_2_510E2A3B742BC0DC;
class Conflict;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xBEAB440)
#define RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xBEAB240)
#define RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xBEAB340)
#define RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xBEAE350)
#define RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xBEB3E70)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0xBEB6DB0)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0xBEB6D40)
#define RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET UNITYSDK_OFFSET(0xBEABE10)
#define RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEAFDA0)
#define RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET UNITYSDK_OFFSET(0xBEB8840)
#define RPG_CLIENT_MAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB7CC0)
#define RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEAFD50)
#define RPG_CLIENT_MAP_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0xBEB8380)
#define RPG_CLIENT_MAP_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xBEB8010)
#define RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xBEB5D60)
#define RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xBEB5B40)
#define RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xBEAF1A0)
#define RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0xBEB6CE0)
#define RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xBEB4BD0)
#define RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xBEAF4C0)
#define RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET UNITYSDK_OFFSET(0xBEB5040)
#define RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET UNITYSDK_OFFSET(0xBEB8C30)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xBEB4640)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xBEB5250)
#define RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB5850)
#define RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET UNITYSDK_OFFSET(0xBEAEE40)
#define RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET UNITYSDK_OFFSET(0xBEB54D0)
#define RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0xBEB49C0)
#define RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xBEB58E0)
#define RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xBEB4DE0)
#define RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET UNITYSDK_OFFSET(0xBEB2A10)
#define RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET UNITYSDK_OFFSET(0xBEAFB00)
#define RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEAFB10)
#define RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0xBEB8BD0)
#define RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET UNITYSDK_OFFSET(0xBEB8C20)
#define RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0xBEB8CB0)
#define RPG_CLIENT_MAP_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xBEB8B70)
#define RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6150)
#define RPG_CLIENT_MAP_GET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xBEB7310)
#define RPG_CLIENT_MAP_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xBEB8BE0)
#define RPG_CLIENT_MAP_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xBEB6140)
#define RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xBEB8C00)
#define RPG_CLIENT_MAP_GET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xBEAB6E0)
#define RPG_CLIENT_MAP_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6C60)
#define RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xBEAAFD0)
#define RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEAE9C0)
#define RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0xBEAB7C0)
#define RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0xBEAB540)
#define RPG_CLIENT_MAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBEB82D0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0xBEABD50)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET UNITYSDK_OFFSET(0xBEAAF70)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBEAB180)
#define RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xBEB6E20)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET UNITYSDK_OFFSET(0xBEB71C0)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xBEB7180)
#define RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET UNITYSDK_OFFSET(0xBEB7100)
#define RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET UNITYSDK_OFFSET(0xBEB8440)
#define RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0xBEB62F0)
#define RPG_CLIENT_MAP_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0xBEAD060)
#define RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET UNITYSDK_OFFSET(0xBEABE60)
#define RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0xBEAEDE0)
#define RPG_CLIENT_MAP_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xBEB87E0)
#define RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xBEB0BD0)
#define RPG_CLIENT_MAP_PREINIT_OFFSET UNITYSDK_OFFSET(0xBEB83F0)
#define RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET UNITYSDK_OFFSET(0xBEAB1E0)
#define RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xBEB6880)
#define RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xBEAB4C0)
#define RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xBEAB2C0)
#define RPG_CLIENT_MAP_REMOVENPC_OFFSET UNITYSDK_OFFSET(0xBEB2A60)
#define RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xBEAB3C0)
#define RPG_CLIENT_MAP_REMOVEPROP_OFFSET UNITYSDK_OFFSET(0xBEB2AF0)
#define RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xBEB6A60)
#define RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0xBEB6AD0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0xBEB69E0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0xBEB6960)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0xBEB68E0)
#define RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB6E90)
#define RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET UNITYSDK_OFFSET(0xBEB7A40)
#define RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6160)
#define RPG_CLIENT_MAP_SET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xBEB7320)
#define RPG_CLIENT_MAP_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xBEB8BF0)
#define RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xBEB8C10)
#define RPG_CLIENT_MAP_SET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xBEB79E0)
#define RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0xBEB6B40)
#define RPG_CLIENT_MAP_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6C00)
#define RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xBEAEFD0)
#define RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET UNITYSDK_OFFSET(0xBEB7460)
#define RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBEAEAE0)
#define RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET UNITYSDK_OFFSET(0xBEB7330)
#define RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET UNITYSDK_OFFSET(0xBEB64B0)
#define RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xBEACEB0)
#define RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET UNITYSDK_OFFSET(0xBEAF630)
#define RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET UNITYSDK_OFFSET(0xBEB4D10)
#define RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET UNITYSDK_OFFSET(0xBEB4870)
#define RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET UNITYSDK_OFFSET(0xBEB2BC0)
#define RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET UNITYSDK_OFFSET(0xBEB5400)
#define RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xBEB6F40)
#define RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xBEB7AB0)
#define RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xBEB6820)
#define RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0xBEB6BA0)
#define RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xBEB07D0)
#define RPG_CLIENT_MAP_UPDATE_OFFSET UNITYSDK_OFFSET(0xBEB80F0)
#define RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET UNITYSDK_OFFSET(0xBEB5F90)
#define RPG_CLIENT_MAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEB8D30)
#define RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0xBEB3740)
#define RPG_CLIENT_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB7520)
#define RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB28F0)
#define RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB2230)
#define RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6620)
#define RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB2340)
#define RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET UNITYSDK_OFFSET(0xBEB2C90)
#define RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xBEADC10)
#define RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xBEAAE80)
#define RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET UNITYSDK_OFFSET(0xBEAC0B0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEAE8F0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET UNITYSDK_OFFSET(0xBEB3260)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET UNITYSDK_OFFSET(0xBEB2CE0)
#define RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB24B0)
#define RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB1480)
#define RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET UNITYSDK_OFFSET(0xBEB1320)
#define RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xBEB0E40)
#define RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET UNITYSDK_OFFSET(0xBEAD2C0)
#define RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET UNITYSDK_OFFSET(0xBEAD580)
#define RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET UNITYSDK_OFFSET(0xBEB8D70)
#define RPG_CLIENT_MAP__LOADSTAGE_OFFSET UNITYSDK_OFFSET(0xBEAC1C0)
#define RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xBEB88E0)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET UNITYSDK_OFFSET(0xBEAFA10)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET UNITYSDK_OFFSET(0xBEAF950)
#define RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET UNITYSDK_OFFSET(0xBEABA20)
#define RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET UNITYSDK_OFFSET(0xBEAFDF0)
#define RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET UNITYSDK_OFFSET(0xBEB0070)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET UNITYSDK_OFFSET(0xBEB0320)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET UNITYSDK_OFFSET(0xBEB0440)
#define RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET UNITYSDK_OFFSET(0xBEB21C0)
#define RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xBEB0D60)
#define RPG_CLIENT_MAP__PREINITSTAGE_OFFSET UNITYSDK_OFFSET(0xBEB6170)
#define RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xBEAE170)
#define RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET UNITYSDK_OFFSET(0xBEB4170)
#define RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET UNITYSDK_OFFSET(0xBEB3EC0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET UNITYSDK_OFFSET(0xBEB20E0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET UNITYSDK_OFFSET(0xBEB18E0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET UNITYSDK_OFFSET(0xBEB1FA0)
#define RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xBEB15E0)
#define RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBEAEBA0)
#define RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xBEAEC20)
#define RPG_CLIENT_MAP__STARTREQUEST_OFFSET UNITYSDK_OFFSET(0xBEB0770)
#define RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEB29A0)
#define RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xBEAAF10)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0xBEB06C0)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0xBEB0550)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_TypeDefinitionIndex = 56884;

	class Map : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EB0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UnloadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EB8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMunicipalManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EC0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingEntityBatchMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EC8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyRegionGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51ED0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51ED8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyVisionRangeGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EE0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LoadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EE8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateSurfaceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EF0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAirshipStreamingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x51EF8);
		}
		static ::System::Boolean* StaticGet_IsLoadForBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x10160);
		}
		::RPG::Client::MapDef* _MapDefInternal; // 0x10
		::Class_2_2CF600F518D344A2* _PreStage; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* _PreShowRemoveObjectSet; // 0x20
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupManager; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* _AllMapObjects; // 0x30
		::Class_1_B48FFE703050178A* _municipalManager; // 0x38
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_357*>* _MapObjectsByGroupInstanceID; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _InitLoadedGroups; // 0x48
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_357*>* _FinishLoadingNewMapObjects; // 0x50
		::System::Collections::Generic::Queue_1<::RPG::Client::Map_MapObjectsUpdateRequest*>* RequestQueue; // 0x58
		::Class_1_9585466CD003AA4F* _NpcRecycleBin; // 0x60
		::Conflict* _conflict; // 0x68
		::RPG::Client::Map_MapObjectsUpdateRequest* CurrentCacheRequest; // 0x70
		::Class_1_5878A2422EE7CDFB* _Minimap_k__BackingField; // 0x78
		::Class_2_2CF600F518D344A2* _Stage; // 0x80
		::Class_1_DA840AB4B3A0176B* _cityAtmosphereStreaming; // 0x88
		::RPG::Client::Promises::Promise* _LoadBattleFinish; // 0x90
		::Class_1_742452531DFCB28E* _surfaceManager; // 0x98
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* _FadingOutMapObjects; // 0xA0
		::System::String* _SceneName_k__BackingField; // 0xA8
		::System::UInt32 _StartRoomID_k__BackingField; // 0xB0
		::System::Boolean _FrameBatchEntityRefreshFinishFlag; // 0xB4
		::System::Boolean _EnableConflictRefresh; // 0xB5
		::System::Boolean _HasDisposed; // 0xB6
		::System::Boolean _CanProcessUpdateReq; // 0xB7
		::System::Boolean _MarkDontDestroyStage_k__BackingField; // 0xB8

		::System::Void _ctor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CCTOR_OFFSET))();
		}

		::System::Void _InitLegacyConflictSystem(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void _UnInitLegacyConflictSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET))(this);
		}

		::System::Void LegacyConflictRefreshModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET))(this);
		}

		::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 a1)
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET))(this, a1);
		}

		::System::Void LegacyConflictRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshExclusiveNPCWithTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET))(this);
		}

		::System::Void AddNpcSeriesIdEntity(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET))(this, a1);
		}

		::System::Void RemoveNpcSeriesIdEntity(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET))(this, a1);
		}

		::System::Void AddPropForConflict(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void RemovePropForConflict(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void AddDistrictForConflict(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void RemoveDistrictForConflict(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Boolean IsGroupOccupied(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET))(this, a1);
		}

		::System::Boolean IsEntityOccupied(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExclusiveInfoNeedToUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET))(this, a1);
		}

		::System::Void LegacyConflictFirstRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET))(this);
		}

		::System::Void DisableConflictRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET))(this);
		}

		::System::Void LoadStageOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET))(this);
		}

		::System::Void LoadOnStep2(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADONSTEP2_OFFSET))(this, a1);
		}

		::System::Void _LoadAllEntitiesOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET))(this);
		}

		::System::Void _InitializeMapObjectsByMapDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET))(this);
		}

		::System::Void _RecordInitLoadedGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET))(this);
		}

		::System::Void InitLoadedHoyoGroupNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET))(this);
		}

		::System::Void StartLevelGraphOnLoadingFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET))(this);
		}

		::System::Void _StartEntityLevelGraphOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseInitializeSubSystems(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET))(this, a1);
		}

		::Class_1_C58549E83E2A95B6* GetMapPathwayData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_C58549E83E2A95B6*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowUnloadStreamingWhenEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET))(this);
		}

		::Class_1_777F514A924455D9* GetBattleAreaDef(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET))(this, a1, a2);
		}

		::Class_1_777F514A924455D9* GetDefaultBattleAreaDef()
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* TryGetAnchor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadAllLevelAreaConfig(::RPG::GameCore::LevelAreaManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET))(this, a1);
		}

		::System::Void _OnAdvServerTriggerTargetUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnAdvServerTriggerTargetUpdateResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::Map_MapObjectsUpdateRequest* get_CachedRequest()
		{
			return ((::RPG::Client::Map_MapObjectsUpdateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET))(this);
		}

		::System::Boolean get_HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void EnableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void DisableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _OnMapDefAdd(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET))(this, a1);
		}

		::System::Void _OnMapDefRemove(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnMapGroupDefLoad(::Class_2_510E2A3B742BC0DC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMapGroupDefUnload(::Class_2_510E2A3B742BC0DC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET))(this, a1);
		}

		::System::Void _UpdateMapObjectsSync(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET))(this, a1);
		}

		::System::Void _UpdateMapObjectAsync(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET))(this, a1);
		}

		::System::Void _StartRequest(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTREQUEST_OFFSET))(this, a1);
		}

		::System::Void UpdateMapObjects(::RPG::Client::Map_RefreshEntitiesExtraInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET))(this, a1);
		}

		::System::Void OnRequestFinish(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnRequestFinishPostProcess(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET))(this, a1);
		}

		::System::Void _LeaveGameWorld(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET))(this, a1);
		}

		::System::Boolean _IsLegacyObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _IsHoyoGroupObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _ShouldMapNpcDestroyTriggerScreenTransfer(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_NPC(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_Prop(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_Default(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET))(this, a1);
		}

		::System::Void _OnMapObjectFadingOutFinish(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void _DisposeSameFadingMapObject(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _DoDestroyMapObject(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _DestroyMapObject(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _TickFrameBatchEntityRefreshFinishNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET))(this);
		}

		::System::Int32 get_AllMapObjectsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET))(this);
		}

		::System::Void RemoveNpc(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPC_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveProp(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Internal_AddMapObject(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _IFixUseUniqueAddFunc(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET))(this, a1);
		}

		::System::Void _Internal_AddMapObject_Repeat(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET))(this, a1);
		}

		::System::Void _Internal_AddMapObject_Unique(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET))(this, a1);
		}

		::System::Void _Internal_RemoveMapObject(::Class_0_16E4307DCC419505_357* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _ClearObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET))(this);
		}

		::System::Void ClearObjectsForEnterBattleMemoryPerformanceOptimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET))(this);
		}

		::System::Void _RemoveAllNpcs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET))(this);
		}

		::System::Void _RemoveAllProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET))(this);
		}

		::System::Void _StartLoadedEntitiesLevelGraph(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_357* GetMapObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::RPG::Client::MapProp* TryGetMapProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapProp* TryGetMapPropByFCVKey(::System::String* a1)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET))(this, a1);
		}

		::RPG::Client::MapProp* GetNearestCheckPoint(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET))(this, a1);
		}

		::System::Boolean GetCheckpointPosition(::RPG::Client::MapProp* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapDistrict* TryGetMapDistrict(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapDistrict*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* GetPropAllByGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapProp*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>* GetDistrictAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_357* GetMapObjectByServerEntityID(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET))(this, a1);
		}

		::RPG::Client::MapNpc* TryGetNpcByGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapNpc*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GetMonsterNpcEventID()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_357* GetMapObject(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>* GetNpcAllByGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET))(this, a1);
		}

		::System::Void FillNpcListByGroup(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void FileNpcListByGroup(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AnalyseMapObjectsTypes(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET))(this, a1);
		}

		::Class_2_2CF600F518D344A2* get_Stage()
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STAGE_OFFSET))(this);
		}

		::System::Boolean get_MarkDontDestroyStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET))(this);
		}

		::System::Void set_MarkDontDestroyStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET))(this, a1);
		}

		::System::Void _PreInitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__PREINITSTAGE_OFFSET))(this);
		}

		::System::Void _LoadStage(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void LoadInitialDynamicBlockEnvProfileData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this);
		}

		::Class_2_2CF600F518D344A2* SwapStageCache(::Class_2_2CF600F518D344A2* a1)
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID, ::Class_2_2CF600F518D344A2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET))(this, a1);
		}

		::System::Void _DisposeStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET))(this);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::Void SetBlockVisibleByTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAllBlockVisible(::System::Boolean a1, ::RPG::Client::OpenWorld::BlockVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAreaOnly(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET))(this, a1);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void ShowStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWSTAGE_OFFSET))(this);
		}

		::System::Void HideStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_HIDESTAGE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetBattleBlock(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void LoadBattleAreaBlock(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SyncPlayerPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET))(this);
		}

		::System::Void TryQueueStreamingLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void LoadForBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithoutPhase()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET))(this);
		}

		::Class_1_5878A2422EE7CDFB* get_Minimap()
		{
			return ((::Class_1_5878A2422EE7CDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MINIMAP_OFFSET))(this);
		}

		::System::Void set_Minimap(::Class_1_5878A2422EE7CDFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5878A2422EE7CDFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MINIMAP_OFFSET))(this, a1);
		}

		::System::Void _InitSurfaceMamager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET))(this);
		}

		::System::Void StartMunicipal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET))(this);
		}

		::System::Void StartAirshipStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET))(this);
		}

		::System::Void SetRuntimeManagerRef(::RPG::Client::RuntimeGroupManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET))(this, a1);
		}

		::System::Void BindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void UnbindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSE_OFFSET))(this);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENDOFTICK_OFFSET))(this, a1);
		}

		::System::Void PreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_PREINIT_OFFSET))(this);
		}

		::System::Void LoadForProfile(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET))(this, a1);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONENTERMAP_OFFSET))(this);
		}

		::System::Void DisposeSurfaceManager(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* get__MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET__MAPDEF_OFFSET))(this);
		}

		::System::Void set__MapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET__MAPDEF_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MAPDEF_OFFSET))(this);
		}

		::System::Boolean get_HasDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET))(this);
		}

		::System::String* get_SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_SCENENAME_OFFSET))(this);
		}

		::System::Void set_SceneName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_SCENENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET))(this);
		}

		::System::Void set_StartRoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET))(this);
		}

		::Class_1_67ED1B7BCF908CF6* GetMapHintManager()
		{
			return ((::Class_1_67ED1B7BCF908CF6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET))(this);
		}

		::System::Boolean get_IsLoadingFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET))(this);
		}

		::System::Void _LoadForBattleWithoutPhase_b__145_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET))(this);
		}
	};
}
