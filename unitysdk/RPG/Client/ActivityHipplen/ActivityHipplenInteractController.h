#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenInteractController_InnerState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_349FFE7FFEC1E3D1;
class Class_1_47939AE85467CAEB;
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

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B7AB4A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7A9300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ENDINTERACT_OFFSET UNITYSDK_OFFSET(0x1B7AA2C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x1B7AB8B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETHINTTEXTID_OFFSET UNITYSDK_OFFSET(0x1B7A9C00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPS_OFFSET UNITYSDK_OFFSET(0x1B7A96E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACTPROPTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B7A91F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACT_OFFSET UNITYSDK_OFFSET(0x1B7ABF40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETISLASTINTERACTVALID_OFFSET UNITYSDK_OFFSET(0x1B7A92C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANRESTART_OFFSET UNITYSDK_OFFSET(0x1B7AC0B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x1B7AC100)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CURINTERACTPROP_OFFSET UNITYSDK_OFFSET(0x1B7AC040)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_MAINCTRLREF_OFFSET UNITYSDK_OFFSET(0x1B7AC090)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1B7A84E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7ABF80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1B7ABB40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERCOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7A91A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERINTERACTSTATECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7A9150)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7A9100)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REPORT_OFFSET UNITYSDK_OFFSET(0x1B7ABE90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESTART_OFFSET UNITYSDK_OFFSET(0x1B7ABBE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_RESUME_OFFSET UNITYSDK_OFFSET(0x1B7ABB90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SETINTERACTTRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x1B7AA540)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_CANROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x1B7AC110)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_MAINCTRLREF_OFFSET UNITYSDK_OFFSET(0x1B7AC0A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_STARTINTERACT_OFFSET UNITYSDK_OFFSET(0x1B7A9CD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1B7A8350)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTPREFABLOCATION_OFFSET UNITYSDK_OFFSET(0x1B7AA5D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x1B7AB940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7AC160)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7AA3C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AC120)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETPROGRESSINCREASERATIO_OFFSET UNITYSDK_OFFSET(0x1B7AB6E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETSHAKEPARAMS_OFFSET UNITYSDK_OFFSET(0x1B7AAAE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1B7AA050)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONINTERACTVALIDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7AB990)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7AAC10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABROTATION_OFFSET UNITYSDK_OFFSET(0x1B7AAE50)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractController_TypeDefinitionIndex = 75272;

	class ActivityHipplenInteractController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__PropStateNameHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenInteractController_TypeDefinitionIndex)->GetStaticField(0x14680);
		}
		::System::Single MaxZRotation; // 0x18
		::System::Single RotationSpeedFactor; // 0x1C
		::System::Single PropFollowCursorSpeed; // 0x20
		::System::Single ControllerMoveSpeed; // 0x24
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrlRef_k__BackingField; // 0x28
		::System::Boolean _CanRotateCamera_k__BackingField; // 0x30
		::UnityEngine::GameObject* _InteractPropRoot; // 0x38
		::Class_1_47939AE85467CAEB* _CurInteract; // 0x40
		::System::Action_1<::System::Single>* _OnProgressChanged; // 0x48
		::System::Action_1<::System::Boolean>* _OnInteractStateChanged; // 0x50
		::System::Action* _OnInteractCompleted; // 0x58
		::UnityEngine::Transform* _InteractPropPlane; // 0x60
		::System::Boolean _LastInteractValid; // 0x68
		::System::Single _CurProgress; // 0x6C
		::System::Single _CompletedCountDown; // 0x70
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractController_InnerState _State; // 0x74
		::Class_1_349FFE7FFEC1E3D1* _HipplenInstance; // 0x78
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::GameCore::HipplenInteractType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void RegisterProgressChangedCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERPROGRESSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterInteractStateChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERINTERACTSTATECHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterCompletedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_REGISTERCOMPLETEDCALLBACK_OFFSET))(this, a1);
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

		::System::Void StartInteract(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_STARTINTERACT_OFFSET))(this, a1, a2);
		}

		::System::Void EndInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ENDINTERACT_OFFSET))(this);
		}

		::System::Void SetInteractTriggerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SETINTERACTTRIGGERNAME_OFFSET))(this, a1);
		}

		::System::Void UpdateInteractPrefabLocation(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTPREFABLOCATION_OFFSET))(this, a1, a2);
		}

		::System::Void AddProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ADDPROGRESS_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_FINISH_OFFSET))(this);
		}

		::System::Void UpdateInteractValidState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_UPDATEINTERACTVALIDSTATE_OFFSET))(this, a1);
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

		::Class_1_47939AE85467CAEB* GetInteract()
		{
			return ((::Class_1_47939AE85467CAEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GETINTERACT_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _OnBeginDrag(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void _UpdateInteractPrefabPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateInteractPrefabRotation(::System::Single a1, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__UPDATEINTERACTPREFABROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__CLEAR_OFFSET))(this);
		}

		::System::Void _OnInteractValidStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__ONINTERACTVALIDSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Single _GetProgressIncreaseRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETPROGRESSINCREASERATIO_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::HipplenInteractShakeParams* _GetShakeParams(::RPG::GameCore::HipplenInteractLikeType a1)
		{
			return ((::RPG::Client::ActivityHipplen::HipplenInteractShakeParams*(*)(::PVOID, ::RPG::GameCore::HipplenInteractLikeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER__GETSHAKEPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* get_CurInteractProp()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CURINTERACTPROP_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* get_MainCtrlRef()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_MAINCTRLREF_OFFSET))(this);
		}

		::System::Void set_MainCtrlRef(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_MAINCTRLREF_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANRESTART_OFFSET))(this);
		}

		::System::Boolean get_CanRotateCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_GET_CANROTATECAMERA_OFFSET))(this);
		}

		::System::Void set_CanRotateCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER_SET_CANROTATECAMERA_OFFSET))(this, a1);
		}
	};
}
