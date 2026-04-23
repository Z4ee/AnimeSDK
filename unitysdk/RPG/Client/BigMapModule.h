#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_4C612AB5D47425B6;
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BIGMAPMODULE_ADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9E8BBF0)
#define RPG_CLIENT_BIGMAPMODULE_CLEARMAPCACHEDATA_OFFSET UNITYSDK_OFFSET(0x9E8D610)
#define RPG_CLIENT_BIGMAPMODULE_GETMONSTERTRACKMAPDATAKEYS_OFFSET UNITYSDK_OFFSET(0x9E8C9E0)
#define RPG_CLIENT_BIGMAPMODULE_GET_ISLOCKMAPSWITCH_OFFSET UNITYSDK_OFFSET(0x9E8C0F0)
#define RPG_CLIENT_BIGMAPMODULE_GET_LOCKMAPTOASTSTRING_OFFSET UNITYSDK_OFFSET(0x9E8C560)
#define RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPICONS_OFFSET UNITYSDK_OFFSET(0x9E8C0E0)
#define RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E8C8A0)
#define RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGICONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9E8C0C0)
#define RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E8C820)
#define RPG_CLIENT_BIGMAPMODULE_GOTOMONSTERTRACKID_OFFSET UNITYSDK_OFFSET(0x9E8CED0)
#define RPG_CLIENT_BIGMAPMODULE_ISTRACKINGICON_OFFSET UNITYSDK_OFFSET(0x9E8BD60)
#define RPG_CLIENT_BIGMAPMODULE_REMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9E8BCA0)
#define RPG_CLIENT_BIGMAPMODULE_SETTRACKINGICON_OFFSET UNITYSDK_OFFSET(0x9E8BEF0)
#define RPG_CLIENT_BIGMAPMODULE_SET_TEMPSHOWMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E8C8B0)
#define RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGICONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9E8C0D0)
#define RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E8C830)
#define RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x9E8CC00)
#define RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMONSTER_OFFSET UNITYSDK_OFFSET(0x9E8CD60)
#define RPG_CLIENT_BIGMAPMODULE_UPDATEMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x9E8D720)
#define RPG_CLIENT_BIGMAPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E8D8D0)
#define RPG_CLIENT_BIGMAPMODULE__CLEARNOTCURRENTFLOORTRACKICON_OFFSET UNITYSDK_OFFSET(0x9E8DF40)
#define RPG_CLIENT_BIGMAPMODULE__CLEARTRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E8C970)
#define RPG_CLIENT_BIGMAPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8E8E0)
#define RPG_CLIENT_BIGMAPMODULE__GETFIRSTVALIDMONSTER_OFFSET UNITYSDK_OFFSET(0x9E8E200)
#define RPG_CLIENT_BIGMAPMODULE__GOTOMONSTERTRACKID_B__24_0_OFFSET UNITYSDK_OFFSET(0x9E8E990)
#define RPG_CLIENT_BIGMAPMODULE__ISMONSTERINCURRENTWORLD_OFFSET UNITYSDK_OFFSET(0x9E8E660)
#define RPG_CLIENT_BIGMAPMODULE__MARKALLMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x9E8E160)
#define RPG_CLIENT_BIGMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9E8DEE0)
#define RPG_CLIENT_BIGMAPMODULE__ONFINDCHESTINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x9E8E080)
#define RPG_CLIENT_BIGMAPMODULE__ONUIHIDEMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0x9E8DE40)
#define RPG_CLIENT_BIGMAPMODULE__ONUILOCKSWITCHMAP_OFFSET UNITYSDK_OFFSET(0x9E8DA50)
#define RPG_CLIENT_BIGMAPMODULE__ONUISHOWMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0x9E8DDA0)
#define RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACKDATALIST_OFFSET UNITYSDK_OFFSET(0x9E8D2A0)
#define RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x9E8D770)
#define RPG_CLIENT_BIGMAPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E8F050)
#define RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACKDATALIST_B__38_0_OFFSET UNITYSDK_OFFSET(0x9E8ED30)
#define RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACK_B__35_0_OFFSET UNITYSDK_OFFSET(0x9E8EAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapModule_TypeDefinitionIndex = 57937;

	class BigMapModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_4C612AB5D47425B6*>* _MonsterTrackDatas; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Int32>* _LockMapSwitchDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IMapIcon*>* _TempShowMapIcons_k__BackingField; // 0x20
		::RPG::Client::MapTrackMonsterData* _TempShowMapMonsterData; // 0x28
		::RPG::Client::IMapIconTrackSnapshot* _TrackingIconSnapshot_k__BackingField; // 0x30
		::RPG::Client::MapTrackMonsterData* _TrackingMapMonsterData; // 0x38
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::String*>* _LockMapSwitchToast; // 0x40
		::System::UInt32 _MonsterTrackID; // 0x48
		::System::UInt32 _MonsterTrackOverrideMapInfoID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CTOR_OFFSET))(this);
		}

		::System::Void AddTempShowIcon(::RPG::Client::IMapIcon* icon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_ADDTEMPSHOWICON_OFFSET))(this, icon);
		}

		::System::Void RemoveTempShowIcon(::RPG::Client::IMapIcon* icon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_REMOVETEMPSHOWICON_OFFSET))(this, icon);
		}

		::System::Boolean IsTrackingIcon(::RPG::Client::IMapIcon* icon)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_ISTRACKINGICON_OFFSET))(this, icon);
		}

		::System::Void SetTrackingIcon(::RPG::Client::IMapIcon* icon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SETTRACKINGICON_OFFSET))(this, icon);
		}

		::RPG::Client::IMapIconTrackSnapshot* get_TrackingIconSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGICONSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TrackingIconSnapshot(::RPG::Client::IMapIconTrackSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGICONSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMapIcon*>* get_TempShowMapIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPICONS_OFFSET))(this);
		}

		::System::Boolean get_IsLockMapSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_ISLOCKMAPSWITCH_OFFSET))(this);
		}

		::System::String* get_LockMapToastString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_LOCKMAPTOASTSTRING_OFFSET))(this);
		}

		::RPG::Client::MapTrackMonsterData* get_TrackingMapMonsterData()
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGMAPMONSTERDATA_OFFSET))(this);
		}

		::System::Void set_TrackingMapMonsterData(::RPG::Client::MapTrackMonsterData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGMAPMONSTERDATA_OFFSET))(this, value);
		}

		::RPG::Client::MapTrackMonsterData* get_TempShowMapMonsterData()
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPMONSTERDATA_OFFSET))(this);
		}

		::System::Void set_TempShowMapMonsterData(::RPG::Client::MapTrackMonsterData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TEMPSHOWMAPMONSTERDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::MapDataKey*>* GetMonsterTrackMapDataKeys()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MapDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GETMONSTERTRACKMAPDATAKEYS_OFFSET))(this);
		}

		::System::Void TransferAndTraceMappingInfo(::System::UInt32 entranceID, ::System::UInt32 nearestTeleportMappingInfoID, ::System::UInt32 storyLineID, ::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMAPPINGINFO_OFFSET))(this, entranceID, nearestTeleportMappingInfoID, storyLineID, contentID);
		}

		::System::Void TransferAndTraceMonster(::RPG::Client::MapTrackMonsterData* mapTrackMonsterData, ::System::UInt32 entranceID, ::System::UInt32 nearestTeleportMappingInfoID, ::System::UInt32 storyLineID, ::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMONSTER_OFFSET))(this, mapTrackMonsterData, entranceID, nearestTeleportMappingInfoID, storyLineID, contentID);
		}

		::System::Void GotoMonsterTrackID(::System::UInt32 monsterTrackID, ::System::UInt32 overrideMapInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GOTOMONSTERTRACKID_OFFSET))(this, monsterTrackID, overrideMapInfoID);
		}

		::System::Void ClearMapCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_CLEARMAPCACHEDATA_OFFSET))(this);
		}

		::System::Void UpdateMonsterTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_UPDATEMONSTERTRACK_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUILockSwitchMap(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUILOCKSWITCHMAP_OFFSET))(this, args);
		}

		::System::Void _OnUIShowMappingInfoTrace(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUISHOWMAPPINGINFOTRACE_OFFSET))(this, args);
		}

		::System::Void _OnUIHideMappingInfoTrace(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUIHIDEMAPPINGINFOTRACE_OFFSET))(this, args);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _ClearNotCurrentFloorTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CLEARNOTCURRENTFLOORTRACKICON_OFFSET))(this);
		}

		::System::Void _OnFindChestInfoRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONFINDCHESTINFOREFRESH_OFFSET))(this, arg);
		}

		::System::Void _MarkAllMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__MARKALLMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void _UpdateMonsterTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACK_OFFSET))(this);
		}

		::RPG::Client::MapTrackMonsterData* _GetFirstValidMonster(::System::Nullable_1<::System::UInt32> floorID)
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__GETFIRSTVALIDMONSTER_OFFSET))(this, floorID);
		}

		::System::Void _ClearTrackingMapMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CLEARTRACKINGMAPMONSTERDATA_OFFSET))(this);
		}

		::System::Void _UpdateMonsterTrackDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACKDATALIST_OFFSET))(this);
		}

		::System::Boolean _IsMonsterInCurrentWorld(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ISMONSTERINCURRENTWORLD_OFFSET))(this, entranceID);
		}

		::System::Void _GotoMonsterTrackID_b__24_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__GOTOMONSTERTRACKID_B__24_0_OFFSET))(this, x);
		}

		::System::Void __UpdateMonsterTrack_b__35_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACK_B__35_0_OFFSET))(this, x);
		}

		::System::Int32 __UpdateMonsterTrackDataList_b__38_0(::Class_1_4C612AB5D47425B6* x, ::Class_1_4C612AB5D47425B6* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_4C612AB5D47425B6*, ::Class_1_4C612AB5D47425B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACKDATALIST_B__38_0_OFFSET))(this, x, y);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
