#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_2E2FD00CD63ADF16;
class Class_1_8B4A42FA3EE88E98;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class ScheduleMission; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xC040890)
#define RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0xC0408F0)
#define RPG_CLIENT_MISSIONSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC03DC30)
#define RPG_CLIENT_MISSIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC03DC70)
#define RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET UNITYSDK_OFFSET(0xC041660)
#define RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET UNITYSDK_OFFSET(0xC03EA60)
#define RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET UNITYSDK_OFFSET(0xC03CD50)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xC040950)
#define RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0xC040CA0)
#define RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xC03E960)
#define RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xC03D7C0)
#define RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET UNITYSDK_OFFSET(0xC00FD90)
#define RPG_CLIENT_MISSIONSYSTEM_TRYUNREGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xC03E2A0)
#define RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xC041670)
#define RPG_CLIENT_MISSIONSYSTEM__CHECKSCHEDULEMISSIONS_OFFSET UNITYSDK_OFFSET(0xC03D820)
#define RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0xC03E5A0)
#define RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC03C9F0)
#define RPG_CLIENT_MISSIONSYSTEM__INIT_OFFSET UNITYSDK_OFFSET(0xC03D4A0)
#define RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC0409D0)
#define RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xC040770)
#define RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xC040FE0)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC03FEE0)
#define RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0xC03F880)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC03FBA0)
#define RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC03F500)
#define RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0xC040F90)
#define RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0xC041470)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0xC0411A0)
#define RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0xC041300)
#define RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0xC041080)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0xC03F940)
#define RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xC03F5C0)
#define RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET UNITYSDK_OFFSET(0xC0410D0)
#define RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC040170)
#define RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC041130)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEOVERRIDEMISSIONAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xC03F0E0)
#define RPG_CLIENT_MISSIONSYSTEM__PERFORMANCEREPLAYNEEDCREATESUBMISSIONINSTANCE_OFFSET UNITYSDK_OFFSET(0xC03EE10)
#define RPG_CLIENT_MISSIONSYSTEM__REGEVENT_OFFSET UNITYSDK_OFFSET(0xC03EAC0)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xC03F190)
#define RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xC040390)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xC03DDD0)
#define RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xC0406B0)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET UNITYSDK_OFFSET(0xC03F410)
#define RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xC0407E0)
#define RPG_CLIENT_MISSIONSYSTEM__SYNCALLSCHEDULEMISSION_OFFSET UNITYSDK_OFFSET(0xC03EEB0)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGEVENT_OFFSET UNITYSDK_OFFSET(0xC03DF50)
#define RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xC040D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionSystem_TypeDefinitionIndex = 56934;

	class MissionSystem : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_MISSION_SYSTEM_MISSION_ID()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MissionSystem_TypeDefinitionIndex)->GetStaticField(0xCA50);
		}
		::RPG::Client::AdventurePhase* _AdventurePhaseRef; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8B4A42FA3EE88E98*>* _MissionInstanceWithGroupRunning; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2E2FD00CD63ADF16*>* _subMissionWayPointTrackingMap; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _ScheduleMissions; // 0x28
		::RPG::Client::MapDef* _MapDef; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _MissionsTargetInCurrentFloor; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleMission*>* _DeletedScheduleMissions; // 0x40
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x48
		::System::Boolean _HasInited; // 0x50
		::System::Boolean _HasDisposed; // 0x51
		::System::Boolean _HasRegistered; // 0x52
		::System::Boolean _DisposeSoon; // 0x53

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TRYINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_TICK_OFFSET))(this, a1);
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

		::System::Void _CreateSubMissionInstance(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__CREATESUBMISSIONINSTANCE_OFFSET))(this, a1);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Boolean IsSubMissionRunning(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_ISSUBMISSIONRUNNING_OFFSET))(this, a1);
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

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnDeleteSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETESUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONFINISHMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnDeleteMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONDELETEMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnTakenSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTAKENSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnSubMissionFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnSubMissionDelete(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSUBMISSIONDELETE_OFFSET))(this, a1);
		}

		::System::Boolean _NeedUseSnapshotAudioState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__NEEDUSESNAPSHOTAUDIOSTATE_OFFSET))(this);
		}

		::System::Void RefreshMissionAudioSetting(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_REFRESHMISSIONAUDIOSETTING_OFFSET))(this, a1, a2);
		}

		::System::Void ClearMissionAudioEmotion(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONAUDIOEMOTION_OFFSET))(this, a1);
		}

		::System::Void ClearMissionSoundEffect(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_CLEARMISSIONSOUNDEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean SetMissionAudioEmotion(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONAUDIOEMOTION_OFFSET))(this, a1);
		}

		::System::Boolean SetMissionSoundEffect(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_SETMISSIONSOUNDEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean _SetMissionAudioEmotion(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONAUDIOEMOTION_OFFSET))(this, a1);
		}

		::System::Boolean _SetMissionSoundEffectState(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__SETMISSIONSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean _IsTrackingSubmission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ISTRACKINGSUBMISSION_OFFSET))(this, a1);
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

		::System::Void _RegisterSingleSubMissionWayPoint(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, a1);
		}

		::System::Void _RemoveAndUnRegisterAllSubMissionWayPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERALLSUBMISSIONWAYPOINT_OFFSET))(this);
		}

		::System::Void _UnRegisterSingleSubMissionWayPoint(::Class_1_2E2FD00CD63ADF16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E2FD00CD63ADF16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__UNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, a1);
		}

		::System::Void _RemoveAndUnRegisterSingleSubMissionWayPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__REMOVEANDUNREGISTERSINGLESUBMISSIONWAYPOINT_OFFSET))(this, a1);
		}

		::System::Void _OnGroupRefreshEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONGROUPREFRESHEND_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshScheduleMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONREFRESHSCHEDULEMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnSyncMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONSYNCMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnTrackingMissionChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONTRACKINGMISSIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnNpcCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnNpcDestroy(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONNPCDESTROY_OFFSET))(this, a1);
		}

		::System::Void _OnMissionWayPointChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM__ONMISSIONWAYPOINTCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONSYSTEM_GET_HASINIT_OFFSET))(this);
		}
	};
}
