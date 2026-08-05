#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_06539F1E30FD04C9;
class Class_1_D7257ADE75A3711C;
namespace MoleMole { class UIZenkovUnLockedGameWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_QTEDOORSUBSYSTEM_DISABLEINPUT_OFFSET UNITYSDK_OFFSET(0x10821810)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x10822100)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ENTERQTESTATE_OFFSET UNITYSDK_OFFSET(0x10821280)
#define MOLEMOLE_QTEDOORSUBSYSTEM_EXITQTESTATE_OFFSET UNITYSDK_OFFSET(0x10821D50)
#define MOLEMOLE_QTEDOORSUBSYSTEM_FORCECLEANUP_OFFSET UNITYSDK_OFFSET(0x10820560)
#define MOLEMOLE_QTEDOORSUBSYSTEM_FORCEEXITAFK_OFFSET UNITYSDK_OFFSET(0x10821550)
#define MOLEMOLE_QTEDOORSUBSYSTEM_INTERRUPTQTEDOOR_OFFSET UNITYSDK_OFFSET(0x108213C0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_INVOKEFINISH_OFFSET UNITYSDK_OFFSET(0x10822760)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x108209B0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_NOTIFYRESULTANIMFINISHED_OFFSET UNITYSDK_OFFSET(0x10821500)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10820400)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONCIRCLESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x10822430)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10820440)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONENTITYBEINGHIT_OFFSET UNITYSDK_OFFSET(0x10822200)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONHITRESULT_OFFSET UNITYSDK_OFFSET(0x10822510)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONNEWROUND_OFFSET UNITYSDK_OFFSET(0x10822620)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONPLAYERPRESS_OFFSET UNITYSDK_OFFSET(0x108214A0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x10822680)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x10822710)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKINTERRUPT_OFFSET UNITYSDK_OFFSET(0x10822870)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10820610)
#define MOLEMOLE_QTEDOORSUBSYSTEM_PUSHSTATETOWIDGET_OFFSET UNITYSDK_OFFSET(0x10820C20)
#define MOLEMOLE_QTEDOORSUBSYSTEM_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x10821AD0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_SETWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x10820A30)
#define MOLEMOLE_QTEDOORSUBSYSTEM_STARTQTEDOOR_OFFSET UNITYSDK_OFFSET(0x10820CB0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_SUPPRESSAFK_OFFSET UNITYSDK_OFFSET(0x108206C0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_UNREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x10821E80)
#define MOLEMOLE_QTEDOORSUBSYSTEM_UNSUBSCRIBETASKEVENTS_OFFSET UNITYSDK_OFFSET(0x108228C0)
#define MOLEMOLE_QTEDOORSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10822D00)
#define MOLEMOLE_QTEDOORSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10822CE0)
#define MOLEMOLE_QTEDOORSUBSYSTEM__ONHITRESULT_B__30_0_OFFSET UNITYSDK_OFFSET(0x10822D80)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10822DD0)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10822E60)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10822EF0)

namespace MoleMole
{
	inline static constexpr unsigned int QTEDoorSubSystem_TypeDefinitionIndex = 43708;

	class QTEDoorSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::QTEDoorSubSystem*>
	{
	public:
		static ::System::Int32* StaticGet_TriggerAFKHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12170);
		}
		static ::System::Int32* StaticGet_IdleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12174);
		}
		static ::System::Int32* StaticGet_AFK01Hash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12178);
		}
		static ::System::Int32* StaticGet_AFK02Hash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x1217C);
		}
		// static const ::System::String* InputTag; // 0x0
		// static const ::System::Single AFKExitCrossFadeDuration; // 0x0
		::System::Action_1<::System::Boolean>* _finishCallback; // 0x10
		::MoleMole::UIZenkovUnLockedGameWidgetController* _widgetController; // 0x18
		::Class_1_D7257ADE75A3711C* _currentTask; // 0x20
		::Class_1_06539F1E30FD04C9* _cachedConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ISRUNNING_OFFSET))(this);
		}

		::System::Void SetWidgetController(::MoleMole::UIZenkovUnLockedGameWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovUnLockedGameWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_SETWIDGETCONTROLLER_OFFSET))(this, widget);
		}

		::System::Void PushStateToWidget(::MoleMole::UIZenkovUnLockedGameWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovUnLockedGameWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_PUSHSTATETOWIDGET_OFFSET))(this, widget);
		}

		::System::Void StartQTEDoor(::System::Int32 configId, ::System::Action_1<::System::Boolean>* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_STARTQTEDOOR_OFFSET))(this, configId, onFinish);
		}

		::System::Void InterruptQTEDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_INTERRUPTQTEDOOR_OFFSET))(this);
		}

		::System::Void OnPlayerPress(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONPLAYERPRESS_OFFSET))(this, args);
		}

		::System::Void NotifyResultAnimFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_NOTIFYRESULTANIMFINISHED_OFFSET))(this);
		}

		::System::Void EnterQTEState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ENTERQTESTATE_OFFSET))(this);
		}

		::System::Void ExitQTEState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_EXITQTESTATE_OFFSET))(this);
		}

		::System::Void ForceExitAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_FORCEEXITAFK_OFFSET))(this);
		}

		::System::Void SuppressAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_SUPPRESSAFK_OFFSET))(this);
		}

		::System::Void DisableInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_DISABLEINPUT_OFFSET))(this);
		}

		::System::Void EnableInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void RegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_REGISTEREVENTS_OFFSET))(this);
		}

		::System::Void UnregisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_UNREGISTEREVENTS_OFFSET))(this);
		}

		::System::Void OnEntityBeingHit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONENTITYBEINGHIT_OFFSET))(this, args);
		}

		::System::Void OnCircleScaleChange(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONCIRCLESCALECHANGE_OFFSET))(this, scale);
		}

		::System::Void OnHitResult(::Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465 result, ::System::Int32 successCount, ::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7257ADE75A3711C_Enum_3_301E923FF8E63465, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONHITRESULT_OFFSET))(this, result, successCount, currentProgress, totalProgress);
		}

		::System::Void OnNewRound(::System::Int32 sizeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONNEWROUND_OFFSET))(this, sizeType);
		}

		::System::Void OnProgressUpdate(::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONPROGRESSUPDATE_OFFSET))(this, currentProgress, totalProgress);
		}

		::System::Void OnTaskComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKCOMPLETE_OFFSET))(this);
		}

		::System::Void OnTaskInterrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKINTERRUPT_OFFSET))(this);
		}

		::System::Void InvokeFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_INVOKEFINISH_OFFSET))(this, success);
		}

		::System::Void ForceCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_FORCECLEANUP_OFFSET))(this);
		}

		::System::Void UnsubscribeTaskEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_UNSUBSCRIBETASKEVENTS_OFFSET))(this);
		}

		::System::Void _OnHitResult_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__ONHITRESULT_B__30_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
