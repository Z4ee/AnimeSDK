#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_71EFE9585ED7979A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_9CA249C88E9804C6;
class Class_3_9DEF62571CEB6261;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class UIInLevelGamePlayButtonSoloAidChildWindowController; }
namespace MoleMole { class UIInLevelRamielCrosshairChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class HighLightAirCombatSubSystem_RuntimeMonsterConfig; }
namespace MoleMole::Battle { class HighLightAirCombatSubSystem_RuntimeMonsterGroup; }
namespace MoleMole::Config { class ConfigBossAirCombatParryAttack; }
namespace MoleMole::Config { class HighLightAirCombatConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_5243143C1CFA9367;

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ADDCIRCLECOUNT_OFFSET UNITYSDK_OFFSET(0x167E6A80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_APPLYCROSSHAIRPOSITION_OFFSET UNITYSDK_OFFSET(0x167D7FD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CALCPARRYTARGETWORLDPOS_OFFSET UNITYSDK_OFFSET(0x167DC8E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_1_OFFSET UNITYSDK_OFFSET(0x167E5760)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_2_OFFSET UNITYSDK_OFFSET(0x167E5BE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_3_OFFSET UNITYSDK_OFFSET(0x167E6070)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x167E52E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRCONTROLLER_OFFSET UNITYSDK_OFFSET(0x167D6DB0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRWINDOW_OFFSET UNITYSDK_OFFSET(0x167D6700)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CREATEMONSTERBYGROUP_OFFSET UNITYSDK_OFFSET(0x167E64E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAIM_OFFSET UNITYSDK_OFFSET(0x167D5FE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x167D8D80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARROTATIONRESET_OFFSET UNITYSDK_OFFSET(0x167D8F60)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYAID_OFFSET UNITYSDK_OFFSET(0x167DA5E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x167DE950)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167E3EB0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYMOVE_OFFSET UNITYSDK_OFFSET(0x167DCED0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYRETURN_OFFSET UNITYSDK_OFFSET(0x167DE570)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETAVATARBOSSMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x167E6AD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETBATTLESKILLUILOGIC_OFFSET UNITYSDK_OFFSET(0x167D9B80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETCROSSHAIRWORLDPOS_OFFSET UNITYSDK_OFFSET(0x167D8580)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYHUDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x167D7990)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYSCREENPOS_OFFSET UNITYSDK_OFFSET(0x167D8890)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYWORLDPOS_OFFSET UNITYSDK_OFFSET(0x167D8400)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x167E5160)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x167E03C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_BOSS_OFFSET UNITYSDK_OFFSET(0x167E03D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x167E03A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x167E03B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x167DAD60)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x167E03E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GOTOLENGTH_OFFSET UNITYSDK_OFFSET(0x167E6990)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAIM_OFFSET UNITYSDK_OFFSET(0x167D5000)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x167D8D10)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITCROSSHAIRFOLLOW_OFFSET UNITYSDK_OFFSET(0x167D7370)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYAID_OFFSET UNITYSDK_OFFSET(0x167D9DC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x167DBB40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x167E2A90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISINPARRYMODE_OFFSET UNITYSDK_OFFSET(0x167E03F0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISPARRYMOVING_OFFSET UNITYSDK_OFFSET(0x167DD8B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEDITHER_OFFSET UNITYSDK_OFFSET(0x167E20A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEMOVETIPS_OFFSET UNITYSDK_OFFSET(0x167E6A30)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAFTERLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x167DD3C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAIMPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x167D8B00)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAVATARENABLE_OFFSET UNITYSDK_OFFSET(0x167E21B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSENABLE_OFFSET UNITYSDK_OFFSET(0x167E1C90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYFRAMEEND_OFFSET UNITYSDK_OFFSET(0x167DB8A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x167DD860)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x167E7160)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x167DB1C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x167E1440)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONMONSTERENABLE_OFFSET UNITYSDK_OFFSET(0x167E19A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYAIDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x167DAB50)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYBEINGHIT_OFFSET UNITYSDK_OFFSET(0x167DB7B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x167E0470)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_OPENCROSSHAIRWINDOW_OFFSET UNITYSDK_OFFSET(0x167D5A20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REFRESHCROSSHAIRPROGRESS_OFFSET UNITYSDK_OFFSET(0x167D5780)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTERAIMCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x167D52B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x167DADD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REMOVEMONSTERBYGROUP_OFFSET UNITYSDK_OFFSET(0x167E6570)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REPARENT_OFFSET UNITYSDK_OFFSET(0x167E2940)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RESETCROSSHAIRFOLLOW_OFFSET UNITYSDK_OFFSET(0x167D5210)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETAVATARPARRYANIMPARAM_OFFSET UNITYSDK_OFFSET(0x167DFFA0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETBOSSPARRYANIMPARAM_OFFSET UNITYSDK_OFFSET(0x167E01A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRPROGRESS_OFFSET UNITYSDK_OFFSET(0x167D6CF0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRVISIBLE_OFFSET UNITYSDK_OFFSET(0x167D6FC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMONOTRIGGEREVENTSUBPROXYSWEEPCHECK_OFFSET UNITYSDK_OFFSET(0x167E50C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x167DAD80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x167E1220)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SET_ISMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x167DAD70)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTAVATARRESETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x167D97F0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACKMOVE_OFFSET UNITYSDK_OFFSET(0x167DF140)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x167DED70)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSRETURNPARENT_OFFSET UNITYSDK_OFFSET(0x167DFAB0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SUBSCRIBEAIMPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x167D55E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SYNCLASERTARGETTOAVATARLOCALPOS_OFFSET UNITYSDK_OFFSET(0x167E6DE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_TRYSUBSCRIBEBOSSAIMMOVE_OFFSET UNITYSDK_OFFSET(0x167D6A40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTERAIMCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x167D64E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x167DAFE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNSUBSCRIBEBOSSAIMMOVE_OFFSET UNITYSDK_OFFSET(0x167D6310)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIMPOSITION_OFFSET UNITYSDK_OFFSET(0x167D82C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIM_OFFSET UNITYSDK_OFFSET(0x167D73E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x167D8FD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARROTATIONRESET_OFFSET UNITYSDK_OFFSET(0x167D9350)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATELOCKTARGET_OFFSET UNITYSDK_OFFSET(0x167D7570)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x167DBC40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYRETURN_OFFSET UNITYSDK_OFFSET(0x167DD910)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x167E74A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x167E71D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__INIT_B__133_2_OFFSET UNITYSDK_OFFSET(0x167E74B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x167E7580)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x167E7610)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x167E76A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x167E7740)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x167E77D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x167E7860)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem_TypeDefinitionIndex = 68740;

	class HighLightAirCombatSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::Battle::HighLightAirCombatSubSystem*>
	{
	public:
		static ::System::Boolean* StaticGet_OffsetByAvatarUseLocalAix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem_TypeDefinitionIndex)->GetStaticField(0xE230);
		}
		// static const ::System::Single CrosshairFollowSharpness; // 0x0
		// static const ::System::Single CrosshairMaxMovePerSecond; // 0x0
		::UnityEngine::GameObject* _root; // 0x10
		::Class_3_C93CC3D2C2AC4067* _avatarModel; // 0x18
		::MoleMole::EntityHandle _aimTrackedBossHandle; // 0x20
		::UnityEngine::AnimationCurve* _avatarRotationResetCurve; // 0x30
		::UnityEngine::Transform* _bossParryChasePoint; // 0x38
		::MoleMole::UIInLevelRamielCrosshairChildWindowController* _crosshairController; // 0x40
		::Class_3_F33F9DC5F4112336* _bossAnimatorCom; // 0x48
		::MoleMole::EntityHandle _avatar; // 0x50
		::MoleMole::Config::ConfigBossAirCombatParryAttack* _currentParryConfig; // 0x60
		::UnityEngine::AnimationCurve* _parryMoveCurve; // 0x68
		::UnityEngine::Transform* _bossModelOriginalParent; // 0x70
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector3>>* _avatarVelocityWindow; // 0x78
		::MoleMole::EntityHandle _lockedEntity; // 0x80
		::MoleMole::EntityHandle _crosshairHudTarget; // 0x90
		::MoleMole::Config::HighLightAirCombatConfig* _config; // 0xA0
		::UnityEngine::Transform* _bossModelTransform; // 0xA8
		::System::Collections::Generic::Dictionary_2<::Enum_3_71EFE9585ED7979A, ::Class_2_5243143C1CFA9367<::System::Single>*>* _dicTimeScales; // 0xB0
		::System::Collections::Generic::Dictionary_2<::Enum_3_71EFE9585ED7979A, ::System::Collections::Generic::List_1<::UnityEngine::Animator*>*>* _dicAnimators; // 0xB8
		::MoleMole::UIInLevelGamePlayButtonSoloAidChildWindowController* _cachedSoloAidBtnCtrl; // 0xC0
		::UnityEngine::Transform* _laserTargetAttachPoint; // 0xC8
		::MoleMole::EntityHandle _boss; // 0xD0
		::UnityEngine::AnimationCurve* _parryReturnCurveObj; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::HighLightAirCombatSubSystem_RuntimeMonsterGroup*>* _dicRuntimeMonsters; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::HighLightAirCombatSubSystem_RuntimeMonsterConfig*>* _dicMonsterConfigs; // 0xF0
		::Class_3_9CA249C88E9804C6* _bossFinalMoveComponent; // 0xF8
		::UnityEngine::Transform* _avatarRoot; // 0x100
		::System::Boolean _isAvatarRotationResetting; // 0x108
		::System::Boolean _hasCrosshairHudPos; // 0x109
		::System::Boolean useFirstReturnFrame; // 0x10A
		::System::Boolean _isParryMoving; // 0x10B
		::System::Single _avatarRotationResetTimer; // 0x10C
		::System::Boolean _parryAidBtnCreatedByUs; // 0x110
		::System::Boolean setBossParryParent; // 0x111
		::System::Single maxWarpSpeed; // 0x114
		::UnityEngine::Vector3 _parryReturnStartPos; // 0x118
		::System::Single _pauseLength; // 0x124
		::UnityEngine::Vector2 _crosshairHudPos; // 0x128
		::System::Boolean _crosshairEnabled; // 0x130
		::System::Boolean _isLastFramePause; // 0x131
		::System::Boolean _isParryReturning; // 0x132
		::System::Boolean useFirstFrame; // 0x133
		::System::Single _parryReturnTimer; // 0x134
		::System::Single _curTime; // 0x138
		::System::Boolean _showTips; // 0x13C
		::System::Boolean _IsMuteCameraFieldQuadrant_k__BackingField; // 0x13D
		::System::Boolean _isParrying; // 0x13E
		::System::Boolean _crosshairVisible; // 0x13F
		::System::Single _parryMoveTimer; // 0x140
		::System::Single _avatarRotationResetDuration; // 0x144
		::System::Single _parryRootMotionOffsetZScale; // 0x148
		::UnityEngine::Quaternion _avatarRotationResetStartRot; // 0x14C
		::System::Int32 CircleCount; // 0x15C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void InitAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAIM_OFFSET))(this);
		}

		::System::Void DisposeAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAIM_OFFSET))(this);
		}

		::System::Void TrySubscribeBossAimMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_TRYSUBSCRIBEBOSSAIMMOVE_OFFSET))(this);
		}

		::System::Void UnsubscribeBossAimMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNSUBSCRIBEBOSSAIMMOVE_OFFSET))(this);
		}

		::System::Void RegisterAimCustomProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTERAIMCUSTOMPROPERTIES_OFFSET))(this);
		}

		::System::Void UnregisterAimCustomProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTERAIMCUSTOMPROPERTIES_OFFSET))(this);
		}

		::System::Void SubscribeAimPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SUBSCRIBEAIMPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void OpenCrosshairWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_OPENCROSSHAIRWINDOW_OFFSET))(this);
		}

		::System::Void CloseCrosshairWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRWINDOW_OFFSET))(this);
		}

		::System::Void CloseCrosshairController(::MoleMole::UIInLevelRamielCrosshairChildWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRamielCrosshairChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void SetCrosshairVisible(::System::Boolean visible, ::UnityEngine::Vector2 visibleHudPos, ::System::Boolean hasVisibleHudPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRVISIBLE_OFFSET))(this, visible, visibleHudPos, hasVisibleHudPos);
		}

		::System::Void InitCrosshairFollow(::UnityEngine::Vector2 hudPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITCROSSHAIRFOLLOW_OFFSET))(this, hudPos);
		}

		::System::Void ResetCrosshairFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RESETCROSSHAIRFOLLOW_OFFSET))(this);
		}

		::System::Void UpdateAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIM_OFFSET))(this);
		}

		::System::Void UpdateAimPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIMPOSITION_OFFSET))(this);
		}

		::System::Void ApplyCrosshairPosition(::UnityEngine::Vector2 rawHudPos, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_APPLYCROSSHAIRPOSITION_OFFSET))(this, rawHudPos, immediate);
		}

		::System::Void UpdateLockTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATELOCKTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEntityWorldPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYWORLDPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector3 GetCrosshairWorldPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETCROSSHAIRWORLDPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector2 GetEntityScreenPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYSCREENPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector2 GetEntityHudLocalPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYHUDLOCALPOS_OFFSET))(this, handle);
		}

		::System::Void OnAimPropertyChange(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty propertyType, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAIMPROPERTYCHANGE_OFFSET))(this, fighterID, propertyType, customType, oldValue, newValue);
		}

		::System::Void RefreshCrosshairProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REFRESHCROSSHAIRPROGRESS_OFFSET))(this);
		}

		::System::Void SetCrosshairProgress(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRPROGRESS_OFFSET))(this, ratio);
		}

		::System::Void InitAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void DisposeAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void DisposeAvatarRotationReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARROTATIONRESET_OFFSET))(this);
		}

		::System::Void UpdateAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void UpdateAvatarRotationReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARROTATIONRESET_OFFSET))(this);
		}

		::System::Void StartAvatarResetLocalRotation(::System::Single duration, ::System::String* curveName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTAVATARRESETLOCALROTATION_OFFSET))(this, duration, curveName);
		}

		::Class_3_9DEF62571CEB6261* GetBattleSkillUILogic()
		{
			return ((::Class_3_9DEF62571CEB6261*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETBATTLESKILLUILOGIC_OFFSET))(this);
		}

		::System::Void InitParryAid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYAID_OFFSET))(this);
		}

		::System::Void DisposeParryAid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYAID_OFFSET))(this);
		}

		::System::Void OnParryAidBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYAIDBTNCLICKED_OFFSET))(this);
		}

		::System::Boolean get_IsMuteCameraFieldQuadrant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISMUTECAMERAFIELDQUADRANT_OFFSET))(this);
		}

		::System::Void set_IsMuteCameraFieldQuadrant(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SET_ISMUTECAMERAFIELDQUADRANT_OFFSET))(this, value);
		}

		::System::Void SetMuteCameraFieldQuadrant(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMUTECAMERAFIELDQUADRANT_OFFSET))(this, mute);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnBossParryFrameEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYFRAMEEND_OFFSET))(this);
		}

		::System::Void InitParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYATTACK_OFFSET))(this);
		}

		::System::Void UpdateParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYATTACK_OFFSET))(this);
		}

		::System::Void OnAfterLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAFTERLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void FinishBossParryMove(::UnityEngine::Vector3 targetWorldPos, ::UnityEngine::Vector3 offsetLocal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYMOVE_OFFSET))(this, targetWorldPos, offsetLocal);
		}

		::UnityEngine::Vector3 CalcParryTargetWorldPos(::UnityEngine::Vector3 offset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CALCPARRYTARGETWORLDPOS_OFFSET))(this, offset);
		}

		::System::Boolean IsParryMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISPARRYMOVING_OFFSET))(this);
		}

		::System::Void UpdateParryReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYRETURN_OFFSET))(this);
		}

		::System::Void FinishBossParryReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYRETURN_OFFSET))(this);
		}

		::System::Void DisposeParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYATTACK_OFFSET))(this);
		}

		::System::Void StartBossParryAttack(::System::String* configKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACK_OFFSET))(this, configKey);
		}

		::System::Void StartBossReturnParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSRETURNPARENT_OFFSET))(this);
		}

		::System::Void OnParryBeingHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYBEINGHIT_OFFSET))(this);
		}

		::System::Void StartBossParryAttackMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACKMOVE_OFFSET))(this);
		}

		::System::Void OnBossParryMoveComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYMOVECOMPLETE_OFFSET))(this);
		}

		::System::Void SetAvatarParryAnimParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETAVATARPARRYANIMPARAM_OFFSET))(this);
		}

		::System::Void SetBossParryAnimParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETBOSSPARRYANIMPARAM_OFFSET))(this);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISACTIVE_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_Avatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_AVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_Boss()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_BOSS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ROOT_OFFSET))(this);
		}

		static ::System::Boolean IsInParryMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISINPARRYMODE_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnMonsterEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONMONSTERENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void OnBossEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void OnAvatarEnable(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAVATARENABLE_OFFSET))(this, avatar);
		}

		::System::Void MuteDither(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEDITHER_OFFSET))(this, entity);
		}

		::System::Void Reparent(::MoleMole::Battle::Entity* e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REPARENT_OFFSET))(this, e);
		}

		::System::Void Init(::UnityEngine::GameObject* g, ::MoleMole::Config::HighLightAirCombatConfig* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HighLightAirCombatConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INIT_OFFSET))(this, g, c);
		}

		::System::Void SetMonoTriggerEventSubProxySweepCheck(::MoleMole::Config::HighLightAirCombatConfig* c)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMONOTRIGGEREVENTSUBPROXYSWEEPCHECK_OFFSET))(this, c);
		}

		::System::Void SetTimeScale(::Enum_3_71EFE9585ED7979A timeScaleType, ::System::Single timeScale, ::System::Single duration, ::System::String* curve)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71EFE9585ED7979A, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETTIMESCALE_OFFSET))(this, timeScaleType, timeScale, duration, curve);
		}

		::System::Single GetTimeScale(::Enum_3_71EFE9585ED7979A timeScaleType)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_71EFE9585ED7979A))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETTIMESCALE_OFFSET))(this, timeScaleType);
		}

		::System::Void ChangeAnimatorParam(::System::String* ani, ::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_1(::System::String* ani, ::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_1_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_2(::System::String* ani, ::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_2_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_3(::System::String* ani, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_3_OFFSET))(this, ani, name);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CreateMonsterByGroup(::System::String* name)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CREATEMONSTERBYGROUP_OFFSET))(this, name);
		}

		::System::Void RemoveMonsterByGroup(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REMOVEMONSTERBYGROUP_OFFSET))(this, name);
		}

		::System::Void GotoLength(::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GOTOLENGTH_OFFSET))(this, length);
		}

		::System::Void MuteMoveTips(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEMOVETIPS_OFFSET))(this, mute);
		}

		::System::Void AddCircleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ADDCIRCLECOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAvatarBossMiddlePoint(::System::Single ratio)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETAVATARBOSSMIDDLEPOINT_OFFSET))(this, ratio);
		}

		::System::Void SyncLaserTargetToAvatarLocalPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SYNCLASERTARGETTOAVATARLOCALPOS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init_b__133_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__INIT_B__133_2_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
