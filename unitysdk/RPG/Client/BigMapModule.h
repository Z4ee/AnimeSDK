#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_02F9DB4791491FD3;
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

#define RPG_CLIENT_BIGMAPMODULE_ADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x1BD7C420)
#define RPG_CLIENT_BIGMAPMODULE_CLEARMAPCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1BD7E3B0)
#define RPG_CLIENT_BIGMAPMODULE_GETMONSTERTRACKMAPDATAKEYS_OFFSET UNITYSDK_OFFSET(0x1BD7D620)
#define RPG_CLIENT_BIGMAPMODULE_GET_ISLOCKMAPSWITCH_OFFSET UNITYSDK_OFFSET(0x1BD7CBA0)
#define RPG_CLIENT_BIGMAPMODULE_GET_LOCKMAPTOASTSTRING_OFFSET UNITYSDK_OFFSET(0x1BD7D020)
#define RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPICONS_OFFSET UNITYSDK_OFFSET(0x1BD7CB90)
#define RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1BD7D4A0)
#define RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGICONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1BD7CB70)
#define RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1BD7D3F0)
#define RPG_CLIENT_BIGMAPMODULE_GOTOMONSTERTRACKID_OFFSET UNITYSDK_OFFSET(0x1BD7DB10)
#define RPG_CLIENT_BIGMAPMODULE_ISTRACKINGICON_OFFSET UNITYSDK_OFFSET(0x1BD7C680)
#define RPG_CLIENT_BIGMAPMODULE_REMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x1BD7C530)
#define RPG_CLIENT_BIGMAPMODULE_SETTRACKINGICON_OFFSET UNITYSDK_OFFSET(0x1BD7C8E0)
#define RPG_CLIENT_BIGMAPMODULE_SET_TEMPSHOWMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1BD7D4E0)
#define RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGICONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1BD7CB80)
#define RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1BD7D430)
#define RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1BD7D810)
#define RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMONSTER_OFFSET UNITYSDK_OFFSET(0x1BD7D970)
#define RPG_CLIENT_BIGMAPMODULE_UPDATEMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x1BD7E530)
#define RPG_CLIENT_BIGMAPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1BD7E750)
#define RPG_CLIENT_BIGMAPMODULE__CLEARNOTCURRENTFLOORTRACKICON_OFFSET UNITYSDK_OFFSET(0x1BD7EE70)
#define RPG_CLIENT_BIGMAPMODULE__CLEARTRACKINGMAPMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1BD7D5A0)
#define RPG_CLIENT_BIGMAPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7FB50)
#define RPG_CLIENT_BIGMAPMODULE__GETFIRSTVALIDMONSTER_OFFSET UNITYSDK_OFFSET(0x1BD7F210)
#define RPG_CLIENT_BIGMAPMODULE__GOTOMONSTERTRACKID_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BD7FC00)
#define RPG_CLIENT_BIGMAPMODULE__ISMONSTERINCURRENTWORLD_OFFSET UNITYSDK_OFFSET(0x1BD7F960)
#define RPG_CLIENT_BIGMAPMODULE__MARKALLMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x1BD7F150)
#define RPG_CLIENT_BIGMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1BD7EE10)
#define RPG_CLIENT_BIGMAPMODULE__ONFINDCHESTINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x1BD7F030)
#define RPG_CLIENT_BIGMAPMODULE__ONUIHIDEMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0x1BD7ED50)
#define RPG_CLIENT_BIGMAPMODULE__ONUILOCKSWITCHMAP_OFFSET UNITYSDK_OFFSET(0x1BD7E930)
#define RPG_CLIENT_BIGMAPMODULE__ONUISHOWMAPPINGINFOTRACE_OFFSET UNITYSDK_OFFSET(0x1BD7ECA0)
#define RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACKDATALIST_OFFSET UNITYSDK_OFFSET(0x1BD7DF50)
#define RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x1BD7E580)
#define RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACKDATALIST_B__38_0_OFFSET UNITYSDK_OFFSET(0x1BD80290)
#define RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACK_B__35_0_OFFSET UNITYSDK_OFFSET(0x1BD7FDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapModule_TypeDefinitionIndex = 62970;

	class BigMapModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MapTrackMonsterData* _TempShowMapMonsterData; // 0x10
		::RPG::Client::MapTrackMonsterData* _TrackingMapMonsterData; // 0x18
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Int32>* _LockMapSwitchDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IMapIcon*>* _TempShowMapIcons_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_1_02F9DB4791491FD3*>* _MonsterTrackDatas; // 0x30
		::RPG::Client::IMapIconTrackSnapshot* _TrackingIconSnapshot_k__BackingField; // 0x38
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::String*>* _LockMapSwitchToast; // 0x40
		::System::UInt32 _MonsterTrackOverrideMapInfoID; // 0x48
		::System::UInt32 _MonsterTrackID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CTOR_OFFSET))(this);
		}

		::System::Void AddTempShowIcon(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_ADDTEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void RemoveTempShowIcon(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_REMOVETEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Boolean IsTrackingIcon(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_ISTRACKINGICON_OFFSET))(this, a1);
		}

		::System::Void SetTrackingIcon(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SETTRACKINGICON_OFFSET))(this, a1);
		}

		::RPG::Client::IMapIconTrackSnapshot* get_TrackingIconSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TRACKINGICONSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TrackingIconSnapshot(::RPG::Client::IMapIconTrackSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGICONSNAPSHOT_OFFSET))(this, a1);
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

		::System::Void set_TrackingMapMonsterData(::RPG::Client::MapTrackMonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TRACKINGMAPMONSTERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MapTrackMonsterData* get_TempShowMapMonsterData()
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GET_TEMPSHOWMAPMONSTERDATA_OFFSET))(this);
		}

		::System::Void set_TempShowMapMonsterData(::RPG::Client::MapTrackMonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_SET_TEMPSHOWMAPMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::MapDataKey*>* GetMonsterTrackMapDataKeys()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MapDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GETMONSTERTRACKMAPDATAKEYS_OFFSET))(this);
		}

		::System::Void TransferAndTraceMappingInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMAPPINGINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TransferAndTraceMonster(::RPG::Client::MapTrackMonsterData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_TRANSFERANDTRACEMONSTER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GotoMonsterTrackID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE_GOTOMONSTERTRACKID_OFFSET))(this, a1, a2);
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

		::System::Void _OnUILockSwitchMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUILOCKSWITCHMAP_OFFSET))(this, a1);
		}

		::System::Void _OnUIShowMappingInfoTrace(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUISHOWMAPPINGINFOTRACE_OFFSET))(this, a1);
		}

		::System::Void _OnUIHideMappingInfoTrace(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONUIHIDEMAPPINGINFOTRACE_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _ClearNotCurrentFloorTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CLEARNOTCURRENTFLOORTRACKICON_OFFSET))(this);
		}

		::System::Void _OnFindChestInfoRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ONFINDCHESTINFOREFRESH_OFFSET))(this, a1);
		}

		::System::Void _MarkAllMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__MARKALLMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void _UpdateMonsterTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACK_OFFSET))(this);
		}

		::RPG::Client::MapTrackMonsterData* _GetFirstValidMonster(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__GETFIRSTVALIDMONSTER_OFFSET))(this, a1);
		}

		::System::Void _ClearTrackingMapMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__CLEARTRACKINGMAPMONSTERDATA_OFFSET))(this);
		}

		::System::Void _UpdateMonsterTrackDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__UPDATEMONSTERTRACKDATALIST_OFFSET))(this);
		}

		::System::Boolean _IsMonsterInCurrentWorld(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__ISMONSTERINCURRENTWORLD_OFFSET))(this, a1);
		}

		::System::Void _GotoMonsterTrackID_b__24_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE__GOTOMONSTERTRACKID_B__24_0_OFFSET))(this, a1);
		}

		::System::Void __UpdateMonsterTrack_b__35_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACK_B__35_0_OFFSET))(this, a1);
		}

		::System::Int32 __UpdateMonsterTrackDataList_b__38_0(::Class_1_02F9DB4791491FD3* a1, ::Class_1_02F9DB4791491FD3* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_02F9DB4791491FD3*, ::Class_1_02F9DB4791491FD3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPMODULE___UPDATEMONSTERTRACKDATALIST_B__38_0_OFFSET))(this, a1, a2);
		}
	};
}
