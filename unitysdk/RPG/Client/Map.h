#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_344;
class Class_1_0ACF520A830B24C7;
class Class_1_303D5A33D1401D59;
class Class_1_3F095C22F41AA332;
class Class_1_578885A359BC41A3;
class Class_1_5878A2422EE7CDFB;
class Class_1_777F514A924455D9;
class Class_1_902B807FBCF1D9FA;
class Class_1_B48FFE703050178A;
class Class_1_C58549E83E2A95B6;
class Class_2_BA06A5BD139A4E18;
class Class_2_BD898AE9C0E88E25;
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

#define RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xA785280)
#define RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xA785080)
#define RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xA785180)
#define RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xA787D50)
#define RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xA78BDE0)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0xA78E570)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0xA78E500)
#define RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET UNITYSDK_OFFSET(0xA7858C0)
#define RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xA7892A0)
#define RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET UNITYSDK_OFFSET(0xA78FDE0)
#define RPG_CLIENT_MAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA78F3B0)
#define RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xA789250)
#define RPG_CLIENT_MAP_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0xA78FA70)
#define RPG_CLIENT_MAP_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA78F710)
#define RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xA78D710)
#define RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xA78D560)
#define RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xA788810)
#define RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0xA78E4A0)
#define RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xA78C880)
#define RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xA788AE0)
#define RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET UNITYSDK_OFFSET(0xA78CC40)
#define RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET UNITYSDK_OFFSET(0xA790140)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xA78C2F0)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xA78CE00)
#define RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA78D250)
#define RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET UNITYSDK_OFFSET(0xA788530)
#define RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET UNITYSDK_OFFSET(0xA78CF80)
#define RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0xA78C690)
#define RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xA78D2E0)
#define RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xA78C9C0)
#define RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET UNITYSDK_OFFSET(0xA78AF20)
#define RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET UNITYSDK_OFFSET(0xA7890B0)
#define RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xA7890C0)
#define RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0xA7900E0)
#define RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET UNITYSDK_OFFSET(0xA790130)
#define RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0xA7901C0)
#define RPG_CLIENT_MAP_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA773CD0)
#define RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xA78D9D0)
#define RPG_CLIENT_MAP_GET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xA78EA40)
#define RPG_CLIENT_MAP_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xA7900F0)
#define RPG_CLIENT_MAP_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xA78D9C0)
#define RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xA790110)
#define RPG_CLIENT_MAP_GET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xA7854C0)
#define RPG_CLIENT_MAP_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0xA78E420)
#define RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xA784E10)
#define RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xA788050)
#define RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0xA777940)
#define RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0xA785380)
#define RPG_CLIENT_MAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA78F9D0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0xA7857F0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET UNITYSDK_OFFSET(0xA784DB0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA784FC0)
#define RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xA78E5E0)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET UNITYSDK_OFFSET(0xA78E900)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xA78E8C0)
#define RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET UNITYSDK_OFFSET(0xA78E840)
#define RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET UNITYSDK_OFFSET(0xA78FB30)
#define RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0xA78DB10)
#define RPG_CLIENT_MAP_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0xA786AE0)
#define RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET UNITYSDK_OFFSET(0xA785910)
#define RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0xA7884D0)
#define RPG_CLIENT_MAP_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xA78FD90)
#define RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xA7897D0)
#define RPG_CLIENT_MAP_PREINIT_OFFSET UNITYSDK_OFFSET(0xA78FAE0)
#define RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET UNITYSDK_OFFSET(0xA785020)
#define RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xA78E080)
#define RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xA785300)
#define RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xA785100)
#define RPG_CLIENT_MAP_REMOVENPC_OFFSET UNITYSDK_OFFSET(0xA78AF70)
#define RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xA785200)
#define RPG_CLIENT_MAP_REMOVEPROP_OFFSET UNITYSDK_OFFSET(0xA78B000)
#define RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xA78E240)
#define RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0xA78E2B0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0xA78E1D0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0xA78E160)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0xA78E0E0)
#define RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA78E650)
#define RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET UNITYSDK_OFFSET(0xA78F120)
#define RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xA78D9E0)
#define RPG_CLIENT_MAP_SET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xA78EA50)
#define RPG_CLIENT_MAP_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xA790100)
#define RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xA790120)
#define RPG_CLIENT_MAP_SET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xA78F0B0)
#define RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0xA78E320)
#define RPG_CLIENT_MAP_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0xA78E3D0)
#define RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA788640)
#define RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET UNITYSDK_OFFSET(0xA78EB70)
#define RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA7881A0)
#define RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET UNITYSDK_OFFSET(0xA78EA60)
#define RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET UNITYSDK_OFFSET(0xA78DCD0)
#define RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xA786930)
#define RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET UNITYSDK_OFFSET(0xA788C30)
#define RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET UNITYSDK_OFFSET(0xA777BE0)
#define RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET UNITYSDK_OFFSET(0xA78C540)
#define RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET UNITYSDK_OFFSET(0xA777B20)
#define RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET UNITYSDK_OFFSET(0xA777880)
#define RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xA78E700)
#define RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xA78F190)
#define RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xA78E030)
#define RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0xA78E380)
#define RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xA789630)
#define RPG_CLIENT_MAP_UPDATE_OFFSET UNITYSDK_OFFSET(0xA78F7F0)
#define RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET UNITYSDK_OFFSET(0xA78D8C0)
#define RPG_CLIENT_MAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xA790240)
#define RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0xA78BAA0)
#define RPG_CLIENT_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0xA78EC30)
#define RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA78AE10)
#define RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA78A780)
#define RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET UNITYSDK_OFFSET(0xA78DE30)
#define RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA78A890)
#define RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET UNITYSDK_OFFSET(0xA78B0D0)
#define RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xA7875D0)
#define RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA784CC0)
#define RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET UNITYSDK_OFFSET(0xA785B30)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA787FC0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET UNITYSDK_OFFSET(0xA78B630)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET UNITYSDK_OFFSET(0xA78B120)
#define RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xA78AA00)
#define RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET UNITYSDK_OFFSET(0xA789FD0)
#define RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET UNITYSDK_OFFSET(0xA789EF0)
#define RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xA789A40)
#define RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET UNITYSDK_OFFSET(0xA786D10)
#define RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET UNITYSDK_OFFSET(0xA786F60)
#define RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET UNITYSDK_OFFSET(0xA790280)
#define RPG_CLIENT_MAP__LOADSTAGE_OFFSET UNITYSDK_OFFSET(0xA785C40)
#define RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xA78FE80)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET UNITYSDK_OFFSET(0xA788FC0)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET UNITYSDK_OFFSET(0xA788F00)
#define RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET UNITYSDK_OFFSET(0xA785520)
#define RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET UNITYSDK_OFFSET(0xA7892F0)
#define RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET UNITYSDK_OFFSET(0xA789350)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET UNITYSDK_OFFSET(0xA7893B0)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET UNITYSDK_OFFSET(0xA789420)
#define RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET UNITYSDK_OFFSET(0xA78A710)
#define RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xA789970)
#define RPG_CLIENT_MAP__PREINITSTAGE_OFFSET UNITYSDK_OFFSET(0xA78D9F0)
#define RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xA787B30)
#define RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET UNITYSDK_OFFSET(0xA78C090)
#define RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET UNITYSDK_OFFSET(0xA78BE30)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET UNITYSDK_OFFSET(0xA78A630)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET UNITYSDK_OFFSET(0xA78A3B0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET UNITYSDK_OFFSET(0xA78A560)
#define RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA78A0B0)
#define RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA7882B0)
#define RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA788330)
#define RPG_CLIENT_MAP__STARTREQUEST_OFFSET UNITYSDK_OFFSET(0xA7895D0)
#define RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xA78AEB0)
#define RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA784D50)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0xA789520)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0xA7894C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_TypeDefinitionIndex = 56122;

	class Map : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UnloadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDC0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LoadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDC8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyRegionGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDD0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDD8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyVisionRangeGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDE0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateSurfaceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDE8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingEntityBatchMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDF0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMunicipalManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DDF8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DE00);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAirshipStreamingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x1DE08);
		}
		static ::System::Boolean* StaticGet_IsLoadForBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x7AF0);
		}
		::Class_2_BA06A5BD139A4E18* _Stage; // 0x10
		::Class_1_578885A359BC41A3* _cityAtmosphereStreaming; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* _AllMapObjects; // 0x20
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupManager; // 0x28
		::Class_1_5878A2422EE7CDFB* _Minimap_k__BackingField; // 0x30
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_344*>* _FinishLoadingNewMapObjects; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _InitLoadedGroups; // 0x40
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* _FadingOutMapObjects; // 0x48
		::System::String* _SceneName_k__BackingField; // 0x50
		::Class_1_B48FFE703050178A* _municipalManager; // 0x58
		::Class_1_0ACF520A830B24C7* _surfaceManager; // 0x60
		::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* _PreShowRemoveObjectSet; // 0x68
		::Class_1_902B807FBCF1D9FA* _NpcRecycleBin; // 0x70
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_344*>* _MapObjectsByGroupInstanceID; // 0x78
		::RPG::Client::Map_MapObjectsUpdateRequest* CurrentCacheRequest; // 0x80
		::RPG::Client::Promises::Promise* _LoadBattleFinish; // 0x88
		::RPG::Client::MapDef* _MapDefInternal; // 0x90
		::Class_2_BA06A5BD139A4E18* _PreStage; // 0x98
		::Conflict* _conflict; // 0xA0
		::System::Collections::Generic::Queue_1<::RPG::Client::Map_MapObjectsUpdateRequest*>* RequestQueue; // 0xA8
		::System::Boolean _CanProcessUpdateReq; // 0xB0
		::System::Boolean _MarkDontDestroyStage_k__BackingField; // 0xB1
		::System::UInt32 _StartRoomID_k__BackingField; // 0xB4
		::System::Boolean _HasDisposed; // 0xB8
		::System::Boolean _EnableConflictRefresh; // 0xB9
		::System::Boolean _FrameBatchEntityRefreshFinishFlag; // 0xBA

		::System::Void _ctor(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CTOR_OFFSET))(this, mapDef);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CCTOR_OFFSET))();
		}

		::System::Void _InitLegacyConflictSystem(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET))(this, mapDef);
		}

		::System::Void _UnInitLegacyConflictSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET))(this);
		}

		::System::Void LegacyConflictRefreshModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET))(this);
		}

		::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 mainMissionID)
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET))(this, mainMissionID);
		}

		::System::Void LegacyConflictRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshExclusiveNPCWithTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET))(this);
		}

		::System::Void AddNpcSeriesIdEntity(::RPG::Client::MapNpc* Npc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET))(this, Npc);
		}

		::System::Void RemoveNpcSeriesIdEntity(::RPG::Client::MapNpc* Npc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET))(this, Npc);
		}

		::System::Void AddPropForConflict(::RPG::Client::MapProp* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET))(this, prop);
		}

		::System::Void RemovePropForConflict(::RPG::Client::MapProp* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET))(this, prop);
		}

		::System::Void AddDistrictForConflict(::RPG::Client::MapDistrict* district)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET))(this, district);
		}

		::System::Void RemoveDistrictForConflict(::RPG::Client::MapDistrict* district)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET))(this, district);
		}

		::System::Boolean IsGroupOccupied(::System::UInt32 gorupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET))(this, gorupID);
		}

		::System::Boolean IsEntityOccupied(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _OnExclusiveInfoNeedToUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET))(this, param);
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

		::System::Void LoadOnStep2(::RPG::GameCore::GameWorld* gameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADONSTEP2_OFFSET))(this, gameWorld);
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

		::System::Void OnAdventurePhaseInitializeSubSystems(::RPG::Client::AdventurePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET))(this, phase);
		}

		::Class_1_C58549E83E2A95B6* GetMapPathwayData(::System::UInt32 gid, ::System::UInt32 pid)
		{
			return ((::Class_1_C58549E83E2A95B6*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET))(this, gid, pid);
		}

		::System::Boolean ShowUnloadStreamingWhenEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET))(this);
		}

		::Class_1_777F514A924455D9* GetBattleAreaDef(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET))(this, groupInstanceID, instanceID);
		}

		::Class_1_777F514A924455D9* GetDefaultBattleAreaDef()
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* TryGetAnchor(::System::UInt32 groupID, ::System::UInt32 groupAnchorID)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET))(this, groupID, groupAnchorID);
		}

		::System::Void _LoadAllLevelAreaConfig(::RPG::GameCore::LevelAreaManager* levelAreaManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET))(this, levelAreaManager);
		}

		::System::Void _OnAdvServerTriggerTargetUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET))(this, param);
		}

		::System::Void _OnAdvServerTriggerTargetUpdateResult(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET))(this, param);
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

		::System::Void _OnMapDefAdd(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET))(this, entityDef);
		}

		::System::Void _OnMapDefRemove(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET))(this, entityDef);
		}

		::System::Void _OnMapGroupDefLoad(::Class_2_BD898AE9C0E88E25* mapGroupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET))(this, mapGroupDef, versionStamp);
		}

		::System::Void _OnMapGroupDefUnload(::Class_2_BD898AE9C0E88E25* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET))(this, mapGroupDef);
		}

		::System::Void _UpdateMapObjectsSync(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET))(this, req);
		}

		::System::Void _UpdateMapObjectAsync(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET))(this, req);
		}

		::System::Void _StartRequest(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTREQUEST_OFFSET))(this, req);
		}

		::System::Void UpdateMapObjects(::RPG::Client::Map_RefreshEntitiesExtraInfo* extraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET))(this, extraInfo);
		}

		::System::Void OnRequestFinish(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET))(this, req);
		}

		::System::Void _OnRequestFinishPostProcess(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET))(this, req);
		}

		::System::Void _LeaveGameWorld(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET))(this, mapObject);
		}

		::System::Boolean _IsLegacyObject(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET))(this, entityDef);
		}

		::System::Boolean _IsHoyoGroupObject(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET))(this, entityDef);
		}

		::System::Boolean _ShouldMapNpcDestroyTriggerScreenTransfer(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET))(this, mapObject);
		}

		::System::Void _RemoveMapObjectEffect_NPC(::RPG::Client::MapNpc* mapNpc)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET))(this, mapNpc);
		}

		::System::Void _RemoveMapObjectEffect_Prop(::RPG::Client::MapProp* mapProp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET))(this, mapProp);
		}

		::System::Void _RemoveMapObjectEffect_Default(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET))(this, mapObject);
		}

		::System::Void _OnMapObjectFadingOutFinish(::Class_0_16E4307DCC419505_344* fadingObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET))(this, fadingObject);
		}

		::System::Void _DisposeSameFadingMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _DoDestroyMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _DestroyMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Void _TickFrameBatchEntityRefreshFinishNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET))(this);
		}

		::System::Int32 get_AllMapObjectsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET))(this);
		}

		::System::Void RemoveNpc(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPC_OFFSET))(this, groupID, instanceID);
		}

		::System::Void RemoveProp(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::Boolean doDispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROP_OFFSET))(this, groupID, instanceID, doDispose);
		}

		::System::Void _Internal_AddMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET))(this, mapObject);
		}

		::System::Boolean _IFixUseUniqueAddFunc(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_AddMapObject_Repeat(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_AddMapObject_Unique(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET))(this, mapObject);
		}

		::System::Void _Internal_RemoveMapObject(::Class_0_16E4307DCC419505_344* mapObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET))(this, mapObject);
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

		::System::Void _StartLoadedEntitiesLevelGraph(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* loadedEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET))(this, loadedEntities);
		}

		::Class_0_16E4307DCC419505_344* GetMapObjectByMapEntityDef(::RPG::Client::MapEntityDef* mapEntityDef)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET))(this, mapEntityDef);
		}

		::RPG::Client::MapProp* TryGetMapProp(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET))(this, groupID, instanceID);
		}

		::RPG::Client::MapProp* TryGetMapPropByFCVKey(::System::String* fcvKey)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET))(this, fcvKey);
		}

		::RPG::Client::MapProp* GetNearestCheckPoint(::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET))(this, position);
		}

		::System::Boolean GetCheckpointPosition(::RPG::Client::MapProp* prop, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET))(this, prop, position, rotation);
		}

		::RPG::Client::MapDistrict* TryGetMapDistrict(::System::UInt32 groupID, ::System::UInt32 districtID)
		{
			return ((::RPG::Client::MapDistrict*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET))(this, groupID, districtID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* GetPropAllByGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapProp*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>* GetDistrictAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_344* GetMapObjectByServerEntityID(::System::UInt32 serverEntityID)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET))(this, serverEntityID);
		}

		::RPG::Client::MapNpc* TryGetNpcByGroup(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapNpc*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET))(this, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GetMonsterNpcEventID()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_344* GetMapObject(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::Class_0_16E4307DCC419505_344*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET))(this, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>* GetNpcAllByGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET))(this, groupID);
		}

		::System::Void FillNpcListByGroup(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET))(this, groupID, entityList);
		}

		::System::Void FileNpcListByGroup(::System::UInt32 groupID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entityList, ::RPG::GameCore::EntityType et)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET))(this, groupID, entityList, et);
		}

		::System::Void _AnalyseMapObjectsTypes(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>* entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_344*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET))(this, entities);
		}

		::Class_2_BA06A5BD139A4E18* get_Stage()
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STAGE_OFFSET))(this);
		}

		::System::Boolean get_MarkDontDestroyStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET))(this);
		}

		::System::Void set_MarkDontDestroyStage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET))(this, value);
		}

		::System::Void _PreInitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__PREINITSTAGE_OFFSET))(this);
		}

		::System::Void _LoadStage(::System::Action* loadFinishCallback, ::System::Boolean onlyBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADSTAGE_OFFSET))(this, loadFinishCallback, onlyBattle);
		}

		::System::Void LoadInitialDynamicBlockEnvProfileData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this);
		}

		::Class_2_BA06A5BD139A4E18* SwapStageCache(::Class_2_BA06A5BD139A4E18* newStage)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::Class_2_BA06A5BD139A4E18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET))(this, newStage);
		}

		::System::Void _DisposeStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET))(this);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET))(this, tags);
		}

		::System::Void SetBlockVisibleByTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* tag, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, tag, visible, reason);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* alias, ::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, alias, visible, reason);
		}

		::System::Void SetAllBlockVisible(::System::Boolean visible, ::RPG::Client::OpenWorld::BlockVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET))(this, visible, reason);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* tags, ::System::Boolean isForceHLOD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, tags, isForceHLOD);
		}

		::System::Void ShowAreaOnly(::System::String* area)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET))(this, area);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void ShowStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWSTAGE_OFFSET))(this);
		}

		::System::Void HideStage(::System::Boolean bIsHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_HIDESTAGE_OFFSET))(this, bIsHide);
		}

		::UnityEngine::GameObject* GetBattleBlock(::System::String* tag)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET))(this, tag);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET))(this, collections, tag_name);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* collections, ::System::String* tag_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET))(this, collections, tag_name);
		}

		::System::Void LoadBattleAreaBlock(::System::String* tag, ::System::Action* fCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET))(this, tag, fCallBack);
		}

		::System::Void SetLoadFinishCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET))(this, action);
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

		::System::Void set_Minimap(::Class_1_5878A2422EE7CDFB* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5878A2422EE7CDFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MINIMAP_OFFSET))(this, value);
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

		::System::Void SetRuntimeManagerRef(::RPG::Client::RuntimeGroupManager* runtimeGroupManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET))(this, runtimeGroupManager);
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

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENDOFTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void PreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_PREINIT_OFFSET))(this);
		}

		::System::Void LoadForProfile(::RPG::GameCore::GameWorld* gameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET))(this, gameWorld);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONENTERMAP_OFFSET))(this);
		}

		::System::Void DisposeSurfaceManager(::System::Boolean sameMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET))(this, sameMap);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET))(this, param);
		}

		::RPG::Client::MapDef* get__MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET__MAPDEF_OFFSET))(this);
		}

		::System::Void set__MapDef(::RPG::Client::MapDef* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET__MAPDEF_OFFSET))(this, value);
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

		::System::Void set_SceneName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_SCENENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_StartRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET))(this);
		}

		::System::Void set_StartRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET))(this, value);
		}

		::System::Boolean get_HaveStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET))(this);
		}

		::Class_1_3F095C22F41AA332* GetMapHintManager()
		{
			return ((::Class_1_3F095C22F41AA332*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET))(this);
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
