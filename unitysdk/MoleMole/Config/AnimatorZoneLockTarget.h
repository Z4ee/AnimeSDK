#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ForceSpecialCameraLockType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_SteerDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_TargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ZoneSteerType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_3_883E597458B91E77;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CANUSELOCKTARGETFORMULTIPLAYER_OFFSET UNITYSDK_OFFSET(0x11C8FEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x11C93EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x11C93AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11C93E60)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x11C90FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x11C91B50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET UNITYSDK_OFFSET(0x11C93820)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x11C8FE00)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET UNITYSDK_OFFSET(0x11C8FE10)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C91C20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11C8FF30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11C91430)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET UNITYSDK_OFFSET(0x11C910B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0x11C90E30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET UNITYSDK_OFFSET(0x11C92030)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11C93FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11C93FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x11C940C0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C94150)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11C94210)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11C942C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TypeDefinitionIndex = 60615;

	class AnimatorZoneLockTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* CurveRotateSpeed; // 0x50
		::UnityEngine::AnimationCurve* curveRotateSpeed; // 0x58
		::UnityEngine::AnimationCurve* AngleOffsetCurve; // 0x60
		::System::String* LockTargetID; // 0x68
		::System::String* BackUpLockTargetID; // 0x70
		::MoleMole::Config::ConfigPosRot* configPosRot; // 0x78
		::System::String* SelfForwardAttachPoint; // 0x80
		::System::String* CameraLockModeID; // 0x88
		::System::Boolean NeedLockTargetOnZoneEnter; // 0x90
		::System::Boolean enableTickConfigPosRot; // 0x91
		::System::Boolean ApplyRotateSpeedZone; // 0x92
		::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType ForceSpecialCameraLock; // 0x94
		::System::Boolean IgnoreJoystickSteerWhenRotSpeedZero; // 0x98
		::System::Boolean CamReLockWhenLockingSameTarget; // 0x99
		::System::Boolean UseJoystickSteerPreferred; // 0x9A
		::System::Boolean ForceIgnoreAISelectTarget; // 0x9B
		::System::Boolean ForceReselectLockTarget; // 0x9C
		::System::Boolean AllowRootMotionRotation; // 0x9D
		::System::Boolean MuteCamLock; // 0x9E
		::System::Boolean MouseModeLockCameraRotation; // 0x9F
		::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType steerType; // 0xA0
		::MoleMole::Config::AnimatorZoneLockTarget_TargetType LockTargetType; // 0xA4
		::System::Single RotateSpeedRatio; // 0xA8
		::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection steerDirectionType; // 0xAC

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

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single GetEntityInputRotSpeed(::MoleMole::Battle::Entity* entity, ::Class_3_883E597458B91E77* movementComponent, ::System::Boolean applyRatio)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_883E597458B91E77*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET))(this, entity, movementComponent, applyRatio);
		}

		::System::Void TickLockTargetRotate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo curStateInfo, ::System::Boolean& isLockZoneRotate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo, isLockZoneRotate);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
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

		::System::Void EnterHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean CheckBattleArea(::MoleMole::Battle::Entity* selfEntity, ::MoleMole::Battle::Entity* monsterEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET))(this, selfEntity, monsterEntity);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnInit(::Class_3_F33F9DC5F4112336* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
