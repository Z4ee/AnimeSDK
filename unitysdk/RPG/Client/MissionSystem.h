#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_2FB4417C907E2514;
class Class_1_8B4A42FA3EE88E98;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class ScheduleMission; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xA8F2010)
#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0xA8F2070)
#define RPG_CLIENT_MISSIONSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA8EF6E0)
#define RPG_CLIENT_MISSIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8EF720)
#define RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET UNITYSDK_OFFSET(0xA8F2DC0)
#define RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET UNITYSDK_OFFSET(0xA8F0430)
#define RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET UNITYSDK_OFFSET(0xA8EE760)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xA8F20D0)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0xA8F23C0)
#define RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA8F0330)
#define RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xA8EF2E0)
#define RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET UNITYSDK_OFFSET(0xA8EEE50)
#define RPG_CLIENT_MISSIONSYSTEM_TRYUNREGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xA8EFCA0)
#define RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8F2DD0)
#define RPG_CLIENT_MISSIONSYSTEM__CHECKSCHEDULEMISSIONS_OFFSET UNITYSDK_OFFSET(0xA8EF340)
#define RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0xA8EFFE0)
#define RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA8EE410)
#define RPG_CLIENT_MISSIONSYSTEM__INIT_OFFSET UNITYSDK_OFFSET(0xA8EEF40)
#define RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA8F2150)
#define RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xA8F1EF0)
#define RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA8F2700)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA8F1630)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0xA8F10A0)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA8F1330)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA8F0DB0)
#define RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0xA8F26B0)
#define RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0xA8F2BA0)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0xA8F28C0)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0xA8F2A30)
#define RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0xA8F27A0)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0xA8F1160)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA8F0E70)
#define RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET UNITYSDK_OFFSET(0xA8F27F0)
#define RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA8F1890)
#define RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA8F2850)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEOVERRIDEMISSIONAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xA8F09E0)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEREPLAYNEEDCREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0xA8F0770)
#define RPG_CLIENT_MISSIONSYSTEM__REGEVENT_OFFSET UNITYSDK_OFFSET(0xA8F04C0)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA8F0A90)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA8F1AF0)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA8EF870)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA8F1E00)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xA8F0CC0)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xA8F1F60)
#define RPG_CLIENT_MISSIONSYSTEM__SYNCALLSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0xA8F0810)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGEVENT_OFFSET UNITYSDK_OFFSET(0xA8EF9F0)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xA8F2440)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionSystem_TypeDefinitionIndex = 56172;

	class MissionSystem : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_MISSION_SYSTEM_MISSION_ID()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MissionSystem_TypeDefinitionIndex)->GetStaticField(0x5320);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _MissionsTargetInCurrentFloor; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2FB4417C907E2514*>* _subMissionWayPointTrackingMap; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _ScheduleMissions; // 0x20
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _DeletedScheduleMissions; // 0x30
		::RPG::Client::AdventurePhase* _AdventurePhaseRef; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8B4A42FA3EE88E98*>* _MissionInstanceWithGroupRunning; // 0x40
		::RPG::Client::MapDef* _MapDef; // 0x48
		::System::Boolean _HasInited; // 0x50
		::System::Boolean _HasDisposed; // 0x51
		::System::Boolean _HasRegistered; // 0x52
		::System::Boolean _DisposeSoon; // 0x53

		::System::Void _ctor(::RPG::Client::AdventurePhase* pOwnerPhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET))(this, pOwnerPhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void TryUnregisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TRYUNREGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _CreateSubMissionInstance(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET))(this, subMissionData);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Boolean IsSubMissionRunning(::System::UInt32 subMissionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET))(this, subMissionID);
		}

		::System::Void _RegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGEVENT_OFFSET))(this);
		}

		::System::Void _UnRegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__UNREGEVENT_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__INIT_OFFSET))(this);
		}

		::System::Void _PerformanceOverrideMissionAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEOVERRIDEMISSIONAUDIOSTATE_OFFSET))(this);
		}

		::System::Boolean _PerformanceReplayNeedCreateSubMissionInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEREPLAYNEEDCREATESUBMISSIONINSTANCE_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnFinishMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTakenSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnSubMissionFinish(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET))(this, subMissionID);
		}

		::System::Void _OnSubMissionDelete(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET))(this, subMissionID);
		}

		::System::Boolean _NeedUseSnapshotAudioState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET))(this);
		}

		::System::Void RefreshMissionAudioSetting(::System::Boolean refreshEmotion, ::System::Boolean refreshSoundEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET))(this, refreshEmotion, refreshSoundEffect);
		}

		::System::Void ClearMissionAudioEmotion(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET))(this, subMissionData);
		}

		::System::Void ClearMissionSoundEffect(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET))(this, subMissionData);
		}

		::System::Boolean SetMissionAudioEmotion(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET))(this, subMissionData);
		}

		::System::Boolean SetMissionSoundEffect(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET))(this, subMissionData);
		}

		::System::Boolean _SetMissionAudioEmotion(::System::String* stateName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET))(this, stateName);
		}

		::System::Boolean _SetMissionSoundEffectState(::System::String* stateName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET))(this, stateName);
		}

		::System::Boolean _IsTrackingSubmission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET))(this, subMissionData);
		}

		::System::Void _SyncAllScheduleMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SYNCALLSCHEDULEMISSION_OFFSET))(this);
		}

		::System::Void _CheckScheduleMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CHECKSCHEDULEMISSIONS_OFFSET))(this);
		}

		::System::Void _RegisterAllSubMissionWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGISTERALLSUBMISSIONWAYPOINT_OFFSET))(this);
		}

		::System::Void _RegisterSingleSubMissionWayPoint(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, subMissionData);
		}

		::System::Void _RemoveAndUnRegisterAllSubMissionWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET))(this);
		}

		::System::Void _UnRegisterSingleSubMissionWayPoint(::Class_1_2FB4417C907E2514* wayPointInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FB4417C907E2514*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, wayPointInstance);
		}

		::System::Void _RemoveAndUnRegisterSingleSubMissionWayPoint(::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, subMissionID);
		}

		::System::Void _OnGroupRefreshEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshScheduleMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnSyncMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTrackingMissionChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnNpcCreate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET))(this, arg);
		}

		::System::Void _OnNpcDestroy(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET))(this, arg);
		}

		::System::Void _OnMissionWayPointChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET))(this, arg);
		}

		::System::Boolean get_HasInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET))(this);
		}
	};
}
