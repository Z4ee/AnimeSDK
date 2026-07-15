#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockHoyoGroupReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_GroupLoadStatus.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_CustomRuleType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5226E24814FA0066;
class Class_2_0748E0E1B406181B;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CLEAR_OFFSET UNITYSDK_OFFSET(0x19F20870)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x19F212D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x19F21170)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETSTREAMINGSPATIALINFO_OFFSET UNITYSDK_OFFSET(0x19F211B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_ENABLESTREAMING_OFFSET UNITYSDK_OFFSET(0x19F216D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0x19F216B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0x19F21530)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0x19F20300)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x19F21550)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x19F21570)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x19F1FF30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_OWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0x19F21590)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x19F1D3B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_SIDETYPE_OFFSET UNITYSDK_OFFSET(0x19F1D2F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x19F21760)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_TEMPLOADTAG_OFFSET UNITYSDK_OFFSET(0x19F1FFE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISALLCUSTOMRULEPASS_OFFSET UNITYSDK_OFFSET(0x19F202B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPEMPTY_OFFSET UNITYSDK_OFFSET(0x19F21040)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPINSPACECONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0x19F21090)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYREGION_OFFSET UNITYSDK_OFFSET(0x19F21A20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYVISIONRANGE_OFFSET UNITYSDK_OFFSET(0x19F21C30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISREGIONREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0x19F20250)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYCUSTOMRULE_OFFSET UNITYSDK_OFFSET(0x19F21800)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYNPCCONFLICT_OFFSET UNITYSDK_OFFSET(0x19F20150)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0x19F201A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISVISIONRANGEREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0x19F201F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOAD_OFFSET UNITYSDK_OFFSET(0x19F20AD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0x19F21900)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0x19F21B10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19F208D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETCUSTOMRULELOADSTATE_OFFSET UNITYSDK_OFFSET(0x19F21780)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINREGIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x19F218B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINVISIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x19F21AC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETNPCCONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x19F21860)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETSPACECONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x19F21A70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0x19F216C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0x19F21540)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0x19F20310)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x19F21560)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x19F21580)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x19F1FF80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x19F21770)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_1_OFFSET UNITYSDK_OFFSET(0x19F20FB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x19F20E10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19F20940)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0x19F21990)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0x19F21BA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_VALIDATESTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x19F21260)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__BUILDSTATETRANSITIONSET_OFFSET UNITYSDK_OFFSET(0x19F205D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CHECKREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x19F20320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x19F21320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F203C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__DESTROYGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x19F20C30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__INITSTREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x19F20750)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__REFRESHALLNPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x19F1FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_TypeDefinitionIndex = 59308;

	class RuntimeGroupManager_HoYoGroupUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ConflictIDs; // 0x10
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x18
		::System::Action* OnUnload; // 0x20
		::Class_2_0748E0E1B406181B* _MapGroupDef_k__BackingField; // 0x28
		::RPG::GameCore::LodTemplate* _StreamingTemplate_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _StateTransitionSet; // 0x38
		::RPG::GameCore::GameEntity* _GroupEntity_k__BackingField; // 0x40
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _RegionLockReason; // 0x48
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _VisionRangeLockReason; // 0x50
		::System::UInt32 _LoadSerialID_k__BackingField; // 0x58
		::System::UInt32 OwnerMainMissionTemp; // 0x5C
		::System::Boolean IsMissionInconsistency; // 0x60
		::RPG::Client::RuntimeGroupManager_GroupLoadStatus _LoadStatus_k__BackingField; // 0x64
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState _SpaceConflictRefreshState; // 0x68
		::System::Single _NPCAnimatorSpeedRatio; // 0x6C
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState _NpcConflictRefreshState; // 0x70
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState _InVisionRefreshState; // 0x74
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState _regionRefreshState; // 0x78
		::System::UInt64 _CustomRuleLoadStateBitset; // 0x80

		::System::Void _ctor(::RPG::Client::MapDef* a1, ::Class_2_0748E0E1B406181B* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAllNPCAnimatorSpeedRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__REFRESHALLNPCANIMATORSPEEDRATIO_OFFSET))(this);
		}

		::System::Single get_NPCAnimatorSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_NPCANIMATORSPEEDRATIO_OFFSET))(this);
		}

		::System::Void set_NPCAnimatorSpeedRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_NPCANIMATORSPEEDRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_TempLoadTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_TEMPLOADTAG_OFFSET))(this);
		}

		::RPG::Client::RuntimeGroupManager_GroupLoadStatus get_LoadStatus()
		{
			return ((::RPG::Client::RuntimeGroupManager_GroupLoadStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSTATUS_OFFSET))(this);
		}

		::System::Void set_LoadStatus(::RPG::Client::RuntimeGroupManager_GroupLoadStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupLoadStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSTATUS_OFFSET))(this, a1);
		}

		::System::Void _CheckRefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CHECKREFRESHSTATE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CLEAR_OFFSET))(this);
		}

		::System::Void OnHoyoGroupDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ONHOYOGROUPDEACTIVE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOAD_OFFSET))(this);
		}

		::System::Void Unload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void TryStartGroupLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_OFFSET))(this);
		}

		::System::Void TryStartGroupLevelGraph_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_1_OFFSET))(this, a1);
		}

		::System::Boolean IsGroupEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPEMPTY_OFFSET))(this);
		}

		::System::Boolean IsGroupInSpaceConflictWhitelist(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPINSPACECONFLICTWHITELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetConflictIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETCONFLICTIDS_OFFSET))(this);
		}

		::Class_1_5226E24814FA0066* GetStreamingSpatialInfo()
		{
			return ((::Class_1_5226E24814FA0066*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETSTREAMINGSPATIALINFO_OFFSET))(this);
		}

		::System::Boolean ValidateStateTransition(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_VALIDATESTATETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void CreateGroupEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CREATEGROUPENTITY_OFFSET))(this);
		}

		::System::Void _CreateGroupEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CREATEGROUPENTITY_OFFSET))(this);
		}

		::System::Void _DestroyGroupEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__DESTROYGROUPENTITY_OFFSET))(this);
		}

		::System::Void _BuildStateTransitionSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__BUILDSTATETRANSITIONSET_OFFSET))(this);
		}

		::System::Void _InitStreamingTemplate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__INITSTREAMINGTEMPLATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LoadSerialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSERIALID_OFFSET))(this);
		}

		::System::Void set_LoadSerialID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSERIALID_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPDEF_OFFSET))(this);
		}

		::System::Void set_MapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPDEF_OFFSET))(this, a1);
		}

		::Class_2_0748E0E1B406181B* get_MapGroupDef()
		{
			return ((::Class_2_0748E0E1B406181B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPGROUPDEF_OFFSET))(this);
		}

		::System::Void set_MapGroupDef(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPGROUPDEF_OFFSET))(this, a1);
		}

		::RPG::GameCore::RuntimeGroupInfo* get_RuntimeGroupInfo()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_RUNTIMEGROUPINFO_OFFSET))(this);
		}

		::RPG::GameCore::LevelGroupLoadSide get_SideType()
		{
			return ((::RPG::GameCore::LevelGroupLoadSide(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_SIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_OwnerMainMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_OWNERMAINMISSION_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_GroupEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_GROUPENTITY_OFFSET))(this);
		}

		::System::Void set_GroupEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_GROUPENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_ENABLESTREAMING_OFFSET))(this);
		}

		::RPG::GameCore::LodTemplate* get_StreamingTemplate()
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_STREAMINGTEMPLATE_OFFSET))(this);
		}

		::System::Void set_StreamingTemplate(::RPG::GameCore::LodTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_STREAMINGTEMPLATE_OFFSET))(this, a1);
		}

		::System::Void SetCustomRuleLoadState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETCUSTOMRULELOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsUnloadByCustomRule(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYCUSTOMRULE_OFFSET))(this, a1);
		}

		::System::Boolean IsAllCustomRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISALLCUSTOMRULEPASS_OFFSET))(this);
		}

		::System::Void SetNpcConflictRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETNPCCONFLICTREFRESHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsUnloadByNpcConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYNPCCONFLICT_OFFSET))(this);
		}

		::System::Void SetInRegionRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINREGIONREFRESHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsRegionRefreshRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISREGIONREFRESHRULEPASS_OFFSET))(this);
		}

		::System::Void LockRegionLoadState(::RPG::Client::LockHoyoGroupReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKREGIONLOADSTATE_OFFSET))(this, a1);
		}

		::System::Void UnlockRegionLoadState(::RPG::Client::LockHoyoGroupReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKREGIONLOADSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsLockByRegion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYREGION_OFFSET))(this);
		}

		::System::Void SetSpaceConflictRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETSPACECONFLICTREFRESHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsUnloadBySpaceConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYSPACECONFLICT_OFFSET))(this);
		}

		::System::Void SetInVisionRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINVISIONREFRESHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsVisionRangeRefreshRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISVISIONRANGEREFRESHRULEPASS_OFFSET))(this);
		}

		::System::Void LockVisionRangeLoadState(::RPG::Client::LockHoyoGroupReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKVISIONRANGELOADSTATE_OFFSET))(this, a1);
		}

		::System::Void UnlockVisionRangeLoadState(::RPG::Client::LockHoyoGroupReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKVISIONRANGELOADSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsLockByVisionRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYVISIONRANGE_OFFSET))(this);
		}
	};
}
