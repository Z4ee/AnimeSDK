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

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A27200)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x16A24B60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x16A349D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETSTREAMINGSPATIALINFO_OFFSET UNITYSDK_OFFSET(0x16A240B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_ENABLESTREAMING_OFFSET UNITYSDK_OFFSET(0x16A23FC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0x16A34C80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0x16A34C20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0x16A342E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x16A34C40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x16A34C60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x16A34120)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_OWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0x16A25D70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x16A228A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_SIDETYPE_OFFSET UNITYSDK_OFFSET(0x16A31810)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x16A34CA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_TEMPLOADTAG_OFFSET UNITYSDK_OFFSET(0x16A22730)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISALLCUSTOMRULEPASS_OFFSET UNITYSDK_OFFSET(0x16A34290)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPEMPTY_OFFSET UNITYSDK_OFFSET(0x16A348A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPINSPACECONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0x16A348F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYREGION_OFFSET UNITYSDK_OFFSET(0x16A34E30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYVISIONRANGE_OFFSET UNITYSDK_OFFSET(0x16A34F20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISREGIONREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0x16A34230)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYCUSTOMRULE_OFFSET UNITYSDK_OFFSET(0x16A34D30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYNPCCONFLICT_OFFSET UNITYSDK_OFFSET(0x16A26CC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0x16A26D10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISVISIONRANGEREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0x16A341D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOAD_OFFSET UNITYSDK_OFFSET(0x16A228F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0x16A1E500)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0x16A1E470)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0x16A267B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETCUSTOMRULELOADSTATE_OFFSET UNITYSDK_OFFSET(0x16A34CC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINREGIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16A34DE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINVISIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16A34ED0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETNPCCONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16A34D90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETSPACECONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16A34E80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0x16A34C90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0x16A34C30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0x16A342F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x16A34C50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0x16A34C70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x16A34170)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x16A34CB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_1_OFFSET UNITYSDK_OFFSET(0x16A34810)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x16A251D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOAD_OFFSET UNITYSDK_OFFSET(0x16A22A50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0x16A1E870)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0x16A1E7E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_VALIDATESTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x16A25FA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__BUILDSTATETRANSITIONSET_OFFSET UNITYSDK_OFFSET(0x16A343A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CHECKREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16A34300)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x16A34A10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A28130)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__DESTROYGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x16A34630)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__INITSTREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0x16A34510)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__REFRESHALLNPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x16A33DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_TypeDefinitionIndex = 62143;

	class RuntimeGroupManager_HoYoGroupUnit : public ::System::Object
	{
	public:
		::System::Action* OnUnload; // 0x10
		::RPG::GameCore::LodTemplate* _StreamingTemplate_k__BackingField; // 0x18
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _StateTransitionSet; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ConflictIDs; // 0x30
		::RPG::GameCore::GameEntity* _GroupEntity_k__BackingField; // 0x38
		::Class_2_0748E0E1B406181B* _MapGroupDef_k__BackingField; // 0x40
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _VisionRangeLockReason; // 0x48
		::RPG::Client::RuntimeGroupManager_GroupLoadStatus _LoadStatus_k__BackingField; // 0x50
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState _regionRefreshState; // 0x54
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState _NpcConflictRefreshState; // 0x58
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState _SpaceConflictRefreshState; // 0x5C
		::System::UInt64 _CustomRuleLoadStateBitset; // 0x60
		::System::UInt32 OwnerMainMissionTemp; // 0x68
		::System::Boolean IsMissionInconsistency; // 0x6C
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState _InVisionRefreshState; // 0x70
		::System::Single _NPCAnimatorSpeedRatio; // 0x74
		::System::UInt32 _LoadSerialID_k__BackingField; // 0x78
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _RegionLockReason; // 0x80

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
