#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/HoYoGroupType.h"
#include "unitysdk/RPG/GameCore/HoyoGroupStreamingTemplateType.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_25A913757D0756D0;
class Class_1_EBB880A8D2C9B0D4;
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class GroupState; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCurveInfo; }
namespace RPG::GameCore { class LevelDistrictInfo; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadConditionSet; }
namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupRandomInitControl; }
namespace RPG::GameCore { class LevelGroupRandomInitInfo; }
namespace RPG::GameCore { class LevelGroupSavedValueConditionSet; }
namespace RPG::GameCore { class LevelGroupSystemUnlockConditionSet; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianV2BakedInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace RPG::GameCore { class LevelWaypointInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class RtLevelGroupInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_RUNTIMEGROUPINFO_CALCULATECONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xCE98D40)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_COLLECTALLREQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xCE99B30)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GETGROUPRANDOMINITCONTROL_OFFSET UNITYSDK_OFFSET(0xCE95FF0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AIRLINEINITPREFABPATHS_OFFSET UNITYSDK_OFFSET(0xCE98880)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ANCHORINFOS_OFFSET UNITYSDK_OFFSET(0xCE98760)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AREAANCHORNAME_OFFSET UNITYSDK_OFFSET(0xCE986C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ATMOSPHERECONDITION_OFFSET UNITYSDK_OFFSET(0xCE98B40)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AUDIENCELIST_OFFSET UNITYSDK_OFFSET(0xCE989E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_BATTLEAREAINFOS_OFFSET UNITYSDK_OFFSET(0xCE98740)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xCE988C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFIGPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCE986E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFLICTIDLIST_OFFSET UNITYSDK_OFFSET(0xCE989C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0xCE97390)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CROWDLIST_OFFSET UNITYSDK_OFFSET(0xCE98A20)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CURVEINFOS_OFFSET UNITYSDK_OFFSET(0xCE98860)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_DISTRICTINFOS_OFFSET UNITYSDK_OFFSET(0xCE98780)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ENABLEGROUPAI_OFFSET UNITYSDK_OFFSET(0xCE98720)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ENABLESTREAMING_OFFSET UNITYSDK_OFFSET(0xCE98C20)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_FORCEUNLOADCONDITION_OFFSET UNITYSDK_OFFSET(0xCE986A0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPBAKEDINFO_OFFSET UNITYSDK_OFFSET(0xCE99C70)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPCOMMONINFO_OFFSET UNITYSDK_OFFSET(0xCE98C00)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xCE98C10)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xCE98BC0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPSTATELIST_OFFSET UNITYSDK_OFFSET(0xCE98BA0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xCE988E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASFIVEDIMINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE99380)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0xCE98F90)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASRANDOMINITCONTROL_OFFSET UNITYSDK_OFFSET(0xCE96390)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HOYOTAGCONTAINER_OFFSET UNITYSDK_OFFSET(0xCE98BE0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCE98490)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISDEAFULTGROUP_OFFSET UNITYSDK_OFFSET(0xCE98620)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISDELETE_OFFSET UNITYSDK_OFFSET(0xCE98600)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISHOYOGROUP_OFFSET UNITYSDK_OFFSET(0xCE98900)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xCE98D30)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISPENDEDLOAD_OFFSET UNITYSDK_OFFSET(0xCE98AE0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISPENDEDUNLOAD_OFFSET UNITYSDK_OFFSET(0xCE98B00)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xCE98700)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE98920)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LITTLEGAMELIST_OFFSET UNITYSDK_OFFSET(0xCE98260)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADCONDITION_OFFSET UNITYSDK_OFFSET(0xCE98660)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADONINITIAL_OFFSET UNITYSDK_OFFSET(0xCE98640)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADSIDE_OFFSET UNITYSDK_OFFSET(0xCE98940)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_MAPROTATIONPOSE_OFFSET UNITYSDK_OFFSET(0xCE98F70)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_MONSTERINFOS_OFFSET UNITYSDK_OFFSET(0xCE98840)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE985E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_NPCINFOS_OFFSET UNITYSDK_OFFSET(0xCE98800)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xCE98960)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PATHWAYINFOS_OFFSET UNITYSDK_OFFSET(0xCE987A0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANLIST_OFFSET UNITYSDK_OFFSET(0xCE98A40)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANV2BAKEDLIST_OFFSET UNITYSDK_OFFSET(0xCE98A80)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANV2LIST_OFFSET UNITYSDK_OFFSET(0xCE98A60)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCE984B0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0xCE98820)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_RANDOMINITRESULTS_OFFSET UNITYSDK_OFFSET(0xCE96380)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_RANDOMINIT_OFFSET UNITYSDK_OFFSET(0xCE98980)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_REFRESHID_OFFSET UNITYSDK_OFFSET(0xCE988A0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ROTATABLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0xCE98F00)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCE98530)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SAVEDVALUECONDITION_OFFSET UNITYSDK_OFFSET(0xCE98B20)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SHOULDUNLOADONENTERFIVEDIM_OFFSET UNITYSDK_OFFSET(0xCE993A0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SMARTOBJECTINFOS_OFFSET UNITYSDK_OFFSET(0xCE987C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SPATIALCONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0xCE99D10)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_STREAMINGSPATIALINFO_OFFSET UNITYSDK_OFFSET(0xCE99D00)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_STREAMINGTEMPLATETYPE_OFFSET UNITYSDK_OFFSET(0xCE98B60)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SYSTEMUNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xCE98B80)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_UNLOADCONDITION_OFFSET UNITYSDK_OFFSET(0xCE98680)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_USECUSTOMSAVEDATA_OFFSET UNITYSDK_OFFSET(0xCE989A0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_VALUESOURCE_OFFSET UNITYSDK_OFFSET(0xCE98A00)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_GET_WAYPOINTINFOS_OFFSET UNITYSDK_OFFSET(0xCE987E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_INITFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0xCE993C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_INITLEVELLITTLEGAMEINFO_OFFSET UNITYSDK_OFFSET(0xCE98FB0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_INITMAPROTATIONPOSE_OFFSET UNITYSDK_OFFSET(0xCE98F20)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_INITROTATABLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0xCE98EB0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDCROWD_OFFSET UNITYSDK_OFFSET(0xCE96260)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDNPC_OFFSET UNITYSDK_OFFSET(0xCE96180)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDPROP_OFFSET UNITYSDK_OFFSET(0xCE961F0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITRESULTSCONTAINSCROWD_OFFSET UNITYSDK_OFFSET(0xCE962D0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_POSTINITFIVDIMINFO_OFFSET UNITYSDK_OFFSET(0xCE999D0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_GROUPBAKEDINFO_OFFSET UNITYSDK_OFFSET(0xCE99C80)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_HASFIVEDIMINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE99390)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0xCE98FA0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_MAPROTATIONPOSE_OFFSET UNITYSDK_OFFSET(0xCE98F80)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_ROTATABLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0xCE98F10)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_SET_SHOULDUNLOADONENTERFIVEDIM_OFFSET UNITYSDK_OFFSET(0xCE993B0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETENTITYBAKEDINFORAWDATA_FORDISTRICTONLY_OFFSET UNITYSDK_OFFSET(0xCE97E50)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETENTITYBAKEDINFORAWDATA_OFFSET UNITYSDK_OFFSET(0xCE97D70)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIRSTLEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xCE97930)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIVEDIMBAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xCE98330)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIVEDIMLEVELCHEATSHEET_OFFSET UNITYSDK_OFFSET(0xCE983E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELDISTRICTINFO_OFFSET UNITYSDK_OFFSET(0xCE97B90)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xCE97890)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELNPCINFO_OFFSET UNITYSDK_OFFSET(0xCE973B0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELPROPINFOBYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCE97A70)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELPROPINFO_OFFSET UNITYSDK_OFFSET(0xCE979D0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLITTLEGAMEINFO_OFFSET UNITYSDK_OFFSET(0xCE98000)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLITTLEGAMELEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xCE98280)
#define RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETNPCCONNECTSUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xCE97F20)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE96400)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__DORANDOMINIT_OFFSET UNITYSDK_OFFSET(0xCE95990)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__INITMONSTERDICT_OFFSET UNITYSDK_OFFSET(0xCE97590)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__INITPROPDICT_OFFSET UNITYSDK_OFFSET(0xCE97710)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__INITSPATIALCONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0xCE972E0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO__PROCESSDELETEDDATA_OFFSET UNITYSDK_OFFSET(0xCE96470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuntimeGroupInfo_TypeDefinitionIndex = 50014;

	class RuntimeGroupInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBB880A8D2C9B0D4*>* _FiveDimLevelCheatSheetDict; // 0x10
		::RPG::GameCore::RtLevelGroupInfo* _RawGroupInfo; // 0x18
		::RPG::GameCore::RtLevelGroupInstanceInfo* _RawGroupInstanceInfo; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelPropInfo*>* _PropDict; // 0x28
		::Il2CppArray<::System::UInt32>* _RandomInitControlNPCIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelDistrictInfo*>* _DistrictDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*>* _MonsterDict; // 0x40
		::Class_1_25A913757D0756D0* _StreamingSpatialInfo; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SpatialConflictWhitelist; // 0x50
		::RPG::GameCore::LevelGroupBakedInfo* _GroupBakedInfo; // 0x58
		::Il2CppArray<::System::UInt32>* _RandomInitControlPropIDs; // 0x60
		::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>* _RandomInitResults; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimBakedLevelConfig*>* _BakedLevelConfigDict; // 0x70
		::Il2CppArray<::System::UInt32>* _RandomInitControlCrowdIDs; // 0x78
		::RPG::GameCore::RtLevelGroupInstanceCommonInfo* _RawGroupInstanceCommonInfo; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNPCInfo*>* _NPCDict; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*>* _LittleGameLevelConfigDict; // 0x90
		::System::UInt32 _MapRotationPose_k__BackingField; // 0x98
		::System::Boolean _HasLevelLittleGame_k__BackingField; // 0x9C
		::System::Boolean _ShouldUnloadOnEnterFiveDim_k__BackingField; // 0x9D
		::System::Boolean _HasFiveDimInstance_k__BackingField; // 0x9E
		::System::Int32 _RotatableRegionIndex_k__BackingField; // 0xA0

		::System::Void _ctor(::RPG::GameCore::RtLevelGroupInstanceCommonInfo* a1, ::RPG::GameCore::RtLevelGroupInstanceInfo* a2, ::RPG::GameCore::RtLevelGroupInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*, ::RPG::GameCore::RtLevelGroupInstanceInfo*, ::RPG::GameCore::RtLevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoRandomInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__DORANDOMINIT_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupRandomInitControl* GetGroupRandomInitControl(::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::LevelGroupRandomInitControl*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GETGROUPRANDOMINITCONTROL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsRandomInitControlledNPC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDNPC_OFFSET))(this, a1);
		}

		::System::Boolean IsRandomInitControlledProp(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDPROP_OFFSET))(this, a1);
		}

		::System::Boolean IsRandomInitControlledCrowd(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITCONTROLLEDCROWD_OFFSET))(this, a1);
		}

		::System::Boolean IsRandomInitResultsContainsCrowd(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_ISRANDOMINITRESULTSCONTAINSCROWD_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>* get_RandomInitResults()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_RANDOMINITRESULTS_OFFSET))(this);
		}

		::System::Boolean get_HasRandomInitControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASRANDOMINITCONTROL_OFFSET))(this);
		}

		::System::Void _ProcessDeletedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__PROCESSDELETEDDATA_OFFSET))(this);
		}

		::System::Void _InitSpatialConflictWhitelist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__INITSPATIALCONFLICTWHITELIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfo* TryGetLevelNPCInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELNPCINFO_OFFSET))(this, a1);
		}

		::System::Void _InitMonsterDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__INITMONSTERDICT_OFFSET))(this);
		}

		::System::Void _InitPropDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO__INITPROPDICT_OFFSET))(this);
		}

		::RPG::GameCore::LevelMonsterInfo* TryGetLevelMonsterInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelMonsterInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELMONSTERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelMonsterInfo* TryGetFirstLevelMonsterInfo()
		{
			return ((::RPG::GameCore::LevelMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIRSTLEVELMONSTERINFO_OFFSET))(this);
		}

		::RPG::GameCore::LevelPropInfo* TryGetLevelPropInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelPropInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELPROPINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelPropInfo* TryGetLevelPropInfoByMappingInfoID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelPropInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELPROPINFOBYMAPPINGINFOID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelDistrictInfo* TryGetLevelDistrictInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelDistrictInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLEVELDISTRICTINFO_OFFSET))(this, a1);
		}

		::System::Void TryGetEntityBakedInfoRawData(::System::UInt32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::UInt32& a4, ::System::UInt32& a5, ::Il2CppArray<::System::UInt32>*& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETENTITYBAKEDINFORAWDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void TryGetEntityBakedInfoRawData_ForDistrictOnly(::System::UInt32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETENTITYBAKEDINFORAWDATA_FORDISTRICTONLY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetNPCConnectSubMissionList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETNPCCONNECTSUBMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Boolean TryGetLittleGameInfo(::RPG::GameCore::LevelLittleGameInfo*& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLITTLEGAMEINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetLittleGameLevelConfig(::System::UInt32 a1, ::RPG::GameCore::LittleGameLevelConfig*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETLITTLEGAMELEVELCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetFiveDimBakedLevelConfig(::System::UInt32 a1, ::RPG::GameCore::FiveDimBakedLevelConfig*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FiveDimBakedLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIVEDIMBAKEDLEVELCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetFiveDimLevelCheatSheet(::System::UInt32 a1, ::Class_1_EBB880A8D2C9B0D4*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_EBB880A8D2C9B0D4*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_TRYGETFIVEDIMLEVELCHEATSHEET_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_INSTANCEID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ROTATION_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsDelete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISDELETE_OFFSET))(this);
		}

		::System::Boolean get_IsDeafultGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISDEAFULTGROUP_OFFSET))(this);
		}

		::System::Boolean get_LoadOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADONINITIAL_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupMissionConditionSet* get_LoadCondition()
		{
			return ((::RPG::GameCore::LevelGroupMissionConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADCONDITION_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupMissionConditionSet* get_UnloadCondition()
		{
			return ((::RPG::GameCore::LevelGroupMissionConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_UNLOADCONDITION_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupMissionConditionSet* get_ForceUnloadCondition()
		{
			return ((::RPG::GameCore::LevelGroupMissionConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_FORCEUNLOADCONDITION_OFFSET))(this);
		}

		::System::String* get_AreaAnchorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AREAANCHORNAME_OFFSET))(this);
		}

		::System::String* get_ConfigPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFIGPREFABPATH_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Boolean get_EnableGroupAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ENABLEGROUPAI_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* get_BattleAreaInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_BATTLEAREAINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>* get_AnchorInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ANCHORINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelDistrictInfo*>* get_DistrictInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelDistrictInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_DISTRICTINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPathwayInfo*>* get_PathwayInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPathwayInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PATHWAYINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelSmartObjectInfo*>* get_SmartObjectInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelSmartObjectInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SMARTOBJECTINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelWaypointInfo*>* get_WaypointInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelWaypointInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_WAYPOINTINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelNPCInfo*>* get_NpcInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelNPCInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_NPCINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPropInfo*>* get_PropInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPropInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PROPINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelMonsterInfo*>* get_MonsterInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelMonsterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_MONSTERINFOS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelCurveInfo*>* get_CurveInfos()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelCurveInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CURVEINFOS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AirlineInitPrefabPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AIRLINEINITPREFABPATHS_OFFSET))(this);
		}

		::System::UInt32 get_RefreshID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_REFRESHID_OFFSET))(this);
		}

		::RPG::GameCore::GroupCategory get_Category()
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::HoYoGroupType get_GroupType()
		{
			return ((::RPG::GameCore::HoYoGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsHoyoGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISHOYOGROUP_OFFSET))(this);
		}

		::System::String* get_LevelGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LEVELGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupLoadSide get_LoadSide()
		{
			return ((::RPG::GameCore::LevelGroupLoadSide(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LOADSIDE_OFFSET))(this);
		}

		::System::UInt32 get_OwnerMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_OWNERMAINMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupRandomInitInfo* get_RandomInit()
		{
			return ((::RPG::GameCore::LevelGroupRandomInitInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_RANDOMINIT_OFFSET))(this);
		}

		::System::Boolean get_UseCustomSaveData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_USECUSTOMSAVEDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ConflictIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFLICTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelAudienceInfo*>* get_AudienceList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelAudienceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_AUDIENCELIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_ValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_VALUESOURCE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* get_CrowdList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CROWDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* get_PedestrianList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* get_PedestrianV2List()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANV2LIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* get_PedestrianV2BakedList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_PEDESTRIANV2BAKEDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelLittleGameInfo*>* get_LittleGameList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelLittleGameInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_LITTLEGAMELIST_OFFSET))(this);
		}

		::System::Boolean get_IsPendedLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISPENDEDLOAD_OFFSET))(this);
		}

		::System::Boolean get_IsPendedUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISPENDEDUNLOAD_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupSavedValueConditionSet* get_SavedValueCondition()
		{
			return ((::RPG::GameCore::LevelGroupSavedValueConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SAVEDVALUECONDITION_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet* get_AtmosphereCondition()
		{
			return ((::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ATMOSPHERECONDITION_OFFSET))(this);
		}

		::RPG::GameCore::HoyoGroupStreamingTemplateType get_StreamingTemplateType()
		{
			return ((::RPG::GameCore::HoyoGroupStreamingTemplateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_STREAMINGTEMPLATETYPE_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupSystemUnlockConditionSet* get_SystemUnlockCondition()
		{
			return ((::RPG::GameCore::LevelGroupSystemUnlockConditionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SYSTEMUNLOCKCONDITION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::GroupState*>* get_GroupStateList()
		{
			return ((::Il2CppArray<::RPG::GameCore::GroupState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPSTATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GroupPropertyConfig*>* get_GroupPropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GroupPropertyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPPROPERTYMAP_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ConflictWhiteList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_CONFLICTWHITELIST_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* get_HoyoTagContainer()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HOYOTAGCONTAINER_OFFSET))(this);
		}

		::RPG::GameCore::RtLevelGroupInstanceCommonInfo* get_GroupCommonInfo()
		{
			return ((::RPG::GameCore::RtLevelGroupInstanceCommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPCOMMONINFO_OFFSET))(this);
		}

		::RPG::GameCore::RtLevelGroupInfo* get_GroupInfo()
		{
			return ((::RPG::GameCore::RtLevelGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPINFO_OFFSET))(this);
		}

		::System::Boolean get_EnableStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ENABLESTREAMING_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CalculateConflictIDs(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_CALCULATECONFLICTIDS_OFFSET))(a1);
		}

		::System::Boolean get_IsInRotatableRegion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ISINROTATABLEREGION_OFFSET))(this);
		}

		::System::Void InitRotatableRegionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_INITROTATABLEREGIONINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_RotatableRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_ROTATABLEREGIONINDEX_OFFSET))(this);
		}

		::System::Void set_RotatableRegionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_ROTATABLEREGIONINDEX_OFFSET))(this, a1);
		}

		::System::Void InitMapRotationPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_INITMAPROTATIONPOSE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapRotationPose()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_MAPROTATIONPOSE_OFFSET))(this);
		}

		::System::Void set_MapRotationPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_MAPROTATIONPOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLevelLittleGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASLEVELLITTLEGAME_OFFSET))(this);
		}

		::System::Void set_HasLevelLittleGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_HASLEVELLITTLEGAME_OFFSET))(this, a1);
		}

		::System::Void InitLevelLittleGameInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_INITLEVELLITTLEGAMEINFO_OFFSET))(this);
		}

		::System::Boolean get_HasFiveDimInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_HASFIVEDIMINSTANCE_OFFSET))(this);
		}

		::System::Void set_HasFiveDimInstance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_HASFIVEDIMINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldUnloadOnEnterFiveDim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SHOULDUNLOADONENTERFIVEDIM_OFFSET))(this);
		}

		::System::Void set_ShouldUnloadOnEnterFiveDim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_SHOULDUNLOADONENTERFIVEDIM_OFFSET))(this, a1);
		}

		::System::Void InitFiveDimInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_INITFIVEDIMINFO_OFFSET))(this);
		}

		::System::Void PostInitFivDimInfo(::RPG::GameCore::LevelFloorBakedInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_POSTINITFIVDIMINFO_OFFSET))(this, a1);
		}

		::System::Void CollectAllRequireSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_COLLECTALLREQUIRESUBMISSIONIDS_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGroupBakedInfo* get_GroupBakedInfo()
		{
			return ((::RPG::GameCore::LevelGroupBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_GROUPBAKEDINFO_OFFSET))(this);
		}

		::System::Void set_GroupBakedInfo(::RPG::GameCore::LevelGroupBakedInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupBakedInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_SET_GROUPBAKEDINFO_OFFSET))(this, a1);
		}

		::Class_1_25A913757D0756D0* get_StreamingSpatialInfo()
		{
			return ((::Class_1_25A913757D0756D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_STREAMINGSPATIALINFO_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SpatialConflictWhitelist()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO_GET_SPATIALCONFLICTWHITELIST_OFFSET))(this);
		}
	};
}
