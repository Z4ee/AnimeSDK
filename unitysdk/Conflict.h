#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_70A2BED4C4737BFB;
class Class_1_A5C7D9C380EAC2CB;
class Conflict_ConflictGroupUnit;
class Conflict_ConflictModel;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_ADDDISTRICTTOUNIT_OFFSET UNITYSDK_OFFSET(0xC74F140)
#define CONFLICT_ADDNPCTOUNIT_OFFSET UNITYSDK_OFFSET(0xC74D7F0)
#define CONFLICT_ADDPROPTOUNIT_OFFSET UNITYSDK_OFFSET(0xC74E5E0)
#define CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET UNITYSDK_OFFSET(0xC745FA0)
#define CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET UNITYSDK_OFFSET(0xC748BF0)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET UNITYSDK_OFFSET(0xC74A9B0)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET UNITYSDK_OFFSET(0xC74B210)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0xC74AA90)
#define CONFLICT_CLEARCONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0xC7465B0)
#define CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xC746F30)
#define CONFLICT_COMPARETOBYMISSIONID_OFFSET UNITYSDK_OFFSET(0xC750710)
#define CONFLICT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7501D0)
#define CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0xC747FF0)
#define CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET UNITYSDK_OFFSET(0xC7517A0)
#define CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET UNITYSDK_OFFSET(0xC74D700)
#define CONFLICT_GETMAINMISSIONPATCH_OFFSET UNITYSDK_OFFSET(0xC74DED0)
#define CONFLICT_GETMISSIONPOINTS_OFFSET UNITYSDK_OFFSET(0xC750890)
#define CONFLICT_GETMISSIONPRIORITY_OFFSET UNITYSDK_OFFSET(0xC7508D0)
#define CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xC750540)
#define CONFLICT_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0xC7503A0)
#define CONFLICT_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0xC7502D0)
#define CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET UNITYSDK_OFFSET(0xC747720)
#define CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET UNITYSDK_OFFSET(0xC74FA10)
#define CONFLICT_REMOVENPCFROMUNIT_OFFSET UNITYSDK_OFFSET(0xC74E2B0)
#define CONFLICT_REMOVEPROPFROMUNIT_OFFSET UNITYSDK_OFFSET(0xC74EEB0)
#define CONFLICT_SELECTPATCHMISSIONID_OFFSET UNITYSDK_OFFSET(0xC74FCA0)
#define CONFLICT_UPDATECONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0xC7464B0)
#define CONFLICT_UPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0xC74BE20)
#define CONFLICT__ADDCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0xC745770)
#define CONFLICT__BUILDMODELSSIM_OFFSET UNITYSDK_OFFSET(0xC747080)
#define CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET UNITYSDK_OFFSET(0xC752880)
#define CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC7494C0)
#define CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC74A170)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC748FA0)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC749910)
#define CONFLICT__CLEARCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0xC7456B0)
#define CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0xC752FE0)
#define CONFLICT__CTOR_OFFSET UNITYSDK_OFFSET(0xC74FE00)
#define CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0xC750910)
#define CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0xC751020)
#define CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0xC74D1B0)
#define CONFLICT__DOUPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0xC74C500)
#define CONFLICT__GETGROUPCATEGORY_1_OFFSET UNITYSDK_OFFSET(0xC74EAF0)
#define CONFLICT__GETGROUPCATEGORY_2_OFFSET UNITYSDK_OFFSET(0xC74F650)
#define CONFLICT__GETGROUPCATEGORY_OFFSET UNITYSDK_OFFSET(0xC74DDD0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET UNITYSDK_OFFSET(0xC74EBF0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET UNITYSDK_OFFSET(0xC74F850)
#define CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xC74DF70)
#define CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET UNITYSDK_OFFSET(0xC74EDB0)
#define CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET UNITYSDK_OFFSET(0xC74F750)
#define CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC74E1B0)
#define CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC746750)
#define CONFLICT__ONGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xC752340)
#define CONFLICT__ONGROUPUNLOADED_OFFSET UNITYSDK_OFFSET(0xC7525B0)
#define CONFLICT__UNIONHASHSET_1_OFFSET UNITYSDK_OFFSET(0xC74D610)
#define CONFLICT__UNIONHASHSET_OFFSET UNITYSDK_OFFSET(0xC74D550)
#define CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET UNITYSDK_OFFSET(0xC745970)
#define CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET UNITYSDK_OFFSET(0xC745B90)
#define CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0xC7531C0)
#define CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC745E90)
#define CONFLICT__WILLCONFLICTCHANGE_OFFSET UNITYSDK_OFFSET(0xC74C000)

inline static constexpr unsigned int Conflict_TypeDefinitionIndex = 44491;

class Conflict : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* _OtherFloorNormalNpcGroupUnits; // 0x10
	::RPG::Client::MapDef* _MapDef; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempConflictIDs; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>* _OtherFloorMissionGroupUnits; // 0x28
	::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* _ConflictModelsList; // 0x30
	::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>* _CurrentFloorNormalGroupUnits; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempInitConflictIDs; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>* _CurrentFloorMissionGroupUnits; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* _ConflictModelsDic; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempSameMissionConflictIDs; // 0x58
	::System::Boolean _IsInConflictTransfer; // 0x60

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ClearConflictModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__CLEARCONFLICTMODEL_OFFSET))(this);
	}

	::System::Void _AddConflictModel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT__ADDCONFLICTMODEL_OFFSET))(this, a1);
	}

	::System::Void _UpdateConflictModel_CurrentFloor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET))(this);
	}

	::System::Void _UpdateConflictModel_MultiFloor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET))(this);
	}

	::System::Void _UpdateOtherFloorGroupUnits()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET))(this);
	}

	::System::Void UpdateConflictModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTMODEL_OFFSET))(this);
	}

	::System::Void ClearConflictView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CLEARCONFLICTVIEW_OFFSET))(this);
	}

	::System::Void _InitCurrentFloorMissionGroupUnits()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* CollectOtherFloorGroupConflictIDs(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*> _BuildModelsSim(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>* a1)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*>(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>*))((::PBYTE)hIl2Cpp + CONFLICT__BUILDMODELSSIM_OFFSET))(a1);
	}

	static ::System::Void MissionGroupConflictSim(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*))((::PBYTE)hIl2Cpp + CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*> CalculateOtherFloorConflictGroupUnit(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*>(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>* CalculateOtherFloorHoyoGroupLoadStatesEX(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET))(a1, a2);
	}

	static ::System::Void _CalculateOtherFloorHoyoMissionGroupUnits(::RPG::Client::MapDef* a1, ::Class_1_A5C7D9C380EAC2CB* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*& a3)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::Class_1_A5C7D9C380EAC2CB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET))(a1, a2, a3);
	}

	static ::System::Void _CalculateOtherFloorLegacyMissionGroupUnits(::RPG::Client::MapDef* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*& a2)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET))(a1, a2);
	}

	static ::System::Void _CalculateOtherFloorLegacyNormalNpcGroupUnits(::RPG::Client::MapDef* a1, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*& a2)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET))(a1, a2);
	}

	static ::System::Void _CalculateOtherFloorHoyoNormalNpcGroupUnits(::RPG::Client::MapDef* a1, ::Class_1_A5C7D9C380EAC2CB* a2, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*& a3)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::Class_1_A5C7D9C380EAC2CB*, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET))(a1, a2, a3);
	}

	::System::Void UpdateConflictView(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTVIEW_OFFSET))(this, a1);
	}

	::System::Boolean _WillConflictChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__WILLCONFLICTCHANGE_OFFSET))(this);
	}

	::System::Void _DoUpdateConflictView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DOUPDATECONFLICTVIEW_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetConnectSubmissionIDListFromNpc(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET))(this, a1, a2);
	}

	::System::Void AddNPCToUnit(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_ADDNPCTOUNIT_OFFSET))(this, a1);
	}

	::System::Void RemoveNPCFromUnit(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVENPCFROMUNIT_OFFSET))(this, a1);
	}

	::System::Void AddPropToUnit(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_ADDPROPTOUNIT_OFFSET))(this, a1);
	}

	::System::Void RemovePropFromUnit(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEPROPFROMUNIT_OFFSET))(this, a1);
	}

	::System::Void AddDistrictToUnit(::RPG::Client::MapDistrict* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_ADDDISTRICTTOUNIT_OFFSET))(this, a1);
	}

	::System::Void RemoveDistrictFromUnit(::RPG::Client::MapDistrict* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory(::RPG::Client::MapNpc* a1)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory_1(::RPG::Client::MapProp* a1)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory_2(::RPG::Client::MapDistrict* a1)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_2_OFFSET))(this, a1);
	}

	::System::UInt32 _GetGroupOwnerMainMission(::RPG::Client::MapNpc* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET))(this, a1);
	}

	::System::UInt32 _GetGroupOwnerMainMission_1(::RPG::Client::MapProp* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET))(this, a1);
	}

	::System::UInt32 _GetGroupOwnerMainMission_2(::RPG::Client::MapDistrict* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::LevelGroupMainMissionIssuePatch* GetMainMissionPatch(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMAINMISSIONPATCH_OFFSET))(a1, a2);
	}

	static ::System::UInt32 SelectPatchMissionID(::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatch* a2, ::Conflict_ConflictGroupUnit* a3)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_SELECTPATCHMISSIONID_OFFSET))(a1, a2, a3);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs(::RPG::Client::MapNpc* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_1(::RPG::Client::MapProp* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_2(::RPG::Client::MapDistrict* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_DISPOSE_OFFSET))(this);
	}

	::System::Boolean IsGroupOccupied(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISGROUPOCCUPIED_OFFSET))(this, a1);
	}

	::System::Boolean IsEntityOccupied(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISENTITYOCCUPIED_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 a1)
	{
		return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET))(this, a1);
	}

	static ::System::Int32 CompareToByMissionID(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_COMPARETOBYMISSIONID_OFFSET))(a1, a2);
	}

	static ::System::Int32 GetMissionPoints(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPOINTS_OFFSET))(a1);
	}

	static ::System::UInt32 GetMissionPriority(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPRIORITY_OFFSET))(a1);
	}

	::System::Void _DistributeMissionUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET))(this);
	}

	::System::Void _DistributeNormalUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET))(this);
	}

	static ::System::Void DistributeOtherFloorMissionUnitToModel(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>* a1, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET))(a1, a2, a3);
	}

	static ::System::Void DistributeOtherFloorNormalNpcToModel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* a1, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void _DistributeUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET))(this);
	}

	::System::Void _OnGroupLoaded(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__ONGROUPLOADED_OFFSET))(this, a1);
	}

	::System::Void _OnGroupUnloaded(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__ONGROUPUNLOADED_OFFSET))(this, a1);
	}

	static ::System::Void _UnionHashSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_OFFSET))(a1, a2);
	}

	static ::System::Void _UnionHashSet_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_1_OFFSET))(a1, a2);
	}

	static ::System::Void _CalculateOtherFloorGroupActiveState_MissionGroup(::Class_1_70A2BED4C4737BFB* a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
	{
		return ((::System::Void(*)(::Class_1_70A2BED4C4737BFB*, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_70A2BED4C4737BFB* CalculateOtherFloorMissionGroupsActiveState(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::Class_1_70A2BED4C4737BFB*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET))(a1, a2);
	}

	static ::Class_1_A5C7D9C380EAC2CB* CalculateOtherFloorMissionGroupsLoadState_PerFloorSpaceConflict(::Class_1_70A2BED4C4737BFB* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::Class_1_A5C7D9C380EAC2CB*(*)(::Class_1_70A2BED4C4737BFB*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>* CalculateOtherFloorMissionGroupsLoadState_CombineNpcConflict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A5C7D9C380EAC2CB*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* _CollectAllOtherFloorsMainMissions(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET))(a1);
	}

	::System::Void _UpdateConflictView_b__26_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET))(this);
	}
};
