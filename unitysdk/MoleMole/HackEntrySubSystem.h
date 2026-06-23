#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CameraHackOperateType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackEntrySubSystemMode.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_InteractState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class HackControllableSubsystem; }
namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHack; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_ALLOCATEHITTARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x182EC970)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_APPLYCAMERAHACKMODEVISUALS_OFFSET UNITYSDK_OFFSET(0x182EED70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_1_OFFSET UNITYSDK_OFFSET(0x182E95F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_OFFSET UNITYSDK_OFFSET(0x182EC7B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKBLOCKWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x182EB0C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETINTERACTDISTANCEANDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0x182EAB50)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETVALID_OFFSET UNITYSDK_OFFSET(0x182EA7B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKIGNOREBLOCKTAG_OFFSET UNITYSDK_OFFSET(0x182ECAB0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINSCREENRANGE_OFFSET UNITYSDK_OFFSET(0x182EB6A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINTERACTWITHMODE_OFFSET UNITYSDK_OFFSET(0x182EFC90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_COLLECTALLHACKTARGETS_OFFSET UNITYSDK_OFFSET(0x182E5670)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ENDINTERACT_OFFSET UNITYSDK_OFFSET(0x182ED610)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETHACKTARGETVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x182EDC30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETINTERACTPROGRESS_OFFSET UNITYSDK_OFFSET(0x182ECD90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETMAXINDICATORCOUNTFORCURRENTMODE_OFFSET UNITYSDK_OFFSET(0x182EA5D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETPRIORITYCENTERVIEWPORTBYMODE_OFFSET UNITYSDK_OFFSET(0x182EA230)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GETRANGECENTERVIEWPORTBYMODE_OFFSET UNITYSDK_OFFSET(0x182EA400)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_BUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182E4A20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_CURRENTSUBSYSTEMSYSTEMMODE_OFFSET UNITYSDK_OFFSET(0x182E4970)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_INTERACTIVE_OFFSET UNITYSDK_OFFSET(0x182E4980)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_ISHACKFUNCTIONEFFECTIVEUNLOCK_OFFSET UNITYSDK_OFFSET(0x182E4910)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_GET_SELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x182E4BC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGETMANUALLY_OFFSET UNITYSDK_OFFSET(0x182EBE20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISCAMERASCANTARGET_OFFSET UNITYSDK_OFFSET(0x182E4A30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x182E8720)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINTERACTINGTARGET_OFFSET UNITYSDK_OFFSET(0x182ECD30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISINZIPLINE_OFFSET UNITYSDK_OFFSET(0x182EC550)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANOREAVESDROPTARGET_OFFSET UNITYSDK_OFFSET(0x182EB880)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANTARGET_OFFSET UNITYSDK_OFFSET(0x182E4B40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDFORINTERACTUI_OFFSET UNITYSDK_OFFSET(0x182ECF80)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDINCAMERAHACKMODE_OFFSET UNITYSDK_OFFSET(0x182ECF10)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELINTERACTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x182ED6E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELSELECTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x182EA040)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYFOCUSSELECTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x182EB910)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYHACKPOINTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x182EA9B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTLOSEFOCUS_OFFSET UNITYSDK_OFFSET(0x182EBB80)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x182ED8E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYSTARTINTERACTHACKPOINT_OFFSET UNITYSDK_OFFSET(0x182ED310)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x182E4BD0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0x182EE600)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCANCELLEDIFPENDING_OFFSET UNITYSDK_OFFSET(0x182EEFC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x182EEC10)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x182EE4C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET UNITYSDK_OFFSET(0x182EE560)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONCONTROLLABLETARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x182EF800)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182E5DB0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x182E8DE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x182E90C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x182E8D60)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x182EBCA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUILOCKCHANGED_OFFSET UNITYSDK_OFFSET(0x182EC330)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x182EC160)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182E6880)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHALLHACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0x182E6D40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHFUNCTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x182E53F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHHACKTARGET_OFFSET UNITYSDK_OFFSET(0x182EC090)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x182E59B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x182E6490)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SENDTELEMETRYDATAONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x182EDDA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETALLTARGETEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x182EE740)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x182EC500)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETLOCALAVATAROCCLUDEDOVERLAY_OFFSET UNITYSDK_OFFSET(0x182EF130)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETSYSTEMMODE_OFFSET UNITYSDK_OFFSET(0x182EEDE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SETTARGETBREATHINGEFFECT_OFFSET UNITYSDK_OFFSET(0x182E8A90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SHOULDHIDEINTERACTPOINTTIPS_OFFSET UNITYSDK_OFFSET(0x182ECFF0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_SORTBYCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x182ECC40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_STARTINTERACT_OFFSET UNITYSDK_OFFSET(0x182ED220)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TICKINTERACTPROGRESS_OFFSET UNITYSDK_OFFSET(0x182E8690)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYGETHACKTARGETDATA_OFFSET UNITYSDK_OFFSET(0x182EE3E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYREGISTERHACKTARGET_OFFSET UNITYSDK_OFFSET(0x182EC010)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYRESOLVEPENDINGSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x182E9AE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCANAFTERDETAILFADEIN_OFFSET UNITYSDK_OFFSET(0x182EDB00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCAN_OFFSET UNITYSDK_OFFSET(0x182EDB50)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_TRYUNREGISTERHACKTARGET_OFFSET UNITYSDK_OFFSET(0x182EC100)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x182E66A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x182EFEC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182EFD40)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x182EFEE0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182EFF70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x182F0000)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182F0090)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x182F0120)
#define MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x182F01B0)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_TypeDefinitionIndex = 83312;

	class HackEntrySubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackEntrySubSystem*>
	{
	public:
		static ::System::Single* StaticGet_tickTimeSpan()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HackEntrySubSystem_TypeDefinitionIndex)->GetStaticField(0x11B30);
		}
		static ::System::Int32* StaticGet_HackInteractPriority()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackEntrySubSystem_TypeDefinitionIndex)->GetStaticField(0x11B34);
		}
		// static const ::System::String* InteractTag; // 0x0
		::MoleMole::HackEntrySubSystem_HackTarget* selectedTarget; // 0x10
		::MoleMole::HackControllableSubsystem* _hackControllableSubsystem; // 0x18
		::MoleMole::HackEntrySubSystem_HackTarget* pendingWaitFocusSelectEffectTarget; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::HackEntrySubSystem_HackTarget*>* visableSortHackTargetList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hackTargetIndexDic; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::HackEntrySubSystem_HackTarget*>* hackTargetList; // 0x38
		::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode _systemMode; // 0x40
		::System::Single tickTimer; // 0x44
		::System::UInt32 _cameraHackTransitionToken; // 0x48
		::System::Boolean _forceUnlock; // 0x4C
		::System::Boolean _buttonInteractable; // 0x4D
		::System::Boolean isInteractSkillActive; // 0x4E
		::System::Boolean enableInteract; // 0x4F
		::System::Boolean _cameraHackTransitionHideEffects; // 0x50
		::System::Boolean _isNewOpenHackEntrySubSystem; // 0x51
		::System::Boolean isHackFunctionUnlock; // 0x52
		::UnityEngine::LayerMask blockLayerMask; // 0x54
		::MoleMole::HackEntrySubSystem_InteractState currentSelectInteractState; // 0x58
		::System::Single interactTimer; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsHackFunctionEffectiveUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_ISHACKFUNCTIONEFFECTIVEUNLOCK_OFFSET))(this);
		}

		::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode get_CurrentSubSystemSystemMode()
		{
			return ((::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_CURRENTSUBSYSTEMSYSTEMMODE_OFFSET))(this);
		}

		::System::Boolean get_Interactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_INTERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_ButtonInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_BUTTONINTERACTABLE_OFFSET))(this);
		}

		::System::Boolean IsCameraScanTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISCAMERASCANTARGET_OFFSET))(this, target);
		}

		::MoleMole::HackEntrySubSystem_HackTarget* get_SelectedTarget()
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GET_SELECTEDTARGET_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREADY_OFFSET))(this, entityId);
		}

		::System::Void OnEntityRemove(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONENTITYREMOVE_OFFSET))(this, entityId);
		}

		::System::Void RefreshAllHackTargetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHALLHACKTARGETSTATE_OFFSET))(this);
		}

		::System::Void TickInteractProgress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TICKINTERACTPROGRESS_OFFSET))(this, deltaTime);
		}

		static ::System::Boolean IsScanTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANTARGET_OFFSET))(target);
		}

		static ::System::Boolean IsScanOrEavesdropTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISSCANOREAVESDROPTARGET_OFFSET))(target);
		}

		::System::Int32 GetMaxIndicatorCountForCurrentMode(::MoleMole::Config::ConfigHack* config)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETMAXINDICATORCOUNTFORCURRENTMODE_OFFSET))(this, config);
		}

		::System::Void HackTargetManually(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGETMANUALLY_OFFSET))(this, entity);
		}

		::System::Void TryRegisterHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYREGISTERHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void RefreshHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void TryUnregisterHackTarget(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYUNREGISTERHACKTARGET_OFFSET))(this, entity);
		}

		::System::Void OnUnlock(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUNLOCK_OFFSET))(this, obj);
		}

		::System::Void OnUILockChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONUILOCKCHANGED_OFFSET))(this, obj);
		}

		::System::Void SetForceUnlock(::System::Boolean forceUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETFORCEUNLOCK_OFFSET))(this, forceUnlock);
		}

		::System::Void RefreshFunctionUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHFUNCTIONUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsInZipLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINZIPLINE_OFFSET))(this);
		}

		::System::Boolean IsInEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_REFRESHINTERACTSTATE_OFFSET))(this);
		}

		::System::Void CollectAllHackTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_COLLECTALLHACKTARGETS_OFFSET))(this);
		}

		::System::Void CheckAndAddHackTarget(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* entityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_OFFSET))(this, entityList);
		}

		::System::Boolean CheckAndAddHackTarget_1(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKANDADDHACKTARGET_1_OFFSET))(this, entity);
		}

		::System::Void CheckHackTargetInteractDistanceAndCameraAngle(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector3 cameraForward, ::Class_3_DFD5D1FDB9D2A4AC* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETINTERACTDISTANCEANDCAMERAANGLE_OFFSET))(this, hackTarget, cameraPos, cameraForward, modelComponent);
		}

		static ::UnityEngine::Vector2 GetPriorityCenterViewportByMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode, ::MoleMole::Config::ConfigHack* config)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETPRIORITYCENTERVIEWPORTBYMODE_OFFSET))(mode, config);
		}

		static ::UnityEngine::Vector2 GetRangeCenterViewportByMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode, ::MoleMole::Config::ConfigHack* config)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETRANGECENTERVIEWPORTBYMODE_OFFSET))(mode, config);
		}

		::System::Boolean CheckInScreenRange(::UnityEngine::Camera* camera, ::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::System::Single majorAxisLength, ::System::Single minorAxisLength, ::System::Single centerX, ::System::Single centerY)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINSCREENRANGE_OFFSET))(this, camera, hackTarget, majorAxisLength, minorAxisLength, centerX, centerY);
		}

		::System::Boolean CheckBlockWithCamera(::UnityEngine::Vector3 cameraPos, ::MoleMole::HackEntrySubSystem_HackTarget* hackTarget, ::UnityEngine::LayerMask blockLayerMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::HackEntrySubSystem_HackTarget*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKBLOCKWITHCAMERA_OFFSET))(this, cameraPos, hackTarget, blockLayerMask);
		}

		::System::Boolean CheckIgnoreBlockTag(::UnityEngine::Collider* collider, ::System::Collections::Generic::HashSet_1<::System::String*>* ignoreTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKIGNOREBLOCKTAG_OFFSET))(this, collider, ignoreTags);
		}

		static ::System::Int32 SortByCameraDistance(::MoleMole::HackEntrySubSystem_HackTarget* a, ::MoleMole::HackEntrySubSystem_HackTarget* b)
		{
			return ((::System::Int32(*)(::MoleMole::HackEntrySubSystem_HackTarget*, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SORTBYCAMERADISTANCE_OFFSET))(a, b);
		}

		::System::Boolean IsInteractingTarget(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISINTERACTINGTARGET_OFFSET))(this, target);
		}

		::System::Single GetInteractProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETINTERACTPROGRESS_OFFSET))(this);
		}

		::System::Boolean IsTargetFocusedInCameraHackMode(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDINCAMERAHACKMODE_OFFSET))(this, target);
		}

		::System::Boolean IsTargetFocusedForInteractUI(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ISTARGETFOCUSEDFORINTERACTUI_OFFSET))(this, target);
		}

		::System::Boolean ShouldHideInteractPointTips(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SHOULDHIDEINTERACTPOINTTIPS_OFFSET))(this, target);
		}

		::System::Void NotifyHackPointStateChange(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYHACKPOINTSTATECHANGE_OFFSET))(this, hackTarget);
		}

		::System::Void StartInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_STARTINTERACT_OFFSET))(this);
		}

		::System::Void EndInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ENDINTERACT_OFFSET))(this);
		}

		::System::Void OnInteractSuccess(::System::UInt32 hackTargetId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONINTERACTSUCCESS_OFFSET))(this, hackTargetId);
		}

		::System::Void TryStartAutoCameraScanAfterDetailFadeIn(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCANAFTERDETAILFADEIN_OFFSET))(this, target);
		}

		::System::Void TryStartAutoCameraScan(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYSTARTAUTOCAMERASCAN_OFFSET))(this, target);
		}

		static ::Foundation::ViewObject::ViewObjectHandle GetHackTargetViewObject(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_GETHACKTARGETVIEWOBJECT_OFFSET))(target);
		}

		::System::Void NotifyFocusSelectHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYFOCUSSELECTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyCancelSelectHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELSELECTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyStartInteractHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYSTARTINTERACTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyCancelInteractHackPoint(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYCANCELINTERACTHACKPOINT_OFFSET))(this, target);
		}

		::System::Void NotifyInteractSuccess(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTSUCCESS_OFFSET))(this, target);
		}

		::System::Void NotifyInteractLoseFocus(::MoleMole::HackEntrySubSystem_HackTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_NOTIFYINTERACTLOSEFOCUS_OFFSET))(this, target);
		}

		::System::Void SendTelemetryDataOnInteractSuccess(::MoleMole::HackEntrySubSystem_HackTarget* target, ::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SENDTELEMETRYDATAONINTERACTSUCCESS_OFFSET))(this, target, viewObject);
		}

		::MoleMole::HackEntrySubSystem_HackTarget* TryGetHackTargetData(::System::UInt32 hackTargetId)
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYGETHACKTARGETDATA_OFFSET))(this, hackTargetId);
		}

		::System::Void OnCommonSkillActive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnCommonSkillInactive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET))(this, arg);
		}

		::System::UInt32 OnCameraHackModeTransitionBegin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void OnCameraHackModeTransitionComplete(::System::UInt32 transitionToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCOMPLETE_OFFSET))(this, transitionToken);
		}

		::System::Void OnCameraHackModeTransitionCancelledIfPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCAMERAHACKMODETRANSITIONCANCELLEDIFPENDING_OFFSET))(this);
		}

		::System::Void SetSystemMode(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETSYSTEMMODE_OFFSET))(this, mode);
		}

		::System::Void SetLocalAvatarOccludedOverlay(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETLOCALAVATAROCCLUDEDOVERLAY_OFFSET))(this, enable);
		}

		::System::Void ApplyCameraHackModeVisuals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_APPLYCAMERAHACKMODEVISUALS_OFFSET))(this);
		}

		::System::Void SetAllTargetEffectsVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETALLTARGETEFFECTSVISIBLE_OFFSET))(this, visible);
		}

		::System::Void OnControllableTargetChanged(::MoleMole::EntityHandle previousTarget, ::MoleMole::EntityHandle newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ONCONTROLLABLETARGETCHANGED_OFFSET))(this, previousTarget, newTarget);
		}

		::System::Void SetTargetBreathingEffect(::MoleMole::HackEntrySubSystem_HackTarget* target, ::System::Boolean activate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SETTARGETBREATHINGEFFECT_OFFSET))(this, target, activate);
		}

		::System::Boolean CheckHackTargetValid(::MoleMole::HackEntrySubSystem_HackTarget* hackTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKHACKTARGETVALID_OFFSET))(this, hackTarget);
		}

		::System::Boolean CheckInteractWithMode(::MoleMole::Config::HackObjectTrait* trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HackObjectTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_CHECKINTERACTWITHMODE_OFFSET))(this, trait);
		}

		::System::Void TryResolvePendingSubsidiaries(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_TRYRESOLVEPENDINGSUBSIDIARIES_OFFSET))(this, entity);
		}

		static ::MoleMole::HackEntrySubSystem_HackTarget* AllocateHitTargetObject(::MoleMole::Config::CameraHackOperateType type)
		{
			return ((::MoleMole::HackEntrySubSystem_HackTarget*(*)(::MoleMole::Config::CameraHackOperateType))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_ALLOCATEHITTARGETOBJECT_OFFSET))(type);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
