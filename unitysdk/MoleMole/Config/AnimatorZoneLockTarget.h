#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ForceSpecialCameraLockType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_SteerDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_TargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ZoneSteerType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_3_883E597458B91E77;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CANUSELOCKTARGETFORMULTIPLAYER_OFFSET UNITYSDK_OFFSET(0x192825F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x19286650)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x19286230)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x192865C0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x19283730)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x192842B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET UNITYSDK_OFFSET(0x19285F80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x19282530)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET UNITYSDK_OFFSET(0x19282540)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19284380)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19282660)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19283B80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET UNITYSDK_OFFSET(0x192837F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0x19283570)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET UNITYSDK_OFFSET(0x19284790)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19286730)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19286750)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x19286820)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x192868B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19286970)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19286A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TypeDefinitionIndex = 45158;

	class AnimatorZoneLockTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* LockTargetID; // 0x50
		::MoleMole::Config::ConfigPosRot* configPosRot; // 0x58
		::UnityEngine::AnimationCurve* CurveRotateSpeed; // 0x60
		::System::String* SelfForwardAttachPoint; // 0x68
		::UnityEngine::AnimationCurve* curveRotateSpeed; // 0x70
		::UnityEngine::AnimationCurve* AngleOffsetCurve; // 0x78
		::System::String* CameraLockModeID; // 0x80
		::System::String* BackUpLockTargetID; // 0x88
		::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType steerType; // 0x90
		::System::Boolean IgnoreJoystickSteerWhenRotSpeedZero; // 0x94
		::System::Boolean CamReLockWhenLockingSameTarget; // 0x95
		::System::Boolean ForceIgnoreAISelectTarget; // 0x96
		::System::Boolean enableTickConfigPosRot; // 0x97
		::System::Boolean UseJoystickSteerPreferred; // 0x98
		::System::Boolean MuteCamLock; // 0x99
		::System::Boolean MouseModeLockCameraRotation; // 0x9A
		::System::Boolean AllowRootMotionRotation; // 0x9B
		::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection steerDirectionType; // 0x9C
		::MoleMole::Config::AnimatorZoneLockTarget_TargetType LockTargetType; // 0xA0
		::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType ForceSpecialCameraLock; // 0xA4
		::System::Single RotateSpeedRatio; // 0xA8
		::System::Boolean NeedLockTargetOnZoneEnter; // 0xAC
		::System::Boolean ApplyRotateSpeedZone; // 0xAD
		::System::Boolean ForceReselectLockTarget; // 0xAE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnInit(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Boolean CanUseLockTargetForMultiplayer(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CANUSELOCKTARGETFORMULTIPLAYER_OFFSET))(this, entity);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single GetEntityInputRotSpeed(::MoleMole::Battle::Entity* entity, ::Class_3_883E597458B91E77* movementComponent, ::System::Boolean applyRatio)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_883E597458B91E77*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET))(this, entity, movementComponent, applyRatio);
		}

		::System::Void TickLockTargetRotate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo curStateInfo, ::System::Boolean& isLockZoneRotate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo, isLockZoneRotate);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean CheckSwitchLockLocalAvatar(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET))(this, entity);
		}

		::System::Void ProcessCamReLock(::MoleMole::Battle::Entity* self, ::Struct_2_FA5F50563E60AFBA target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET))(this, self, target);
		}

		::System::Void SetRootMotionRotationMuted(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET))(this, entity, isMute);
		}

		::System::Void EnterHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean CheckBattleArea(::MoleMole::Battle::Entity* selfEntity, ::MoleMole::Battle::Entity* monsterEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET))(this, selfEntity, monsterEntity);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnInit(::Class_3_F33F9DC5F4112336* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
