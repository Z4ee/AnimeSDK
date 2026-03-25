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

class Class_1_0DC54D6E576BF484;
class Class_2_D8257A310CAD757C;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA402600)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA3FFF50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xA40D410)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETSTREAMINGSPATIALINFO_OFFSET UNITYSDK_OFFSET(0xA3FF6E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_ENABLESTREAMING_OFFSET UNITYSDK_OFFSET(0xA3FF650)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA40D670)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0xA40D610)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0xA40CD80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA40D630)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xA40D650)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xA40CC00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_OWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA401080)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0xA3FE1D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_SIDETYPE_OFFSET UNITYSDK_OFFSET(0xA40A640)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA40D690)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_TEMPLOADTAG_OFFSET UNITYSDK_OFFSET(0xA3FE060)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISALLCUSTOMRULEPASS_OFFSET UNITYSDK_OFFSET(0xA40CD30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPEMPTY_OFFSET UNITYSDK_OFFSET(0xA40D340)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPINSPACECONFLICTWHITELIST_OFFSET UNITYSDK_OFFSET(0xA40D390)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYREGION_OFFSET UNITYSDK_OFFSET(0xA40D820)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYVISIONRANGE_OFFSET UNITYSDK_OFFSET(0xA40D910)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISREGIONREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0xA40CCD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYCUSTOMRULE_OFFSET UNITYSDK_OFFSET(0xA40D720)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYNPCCONFLICT_OFFSET UNITYSDK_OFFSET(0xA402070)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0xA4020C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISVISIONRANGEREFRESHRULEPASS_OFFSET UNITYSDK_OFFSET(0xA40CC70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOAD_OFFSET UNITYSDK_OFFSET(0xA3FE1F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA3FA050)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0xA3F9FC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0xA401A30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETCUSTOMRULELOADSTATE_OFFSET UNITYSDK_OFFSET(0xA40D6B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINREGIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xA40D7D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINVISIONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xA40D8C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETNPCCONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xA40D780)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETSPACECONFLICTREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xA40D870)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_GROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA40D680)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSERIALID_OFFSET UNITYSDK_OFFSET(0xA40D620)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSTATUS_OFFSET UNITYSDK_OFFSET(0xA40CD90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA40D640)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xA40D660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_NPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xA40CC10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_STREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA40D6A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_1_OFFSET UNITYSDK_OFFSET(0xA40D2B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA4003C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOAD_OFFSET UNITYSDK_OFFSET(0xA3FE2D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKREGIONLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA3FA400)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKVISIONRANGELOADSTATE_OFFSET UNITYSDK_OFFSET(0xA3FA370)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_VALIDATESTATETRANSITION_OFFSET UNITYSDK_OFFSET(0xA401240)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__BUILDSTATETRANSITIONSET_OFFSET UNITYSDK_OFFSET(0xA40CE40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CHECKREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xA40CDA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CREATEGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA40D450)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4034F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__DESTROYGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA40D0E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__INITSTREAMINGTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA40CFB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__REFRESHALLNPCANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xA40C900)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_TypeDefinitionIndex = 50393;

	class RuntimeGroupManager_HoYoGroupUnit : public ::System::Object
	{
	public:
		::System::Action* OnUnload; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ConflictIDs; // 0x18
		::RPG::GameCore::GameEntity* _GroupEntity_k__BackingField; // 0x20
		::Class_2_D8257A310CAD757C* _MapGroupDef_k__BackingField; // 0x28
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x30
		::RPG::GameCore::LodTemplate* _StreamingTemplate_k__BackingField; // 0x38
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _StateTransitionSet; // 0x40
		::System::Boolean IsMissionInconsistency; // 0x48
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState _SpaceConflictRefreshState; // 0x4C
		::System::UInt32 _LoadSerialID_k__BackingField; // 0x50
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState _regionRefreshState; // 0x54
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState _InVisionRefreshState; // 0x58
		::System::UInt64 _CustomRuleLoadStateBitset; // 0x60
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _RegionLockReason; // 0x68
		::RPG::Client::ReasonBool_1<::RPG::Client::LockHoyoGroupReason> _VisionRangeLockReason; // 0x70
		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState _NpcConflictRefreshState; // 0x78
		::System::Single _NPCAnimatorSpeedRatio; // 0x7C
		::RPG::Client::RuntimeGroupManager_GroupLoadStatus _LoadStatus_k__BackingField; // 0x80
		::System::UInt32 OwnerMainMissionTemp; // 0x84

		::System::Void _ctor(::RPG::Client::MapDef* mapDef, ::Class_2_D8257A310CAD757C* mapGroupDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::Class_2_D8257A310CAD757C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__CTOR_OFFSET))(this, mapDef, mapGroupDef);
		}

		::System::Void _RefreshAllNPCAnimatorSpeedRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__REFRESHALLNPCANIMATORSPEEDRATIO_OFFSET))(this);
		}

		::System::Single get_NPCAnimatorSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_NPCANIMATORSPEEDRATIO_OFFSET))(this);
		}

		::System::Void set_NPCAnimatorSpeedRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_NPCANIMATORSPEEDRATIO_OFFSET))(this, value);
		}

		::System::Boolean get_TempLoadTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_TEMPLOADTAG_OFFSET))(this);
		}

		::RPG::Client::RuntimeGroupManager_GroupLoadStatus get_LoadStatus()
		{
			return ((::RPG::Client::RuntimeGroupManager_GroupLoadStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSTATUS_OFFSET))(this);
		}

		::System::Void set_LoadStatus(::RPG::Client::RuntimeGroupManager_GroupLoadStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupLoadStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSTATUS_OFFSET))(this, value);
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

		::System::Void Unload(::System::Boolean isComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOAD_OFFSET))(this, isComplete);
		}

		::System::Void TryStartGroupLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_OFFSET))(this);
		}

		::System::Void TryStartGroupLevelGraph_1(::System::UInt32 loadSerialID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_TRYSTARTGROUPLEVELGRAPH_1_OFFSET))(this, loadSerialID);
		}

		::System::Boolean IsGroupEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPEMPTY_OFFSET))(this);
		}

		::System::Boolean IsGroupInSpaceConflictWhitelist(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISGROUPINSPACECONFLICTWHITELIST_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetConflictIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETCONFLICTIDS_OFFSET))(this);
		}

		::Class_1_0DC54D6E576BF484* GetStreamingSpatialInfo()
		{
			return ((::Class_1_0DC54D6E576BF484*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GETSTREAMINGSPATIALINFO_OFFSET))(this);
		}

		::System::Boolean ValidateStateTransition(::System::UInt32 fromState, ::System::UInt32 toState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_VALIDATESTATETRANSITION_OFFSET))(this, fromState, toState);
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

		::System::Void _InitStreamingTemplate(::System::String* templateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT__INITSTREAMINGTEMPLATE_OFFSET))(this, templateName);
		}

		::System::UInt32 get_LoadSerialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_LOADSERIALID_OFFSET))(this);
		}

		::System::Void set_LoadSerialID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_LOADSERIALID_OFFSET))(this, value);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPDEF_OFFSET))(this);
		}

		::System::Void set_MapDef(::RPG::Client::MapDef* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPDEF_OFFSET))(this, value);
		}

		::Class_2_D8257A310CAD757C* get_MapGroupDef()
		{
			return ((::Class_2_D8257A310CAD757C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_MAPGROUPDEF_OFFSET))(this);
		}

		::System::Void set_MapGroupDef(::Class_2_D8257A310CAD757C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8257A310CAD757C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_MAPGROUPDEF_OFFSET))(this, value);
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

		::System::Void set_GroupEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_GROUPENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_EnableStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_ENABLESTREAMING_OFFSET))(this);
		}

		::RPG::GameCore::LodTemplate* get_StreamingTemplate()
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_GET_STREAMINGTEMPLATE_OFFSET))(this);
		}

		::System::Void set_StreamingTemplate(::RPG::GameCore::LodTemplate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SET_STREAMINGTEMPLATE_OFFSET))(this, value);
		}

		::System::Void SetCustomRuleLoadState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType type, ::System::Boolean isLoad)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETCUSTOMRULELOADSTATE_OFFSET))(this, type, isLoad);
		}

		::System::Boolean IsUnloadByCustomRule(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYCUSTOMRULE_OFFSET))(this, type);
		}

		::System::Boolean IsAllCustomRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISALLCUSTOMRULEPASS_OFFSET))(this);
		}

		::System::Void SetNpcConflictRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETNPCCONFLICTREFRESHSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsUnloadByNpcConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYNPCCONFLICT_OFFSET))(this);
		}

		::System::Void SetInRegionRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINREGIONREFRESHSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsRegionRefreshRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISREGIONREFRESHRULEPASS_OFFSET))(this);
		}

		::System::Void LockRegionLoadState(::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKREGIONLOADSTATE_OFFSET))(this, reason);
		}

		::System::Void UnlockRegionLoadState(::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKREGIONLOADSTATE_OFFSET))(this, reason);
		}

		::System::Boolean IsLockByRegion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYREGION_OFFSET))(this);
		}

		::System::Void SetSpaceConflictRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETSPACECONFLICTREFRESHSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsUnloadBySpaceConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISUNLOADBYSPACECONFLICT_OFFSET))(this);
		}

		::System::Void SetInVisionRefreshState(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_SETINVISIONREFRESHSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsVisionRangeRefreshRulePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISVISIONRANGEREFRESHRULEPASS_OFFSET))(this);
		}

		::System::Void LockVisionRangeLoadState(::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_LOCKVISIONRANGELOADSTATE_OFFSET))(this, reason);
		}

		::System::Void UnlockVisionRangeLoadState(::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_UNLOCKVISIONRANGELOADSTATE_OFFSET))(this, reason);
		}

		::System::Boolean IsLockByVisionRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HOYOGROUPUNIT_ISLOCKBYVISIONRANGE_OFFSET))(this);
		}
	};
}
