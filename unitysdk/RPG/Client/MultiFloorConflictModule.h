#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Conflict_ConflictGroupUnit;
class Conflict_ConflictModel;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MultiFloorConflictModule_PamOccupyDetail; }
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CONFLICTCONSIDERFORCESHOWTRAINNORMALPAM_OFFSET UNITYSDK_OFFSET(0xAAE35D0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAE5120)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETALLFLOORMAPDEFSINCONFLICTGROUP_OFFSET UNITYSDK_OFFSET(0xAAE62F0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETCONFLICTGROUPID_OFFSET UNITYSDK_OFFSET(0xAAE6220)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUPWHENPAMSIM_OFFSET UNITYSDK_OFFSET(0xAAE60E0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUP_OFFSET UNITYSDK_OFFSET(0xAAE6020)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GET_ISFORCESHOWTRAINNORMALPAM_OFFSET UNITYSDK_OFFSET(0xAAE35C0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INITPAMOCCUPYSTATE_OFFSET UNITYSDK_OFFSET(0xAAE5920)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAAE4CA0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISFLOORBELONGMULTIFLOORCONFLICT_OFFSET UNITYSDK_OFFSET(0xAAE5A00)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISOTHERFLOORDIMENSIONBYCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xAAE5AB0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISTRAINPAMOCCUPYBYMISSION_OFFSET UNITYSDK_OFFSET(0xAAE4BA0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONMISSIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xAAE6550)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONTRACKINGMISSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xAAE6440)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAAE5650)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SETTRAINPAMFORCESHOW_OFFSET UNITYSDK_OFFSET(0xAAE4C00)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SHOULDCONSIDERMULTIFLOORCONFLICT_OFFSET UNITYSDK_OFFSET(0xAAE5E80)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_UPDATECURRENTCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xAAE5BA0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE65F0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2CONFLICTGROUPMAP_OFFSET UNITYSDK_OFFSET(0xAAE4DB0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_1_OFFSET UNITYSDK_OFFSET(0xAAE4F60)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_OFFSET UNITYSDK_OFFSET(0xAAE5510)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITTRAINCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xAAE3650)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__ONGETRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAAE59C0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_BUILDMODELS_OFFSET UNITYSDK_OFFSET(0xAAE3860)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_DISTRIBUTEGROUPS_OFFSET UNITYSDK_OFFSET(0xAAE4060)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_OFFSET UNITYSDK_OFFSET(0xAAE4290)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOOR2MISSIONMAP_OFFSET UNITYSDK_OFFSET(0xAAE53D0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOORID2CONFLICTGROUPMAP_OFFSET UNITYSDK_OFFSET(0xAAE5470)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITTRAINCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xAAE37C0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UPDATEPAMOCCUPYSTATE_OFFSET UNITYSDK_OFFSET(0xAAE4B30)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAE6870)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAAE67E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiFloorConflictModule_TypeDefinitionIndex = 61056;

	class MultiFloorConflictModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 PamConflictID = 0x49445; // 0x0
		// static const ::System::UInt32 TrainConflictGroupID = 0x1; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* _TrainMapDefs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* _OtherMapDefsInConflictGroup; // 0x18
		::RPG::Client::MultiFloorConflictModule_PamOccupyDetail* _CurrentDetail; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FloorID2ConflictGroupMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*>* FloorID2RelativeMissionID; // 0x30
		::System::Boolean _ForceShowTrainNormalPam; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsForceShowTrainNormalPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GET_ISFORCESHOWTRAINNORMALPAM_OFFSET))(this);
		}

		::System::Boolean ConflictConsiderForceShowTrainNormalPam(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CONFLICTCONSIDERFORCESHOWTRAINNORMALPAM_OFFSET))(this, mapDef);
		}

		::System::Void _InitTrainConflictGroupMapDefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITTRAINCONFLICTGROUPMAPDEFS_OFFSET))(this);
		}

		::System::Void _UnInitTrainConflictGroupMapDefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITTRAINCONFLICTGROUPMAPDEFS_OFFSET))(this);
		}

		::System::Void _SimulatePamOccupyStateDetail_BuildModels(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>* otherFloorMissionGroupUnits, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* otherFloorNormalGroupUnits, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*& modelList, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*& modelDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_BUILDMODELS_OFFSET))(this, otherFloorMissionGroupUnits, otherFloorNormalGroupUnits, modelList, modelDict);
		}

		::System::Void _SimulatePamOccupyStateDetail_DistributeGroups(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>* otherFloorMissionGroupUnits, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* otherFloorNormalGroupUnits, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* modelList, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* modelDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_DISTRIBUTEGROUPS_OFFSET))(this, otherFloorMissionGroupUnits, otherFloorNormalGroupUnits, modelList, modelDict);
		}

		::System::Void _SimulatePamOccupyStateDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_OFFSET))(this);
		}

		::System::Void _UpdatePamOccupyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UPDATEPAMOCCUPYSTATE_OFFSET))(this);
		}

		::System::Boolean IsTrainPamOccupyByMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISTRAINPAMOCCUPYBYMISSION_OFFSET))(this);
		}

		::System::Void SetTrainPamForceShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SETTRAINPAMFORCESHOW_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitFloorID2ConflictGroupMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2CONFLICTGROUPMAP_OFFSET))(this);
		}

		::System::Void _UnInitFloorID2ConflictGroupMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOORID2CONFLICTGROUPMAP_OFFSET))(this);
		}

		::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* _InitFloorID2RelativeMissionID(::System::UInt32 floorID)
		{
			return ((::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_OFFSET))(this, floorID);
		}

		::System::Void _InitFloorID2RelativeMissionID_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_1_OFFSET))(this);
		}

		::System::Void _UnInitFloor2MissionMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOOR2MISSIONMAP_OFFSET))(this);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Void InitPamOccupyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INITPAMOCCUPYSTATE_OFFSET))(this);
		}

		::System::Void _OnGetRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__ONGETRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsFloorBelongMultiFloorConflict(::System::UInt32 floorID, ::System::UInt32& conflictGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISFLOORBELONGMULTIFLOORCONFLICT_OFFSET))(this, floorID, conflictGroupID);
		}

		static ::System::Boolean IsOtherFloorDimensionByCurrentMap(::RPG::Client::MapDef* currentMap, ::System::UInt32 otherFloor, ::System::UInt32& dimension)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISOTHERFLOORDIMENSIONBYCURRENTMAP_OFFSET))(currentMap, otherFloor, dimension);
		}

		::System::Void UpdateCurrentConflictGroupMapDefs(::RPG::Client::MapDef* currentMap)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_UPDATECURRENTCONFLICTGROUPMAPDEFS_OFFSET))(this, currentMap);
		}

		::System::Boolean ShouldConsiderMultiFloorConflict(::RPG::Client::MapDef* currentMap, ::System::UInt32& conflictGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SHOULDCONSIDERMULTIFLOORCONFLICT_OFFSET))(this, currentMap, conflictGroup);
		}

		::RPG::Client::MapDef* GetMapDefInConflictGroup(::System::UInt32 conflictGroupID, ::System::UInt32 floorID)
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUP_OFFSET))(this, conflictGroupID, floorID);
		}

		::RPG::Client::MapDef* GetMapDefInConflictGroupWhenPamSim(::System::UInt32 conflictGroupID, ::System::UInt32 floorID)
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUPWHENPAMSIM_OFFSET))(this, conflictGroupID, floorID);
		}

		::System::Boolean GetConflictGroupID(::RPG::Client::MapDef* currentMap, ::System::UInt32& conflictGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETCONFLICTGROUPID_OFFSET))(this, currentMap, conflictGroupID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* GetAllFloorMapDefsInConflictGroup(::System::UInt32 conflictGroupID, ::System::Boolean pamSim)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETALLFLOORMAPDEFSINCONFLICTGROUP_OFFSET))(this, conflictGroupID, pamSim);
		}

		::System::Void OnTrackingMissionChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONTRACKINGMISSIONCHANGED_OFFSET))(this, arg);
		}

		::System::Void OnMissionStateChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONMISSIONSTATECHANGE_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
