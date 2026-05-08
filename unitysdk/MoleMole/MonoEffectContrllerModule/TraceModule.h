#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BlendModeType.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TrackType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_OFFSET UNITYSDK_OFFSET(0x7D15D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_RECURSION_OFFSET UNITYSDK_OFFSET(0x7D15E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GENERATEDNEXTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x7D1600)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GETCURBULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x7D15A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_INITNEXTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x7D15F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7D1480)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x7D1490)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7D14F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSGUIDANCEMOVE_OFFSET UNITYSDK_OFFSET(0x7D1560)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACKMOVE_OFFSET UNITYSDK_OFFSET(0x7D1590)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_FIXEDSPEED_OFFSET UNITYSDK_OFFSET(0x7D1640)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_IMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x7D1650)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSTRACK_OFFSET UNITYSDK_OFFSET(0x7D1570)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_SYNCPOSITIONFROMBULLET_OFFSET UNITYSDK_OFFSET(0x7D1550)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_TRACEDATA_OFFSET UNITYSDK_OFFSET(0x7D15C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_UPDATETRACKSTATE_OFFSET UNITYSDK_OFFSET(0x7D1580)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceModule_TypeDefinitionIndex = 74589;

	struct alignas(8) TraceModule
	{
		::System::Boolean Enable; // 0x10
		::System::Int32 SampleFrequency; // 0x14
		::System::Boolean EnableRandomTrackTimeConfig; // 0x18
		::UnityEngine::Vector2 TrackTime; // 0x1C
		::UnityEngine::Vector2 StartTrackZone; // 0x24
		::UnityEngine::Vector2 EndTrackZone; // 0x2C
		::System::Single MinTrackStartDistance; // 0x34
		::MoleMole::MonoEffectContrllerModule::BlendModeType TrackBlendType; // 0x38
		::UnityEngine::AnimationCurve* BlendCurve; // 0x40
		::System::Single ForceStopTrackDistance; // 0x48
		::UnityEngine::AnimationCurve* VelocityAdditional; // 0x50
		::MoleMole::MonoEffectContrllerModule::TrackType TrackMode; // 0x58
		::System::Single AngularSpeed; // 0x5C
		::UnityEngine::AnimationCurve* AngularCurve; // 0x60
		::System::Single RedirectionTime; // 0x68
		::UnityEngine::AnimationCurve* TurnCurve; // 0x70

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void SyncPositionFromBullet(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_SYNCPOSITIONFROMBULLET_OFFSET))(this, controller);
		}

		/*
		::System::Boolean ProcessGuidanceMove(::Struct_2_24DBEDA547C4BE1D& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_24DBEDA547C4BE1D&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSGUIDANCEMOVE_OFFSET))(this, context);
		}
		*/

		::System::Void ProcessTrack(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSTRACK_OFFSET))(this, controller);
		}

		/*
		::System::Void UpdateTrackState(::Struct_2_24DBEDA547C4BE1D& context)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_24DBEDA547C4BE1D&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_UPDATETRACKSTATE_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void ProcessRuntimeTrackMove(::Struct_2_24DBEDA547C4BE1D& context)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_24DBEDA547C4BE1D&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACKMOVE_OFFSET))(this, context);
		}
		*/

		/*
		::UnityEngine::Vector3 GetCurBulletPosition(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GETCURBULLETPOSITION_OFFSET))(this, controller);
		}
		*/

		::System::Void TraceData(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_TRACEDATA_OFFSET))(this, controller);
		}

		::System::Single ExecuteFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_OFFSET))(this, controller, speed, deltaTime);
		}

		::System::Single ExecuteFragment_Recursion(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_RECURSION_OFFSET))(this, controller, speed, deltaTime);
		}

		::System::Void InitNextFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_INITNEXTFRAGMENT_OFFSET))(this, controller);
		}

		/*
		::System::Void GeneratedNextFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller, ::UnityEngine::Vector3 lastPosition, ::System::Single lastRate, ::System::Single step, ::System::Single targetDistance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GENERATEDNEXTFRAGMENT_OFFSET))(this, controller, lastPosition, lastRate, step, targetDistance);
		}
		*/

		/*
		::System::Void ProcessRuntimeTrack_FixedSpeed(::Struct_2_24DBEDA547C4BE1D& context)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_24DBEDA547C4BE1D&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_FIXEDSPEED_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void ProcessRuntimeTrack_Immediately(::Struct_2_24DBEDA547C4BE1D& context)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_24DBEDA547C4BE1D&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_IMMEDIATELY_OFFSET))(this, context);
		}
		*/
	};
}
