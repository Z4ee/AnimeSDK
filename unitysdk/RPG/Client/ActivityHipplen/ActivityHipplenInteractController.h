#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenInteractController_InnerState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4DBF4263913B7C67;
class Class_1_7E0DCA9D208905FE;
class Class_1_CFF7FC5CD9C1D292;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace RPG::Client::ActivityHipplen { class HipplenInteractCameraController; }
namespace RPG::Client::ActivityHipplen { class HipplenInteractShakeParams; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AF01F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AEE270)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ENDINTERACT_OFFSET UNITYSDK_OFFSET(0x9AEF060)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x9AF0510)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETHINTTEXTID_OFFSET UNITYSDK_OFFSET(0x9AEEB00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPS_OFFSET UNITYSDK_OFFSET(0x9AEE600)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9AEE1D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACT_OFFSET UNITYSDK_OFFSET(0x9AF0B70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETISLASTINTERACTVALID_OFFSET UNITYSDK_OFFSET(0x9AEE230)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANRESTART_OFFSET UNITYSDK_OFFSET(0x9AF0C40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x9AF0C50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CURINTERACTPROP_OFFSET UNITYSDK_OFFSET(0x9AF0C10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_MAINCTRLREF_OFFSET UNITYSDK_OFFSET(0x9AF0C20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9AED480)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9AF0BB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x9AF0740)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERCOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AEE180)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERINTERACTSTATECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AEE130)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AEE0E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REPORT_OFFSET UNITYSDK_OFFSET(0x9AF0AC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESTART_OFFSET UNITYSDK_OFFSET(0x9AF07E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESUME_OFFSET UNITYSDK_OFFSET(0x9AF0790)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SETINTERACTTRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x9AEF200)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_CANROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x9AF0C60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_MAINCTRLREF_OFFSET UNITYSDK_OFFSET(0x9AF0C30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_STARTINTERACT_OFFSET UNITYSDK_OFFSET(0x9AEEC40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x9AED370)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTPREFABLOCATION_OFFSET UNITYSDK_OFFSET(0x9AEF290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x9AF05A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AF0CB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CLEAR_OFFSET UNITYSDK_OFFSET(0x9AEF0F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF0C70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETPROGRESSINCREASERATIO_OFFSET UNITYSDK_OFFSET(0x9AF0340)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETSHAKEPARAMS_OFFSET UNITYSDK_OFFSET(0x9AEF810)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9AEEE60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONINTERACTVALIDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9AF05F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABPOSITION_OFFSET UNITYSDK_OFFSET(0x9AEF960)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABROTATION_OFFSET UNITYSDK_OFFSET(0x9AEFBA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractController_TypeDefinitionIndex = 69631;

	class ActivityHipplenInteractController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__PropStateNameHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenInteractController_TypeDefinitionIndex)->GetStaticField(0x9B30);
		}
		::System::Single MaxZRotation; // 0x18
		::System::Single RotationSpeedFactor; // 0x1C
		::System::Single PropFollowCursorSpeed; // 0x20
		::System::Single ControllerMoveSpeed; // 0x24
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrlRef_k__BackingField; // 0x28
		::System::Boolean _CanRotateCamera_k__BackingField; // 0x30
		::UnityEngine::GameObject* _InteractPropRoot; // 0x38
		::Class_1_4DBF4263913B7C67* _CurInteract; // 0x40
		::System::Action_1<::System::Single>* _OnProgressChanged; // 0x48
		::System::Action_1<::System::Boolean>* _OnInteractStateChanged; // 0x50
		::System::Action* _OnInteractCompleted; // 0x58
		::UnityEngine::Transform* _InteractPropPlane; // 0x60
		::System::Boolean _LastInteractValid; // 0x68
		::System::Single _CurProgress; // 0x6C
		::System::Single _CompletedCountDown; // 0x70
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractController_InnerState _State; // 0x74
		::Class_1_7E0DCA9D208905FE* _HipplenInstance; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>* _InteractProps; // 0x80
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* _CurInteractProp; // 0x88
		::System::Single _NormalRatio; // 0x90
		::System::Single _LikeRatio; // 0x94
		::System::Single _DislikeRatio; // 0x98
		::System::Boolean _IsPause; // 0x9C
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UsedPropIDs; // 0xA0
		::Class_1_CFF7FC5CD9C1D292* _GameReporter; // 0xA8
		::RPG::Client::ActivityHipplen::HipplenInteractCameraController* _CameraController; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*>* _FeedingShakeParamsList; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Init(::RPG::GameCore::HipplenInteractType interactType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_INIT_OFFSET))(this, interactType);
		}

		::System::Void RegisterProgressChangedCallback(::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERPROGRESSCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterInteractStateChangedCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERINTERACTSTATECHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterCompletedCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERCOMPLETEDCALLBACK_OFFSET))(this, callback);
		}

		::UnityEngine::Transform* GetInteractPropTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPTRANSFORM_OFFSET))(this);
		}

		::System::Boolean GetIsLastInteractValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETISLASTINTERACTVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>* GetInteractProps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPS_OFFSET))(this);
		}

		::RPG::Client::TextID GetHintTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETHINTTEXTID_OFFSET))(this);
		}

		::System::Void StartInteract(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* propData, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_STARTINTERACT_OFFSET))(this, propData, position);
		}

		::System::Void EndInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ENDINTERACT_OFFSET))(this);
		}

		::System::Void SetInteractTriggerName(::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SETINTERACTTRIGGERNAME_OFFSET))(this, triggerName);
		}

		::System::Void UpdateInteractPrefabLocation(::UnityEngine::Vector3 screenPosition, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTPREFABLOCATION_OFFSET))(this, screenPosition, immediate);
		}

		::System::Void AddProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ADDPROGRESS_OFFSET))(this, progress);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_FINISH_OFFSET))(this);
		}

		::System::Void UpdateInteractValidState(::System::Boolean isValid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTVALIDSTATE_OFFSET))(this, isValid);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESUME_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESTART_OFFSET))(this);
		}

		::System::Void Report()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REPORT_OFFSET))(this);
		}

		::Class_1_4DBF4263913B7C67* GetInteract()
		{
			return ((::Class_1_4DBF4263913B7C67*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACT_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _OnBeginDrag(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONBEGINDRAG_OFFSET))(this, position);
		}

		::System::Void _UpdateInteractPrefabPosition(::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3& speed, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* shakeParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABPOSITION_OFFSET))(this, targetPosition, speed, shakeParams);
		}

		::System::Void _UpdateInteractPrefabRotation(::System::Single dragSpeed, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* shakeParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABROTATION_OFFSET))(this, dragSpeed, shakeParams);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CLEAR_OFFSET))(this);
		}

		::System::Void _OnInteractValidStateChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONINTERACTVALIDSTATECHANGED_OFFSET))(this, value);
		}

		::System::Single _GetProgressIncreaseRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETPROGRESSINCREASERATIO_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* _GetShakeParams(::RPG::GameCore::HipplenInteractLikeType likeType)
		{
			return ((::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*(*)(::PVOID, ::RPG::GameCore::HipplenInteractLikeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETSHAKEPARAMS_OFFSET))(this, likeType);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* get_CurInteractProp()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CURINTERACTPROP_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* get_MainCtrlRef()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_MAINCTRLREF_OFFSET))(this);
		}

		::System::Void set_MainCtrlRef(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_MAINCTRLREF_OFFSET))(this, value);
		}

		::System::Boolean get_CanRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANRESTART_OFFSET))(this);
		}

		::System::Boolean get_CanRotateCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANROTATECAMERA_OFFSET))(this);
		}

		::System::Void set_CanRotateCamera(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_CANROTATECAMERA_OFFSET))(this, value);
		}
	};
}
