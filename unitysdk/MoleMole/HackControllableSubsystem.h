#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3F4FB6282B36F272.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/HackControllableSubsystem___c__DisplayClass27_0.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace MoleMole::Config { class ControllableObjectTrait; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CLEARMONSTERALERTVALUEFORINVINCIBLEAVATAR_OFFSET UNITYSDK_OFFSET(0x13EEC2C0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENDTRANSITION_OFFSET UNITYSDK_OFFSET(0x13EEBE00)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCONTROLLABLECAMERA_OFFSET UNITYSDK_OFFSET(0x13EEB430)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCURRENTCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13EE9480)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCAMERAHACKSTATE_OFFSET UNITYSDK_OFFSET(0x13EEC140)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCONTROLLABLEMANUALLY_OFFSET UNITYSDK_OFFSET(0x13EECC40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLEBACKTOAVATAR_OFFSET UNITYSDK_OFFSET(0x13EE7430)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13EE9180)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLESTATECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x13EE9DA0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x13EEAD70)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARCAMERASWITCHTIME_OFFSET UNITYSDK_OFFSET(0x13EEACC0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAINITAIMTARGET_OFFSET UNITYSDK_OFFSET(0x13EE8130)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x13EE7DB0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERASWITCHTIME_OFFSET UNITYSDK_OFFSET(0x13EEAC10)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMENTITY_OFFSET UNITYSDK_OFFSET(0x13EE9C70)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMTRAIT_OFFSET UNITYSDK_OFFSET(0x13EE9C20)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETARGET_OFFSET UNITYSDK_OFFSET(0x13EECAC0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETYPE_OFFSET UNITYSDK_OFFSET(0x13EECB20)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EE71C0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EE7200)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EE7C80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_POSTSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x13EEA9D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EE7100)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x13EE7C40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_RESTORESAVEDCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x13EEC7E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SAVECURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x13EEAE80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDPOSSESSEVENTTOVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x13EEA900)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDUNPOSSESSEVENTTOVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x13EEC070)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETLOCALAVATARINVINCIBLE_OFFSET UNITYSDK_OFFSET(0x13EEB170)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x13EEBB60)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLEMANUALLY_OFFSET UNITYSDK_OFFSET(0x13EECBE0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13EE8730)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYCUTRETURNAVATAR_OFFSET UNITYSDK_OFFSET(0x13EEC510)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYGETCONTROLLABLECAMERACONFIGBYTRAIT_OFFSET UNITYSDK_OFFSET(0x13EE8FC0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EE7160)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EECCA0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13EECC90)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__FIRECONTROLLABLESTATECHANGEEVENT_G__SENDTELEMETRYDATAONCONTROLLABLESTATECHANGE_27_0_OFFSET UNITYSDK_OFFSET(0x13EEA290)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EECCF0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EECD30)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EECD70)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EECDB0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EECDF0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem_TypeDefinitionIndex = 80682;

	class HackControllableSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackControllableSubsystem*>
	{
	public:
		static ::System::String** StaticGet_HackControllableMuteRotateTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem_TypeDefinitionIndex)->GetStaticField(0x4D940);
		}
		static ::System::String** StaticGet_DefaultControllableConfigKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem_TypeDefinitionIndex)->GetStaticField(0x4D948);
		}
		// static const ::System::String* BackToAvatarHideToken; // 0x0
		::System::Action* _pendingOnCameraBackAvatarMoveEnd; // 0x10
		::MoleMole::EntityHandle _currentControllableTarget; // 0x18
		::System::Action* _pendingOnCameraMoveEnd; // 0x28
		::MoleMole::Config::ControllableObjectTrait* _currentControllableTrait; // 0x30
		::Foundation::ViewObject::ViewObjectHandle _currentControllableViewObject; // 0x38
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x48
		::System::Boolean _hasSavedCameraState; // 0x50
		::System::Boolean isFollowAvatar; // 0x51
		::System::Single _savedCameraElevation; // 0x54
		::System::Single _savedCameraPolar; // 0x58
		::UnityEngine::Vector3 _savedCameraPosition; // 0x5C
		::System::Int32 _avatarStreamingId; // 0x68
		::UnityEngine::Quaternion _savedCameraRotation; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))();
		}

		static ::Foundation::Variable_1<::UnityEngine::Vector3> GetCameraInitAimTarget(::MoleMole::Config::ConfigControllableObjectCommonParam* config, ::MoleMole::EntityHandle controllable, ::UnityEngine::Vector3 up)
		{
			return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::MoleMole::Config::ConfigControllableObjectCommonParam*, ::MoleMole::EntityHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAINITAIMTARGET_OFFSET))(config, controllable, up);
		}

		::System::Void SwitchToControllable(::MoleMole::Battle::Entity* controllableEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLE_OFFSET))(this, controllableEntity);
		}

		static ::Enum_3_3F4FB6282B36F272 GetControllableTypeFromEntity(::MoleMole::EntityHandle entity)
		{
			return ((::Enum_3_3F4FB6282B36F272(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMENTITY_OFFSET))(entity);
		}

		static ::Enum_3_3F4FB6282B36F272 GetControllableTypeFromTrait(::MoleMole::Config::ControllableObjectTrait* trait)
		{
			return ((::Enum_3_3F4FB6282B36F272(*)(::MoleMole::Config::ControllableObjectTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMTRAIT_OFFSET))(trait);
		}

		static ::System::Void FireControllableStateChangeEvent(::Enum_3_3F4FB6282B36F272 newType, ::Enum_3_3F4FB6282B36F272 oldType, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::Foundation::ViewObject::ViewObjectHandle previousViewObject)
		{
			return ((::System::Void(*)(::Enum_3_3F4FB6282B36F272, ::Enum_3_3F4FB6282B36F272, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLESTATECHANGEEVENT_OFFSET))(newType, oldType, viewObject, previousViewObject);
		}

		::System::Void SendPossessEventToViewObject(::MoleMole::EntityHandle previousControllable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDPOSSESSEVENTTOVIEWOBJECT_OFFSET))(this, previousControllable);
		}

		::System::Boolean TryGetControllableCameraConfigByTrait(::MoleMole::Config::ControllableObjectTrait* trait, ::MoleMole::Config::ConfigControllableObjectCommonParam*& hackControllable)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ControllableObjectTrait*, ::MoleMole::Config::ConfigControllableObjectCommonParam*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYGETCONTROLLABLECAMERACONFIGBYTRAIT_OFFSET))(this, trait, hackControllable);
		}

		::System::Void PostScreenEffect(::MoleMole::Config::ScreenEffectType screenEffectType, ::System::String* screenEffectName, ::System::Single cameraTime, ::System::Action* endEffectAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_POSTSCREENEFFECT_OFFSET))(this, screenEffectType, screenEffectName, cameraTime, endEffectAction);
		}

		::System::Single GetCameraSwitchTime(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERASWITCHTIME_OFFSET))(this, hackControllable);
		}

		::System::Single GetBackToAvatarCameraSwitchTime(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARCAMERASWITCHTIME_OFFSET))(this, hackControllable);
		}

		::UnityEngine::AnimationCurve* GetBackToAvatarAnimationCurve(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARANIMATIONCURVE_OFFSET))(this, hackControllable);
		}

		::System::Void EnterCurrentControllable(::MoleMole::EntityHandle previousControllable, ::MoleMole::Config::ConfigControllableObjectCommonParam* controllableConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCURRENTCONTROLLABLE_OFFSET))(this, previousControllable, controllableConfig);
		}

		::System::Void StartTransition(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_STARTTRANSITION_OFFSET))(this, isEnter);
		}

		::System::Void EndTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENDTRANSITION_OFFSET))(this);
		}

		::System::Void SaveCurrentCameraState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SAVECURRENTCAMERASTATE_OFFSET))(this);
		}

		::System::Void EnterControllableCamera(::MoleMole::EntityHandle entity, ::MoleMole::Config::ConfigControllableObjectCommonParam* controllableConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCONTROLLABLECAMERA_OFFSET))(this, entity, controllableConfig);
		}

		::System::Void ExitCurrentControllable(::MoleMole::EntityHandle nextPossessedEntity, ::System::Boolean isBackToAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLE_OFFSET))(this, nextPossessedEntity, isBackToAvatar);
		}

		::System::Void SetLocalAvatarInvincible(::System::Boolean invincible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETLOCALAVATARINVINCIBLE_OFFSET))(this, invincible);
		}

		static ::System::Void ClearMonsterAlertValueForInvincibleAvatar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CLEARMONSTERALERTVALUEFORINVINCIBLEAVATAR_OFFSET))();
		}

		::System::Void SendUnpossessEventToViewObject(::MoleMole::EntityHandle nextPossessedEntity, ::System::Boolean isBackToAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDUNPOSSESSEVENTTOVIEWOBJECT_OFFSET))(this, nextPossessedEntity, isBackToAvatar);
		}

		::System::Void ExitCameraHackState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCAMERAHACKSTATE_OFFSET))(this);
		}

		::System::Void ExitCurrentControllableBackToAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLEBACKTOAVATAR_OFFSET))(this);
		}

		::System::Void TryCutReturnAvatar(::System::Boolean needExitCamera, ::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYCUTRETURNAVATAR_OFFSET))(this, needExitCamera, hackControllable);
		}

		::System::Void RestoreSavedCameraState(::System::Boolean syncBlenderData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_RESTORESAVEDCAMERASTATE_OFFSET))(this, syncBlenderData);
		}

		::MoleMole::EntityHandle GetCurrentControllableTarget()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETARGET_OFFSET))(this);
		}

		::Enum_3_3F4FB6282B36F272 GetCurrentControllableType()
		{
			return ((::Enum_3_3F4FB6282B36F272(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETYPE_OFFSET))(this);
		}

		::System::Void SwitchToControllableManually(::MoleMole::Battle::Entity* entity, ::System::Action* onCameraMoveEnd)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLEMANUALLY_OFFSET))(this, entity, onCameraMoveEnd);
		}

		::System::Void ExitControllableManually(::System::Action* onCameraBackAvatarMoveEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCONTROLLABLEMANUALLY_OFFSET))(this, onCameraBackAvatarMoveEnd);
		}

		static ::System::Void _FireControllableStateChangeEvent_g__SendTelemetryDataOnControllableStateChange_27_0(::MoleMole::HackControllableSubsystem___c__DisplayClass27_0& a1)
		{
			return ((::System::Void(*)(::MoleMole::HackControllableSubsystem___c__DisplayClass27_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__FIRECONTROLLABLESTATECHANGEEVENT_G__SENDTELEMETRYDATAONCONTROLLABLESTATECHANGE_27_0_OFFSET))(a1);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
