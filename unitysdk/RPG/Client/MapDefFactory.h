#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B5818C66053C3AC8;
class Class_1_BB4B99DE4C2501EC_6;
class Class_1_E30528F4CB67FD3D;
class Class_1_F9A21D4336DB77EF;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class PerformanceStartSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class PerformanceBackupConfig; }
namespace RPG::GameCore { class PerformanceStandalonePlayOverrideConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET UNITYSDK_OFFSET(0x17FEAE20)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET UNITYSDK_OFFSET(0x17FEAF00)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17FE7270)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x17FE6DE0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET UNITYSDK_OFFSET(0x17FECEC0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET UNITYSDK_OFFSET(0x17FEBA10)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET UNITYSDK_OFFSET(0x17FEC270)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET UNITYSDK_OFFSET(0x17FECA40)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET UNITYSDK_OFFSET(0x17FEC960)
#define RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x17FE64C0)
#define RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17FEAB30)
#define RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x17FEA920)
#define RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET UNITYSDK_OFFSET(0x17FEA480)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET UNITYSDK_OFFSET(0x17FE68E0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET UNITYSDK_OFFSET(0x17FE6710)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE8960)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x17FE6C90)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE8DD0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE6F80)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET UNITYSDK_OFFSET(0x17FE6BF0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE9440)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE6FD0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET UNITYSDK_OFFSET(0x17FE6AA0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET UNITYSDK_OFFSET(0x17FE6760)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET UNITYSDK_OFFSET(0x17FE6D20)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET UNITYSDK_OFFSET(0x17FE65E0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x17FE7E50)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET UNITYSDK_OFFSET(0x17FEB0D0)
#define RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET UNITYSDK_OFFSET(0x17FE6A00)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET UNITYSDK_OFFSET(0x17FE7680)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET UNITYSDK_OFFSET(0x17FE7740)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET UNITYSDK_OFFSET(0x17FE9F50)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17FE7410)
#define RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17FE9A40)
#define RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x17FEA7B0)
#define RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x17FEA630)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDefFactory_TypeDefinitionIndex = 59346;

	class MapDefFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef* Create(::Class_1_BB4B99DE4C2501EC_6* a1)
		{
			return ((::RPG::Client::MapDef*(*)(::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MapDef* CreateByStandalonePerformance(::Class_1_F9A21D4336DB77EF* a1, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig* a2)
		{
			return ((::RPG::Client::MapDef*(*)(::Class_1_F9A21D4336DB77EF*, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapDef* CreateByPerformanceSnapshot(::Proto::PerformanceStartSnapshot* a1, ::RPG::GameCore::PerformanceBackupConfig* a2)
		{
			return ((::RPG::Client::MapDef*(*)(::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshot(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2, ::RPG::GameCore::PerformanceBackupConfig* a3)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _OverridePerformanceSnapshotByCustom(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshotGroupByCustom(::RPG::Client::MapDef* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET))(a1, a2);
		}

		static ::System::Void _HandlePerformanceSnapshotChest(::Proto::EntitySnapshot* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshotByTable(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* _GetGroupSnapshotListByGroupID(::RPG::GameCore::RuntimeGroupInfo* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _TryAddSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _TryRemoveSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::Proto::GroupSnapshot* _TryGetGroupSnapshotByGroupID(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::Proto::GroupSnapshot* _CreateOverrideGroupSnapshot(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefServerPart_PerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefClientPart_PerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue_PerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue_PerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue_StandalonePerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Class_1_F9A21D4336DB77EF* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_F9A21D4336DB77EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue_StandalonePerformanceReplay(::Class_1_B5818C66053C3AC8* a1, ::Class_1_F9A21D4336DB77EF* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_F9A21D4336DB77EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapDef* CreateByCrossMap(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::MapDef* CreateByOffline(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* a5)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _InitMapObjects_Offine(::Class_1_B5818C66053C3AC8* a1)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefServerPart(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefClientPart(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefLightenSectionList(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefGroupCustomSaveData(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue(::Class_1_B5818C66053C3AC8* a1)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefBuffers(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET))(a1, a2);
		}

		static ::System::Void _InitOpenedChests(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefMazeCrossFloorCondition(::Class_1_B5818C66053C3AC8* a1, ::Class_1_BB4B99DE4C2501EC_6* a2)
		{
			return ((::System::Void(*)(::Class_1_B5818C66053C3AC8*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcDef(::RPG::Client::MapDef* a1, ::Class_1_E30528F4CB67FD3D* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcMonsterDef(::RPG::Client::MapDef* a1, ::Class_1_E30528F4CB67FD3D* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef(::RPG::Client::MapDef* a1, ::Class_1_E30528F4CB67FD3D* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapPropDef*(*)(::RPG::Client::MapDef*, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef_1(::Class_1_E30528F4CB67FD3D* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapPropDef*(*)(::Class_1_E30528F4CB67FD3D*, ::RPG::GameCore::RuntimeGroupInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapDistrictDef* CreateDistrictpDef(::RPG::Client::MapDef* a1, ::Class_1_E30528F4CB67FD3D* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::RPG::Client::MapDef*, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET))(a1, a2, a3, a4);
		}
	};
}
