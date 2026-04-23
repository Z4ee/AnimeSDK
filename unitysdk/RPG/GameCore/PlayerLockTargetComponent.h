#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/DisableMazeLockReason.h"
#include "unitysdk/RPG/GameCore/EMazeLockTargetState.h"
#include "unitysdk/RPG/GameCore/EMazeLockTargetUIState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PlayerLockTargetComponent_EntityLockInfo.h"
#include "unitysdk/Struct_2_CD8A00A916F754FE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A7CE96953806D8B2;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerLockTargetWeightOverrideConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKCANDIDATESCORE_OFFSET UNITYSDK_OFFSET(0xB705460)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_1_OFFSET UNITYSDK_OFFSET(0xB702EC0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_OFFSET UNITYSDK_OFFSET(0xB702C40)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISABLELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB702A30)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB700290)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FINDHITTARGETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB703700)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FORCELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB7029C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETCURRENTLOCKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB705B40)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCOREBYPOS_OFFSET UNITYSDK_OFFSET(0xB7072D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCORE_OFFSET UNITYSDK_OFFSET(0xB705910)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETMAINORIGINTRAN_OFFSET UNITYSDK_OFFSET(0xB701680)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xB703930)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_ATTACKLOCKFANANGLE_OFFSET UNITYSDK_OFFSET(0xB701870)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTATTACKLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB702AD0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB702AC0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB702AB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTMAZESKILLLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB702B30)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xB702E70)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB707AF0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_MELEELOCKTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xB707150)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xB701780)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKFANANGLE_OFFSET UNITYSDK_OFFSET(0xB7017D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NOTPROPADDITIVESCORE_OFFSET UNITYSDK_OFFSET(0xB7058B0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_SKILLLOCKTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xB701820)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET__LOCKTARGETENABLE_OFFSET UNITYSDK_OFFSET(0xB701CA0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB7006A0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISDISTANCEVALID_OFFSET UNITYSDK_OFFSET(0xB7061C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISMONSTERVALID_OFFSET UNITYSDK_OFFSET(0xB706E20)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISPROPVALID_OFFSET UNITYSDK_OFFSET(0xB706FE0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_NOTIFYTARGETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xB705D30)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONSTAGE_OFFSET UNITYSDK_OFFSET(0xB700480)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONTARGETCHANGE_OFFSET UNITYSDK_OFFSET(0xB7004E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDELOCKTARGETWEIGHTCONFIG_OFFSET UNITYSDK_OFFSET(0xB7018D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDEMAXCHECKDISTANCEXZ_OFFSET UNITYSDK_OFFSET(0xB7070C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKATTACKFANANGLE_OFFSET UNITYSDK_OFFSET(0xB702960)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xB7026C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xB7027C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALDISTANCE_OFFSET UNITYSDK_OFFSET(0xB7025C0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALFANANGLE_OFFSET UNITYSDK_OFFSET(0xB702890)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKATTACKFANANGLE_OFFSET UNITYSDK_OFFSET(0xB7028F0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xB702620)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xB702750)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALDISTANCE_OFFSET UNITYSDK_OFFSET(0xB702550)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALFANANGLE_OFFSET UNITYSDK_OFFSET(0xB702820)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKRANGEINFO_OFFSET UNITYSDK_OFFSET(0xB701CB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB702460)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICKATTACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB7024D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB7019E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGEATTACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB700610)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB705230)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYGETSELECTPOINTFROMHITBOXGROUP_OFFSET UNITYSDK_OFFSET(0xB702B90)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CALCLOCKABLEMONSTERTARGETLIST_OFFSET UNITYSDK_OFFSET(0xB706000)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB707DF0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB707B00)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__FILLLOCKTARGETGETENTITYSCOREPARAM_OFFSET UNITYSDK_OFFSET(0xB703830)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELLOADED_OFFSET UNITYSDK_OFFSET(0xB707970)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELUNLOADED_OFFSET UNITYSDK_OFFSET(0xB707A40)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONENTITYLOCKABLECHANGE_OFFSET UNITYSDK_OFFSET(0xB707870)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__TRYGETPROPSELECTSCOREBYPOS_OFFSET UNITYSDK_OFFSET(0xB706450)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB707EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockTargetComponent_TypeDefinitionIndex = 53154;

	class PlayerLockTargetComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__PlayLockTargetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(PlayerLockTargetComponent_TypeDefinitionIndex)->GetStaticField(0x57420);
		}
		static ::System::Single* StaticGet__ForceLockLimitDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlayerLockTargetComponent_TypeDefinitionIndex)->GetStaticField(0x10130);
		}
		// static const ::System::Single RAYCAST_BACK_DISTANCE; // 0x0
		// static const ::System::Single ConstNotPropAdditiveScore; // 0x0
		// static const ::System::Single MaxCheckDistanceXZ; // 0x0
		// static const ::System::Single RefreshInterval; // 0x0
		::UnityEngine::Transform* _mainOriginTran; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PlayerLockTargetComponent_EntityLockInfo>* _cacheEntityTargetState; // 0x20
		::RPG::GameCore::AdventureCharacterController* _characterController; // 0x28
		::UnityEngine::Transform* _LockTargetTransform; // 0x30
		::System::Collections::Generic::Stack_1<::System::Single>* _normalLockDistanceStack; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _AllLockableProps; // 0x40
		::RPG::GameCore::GameEntity* _lockTarget; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _AllLockableMonsters; // 0x50
		::Class_1_A7CE96953806D8B2* _AttackLockRangeData; // 0x58
		::System::Collections::Generic::Stack_1<::System::Single>* _normalLockFanAngleStack; // 0x60
		::System::Collections::Generic::Stack_1<::System::Single>* _skillLoackDistanceStack; // 0x68
		::RPG::GameCore::GameEntity* _forceLockTarget; // 0x70
		::System::Collections::Generic::Stack_1<::System::Single>* _lockHeightLimitStack; // 0x78
		::Class_1_A7CE96953806D8B2* _NormalLockRangeData; // 0x80
		::System::Collections::Generic::Stack_1<::System::Single>* _attackLockFanAngleStack; // 0x88
		::System::Collections::Generic::Stack_1<::System::Single>* _meleeLoackDistanceStack; // 0x90
		::System::Single _cameraDistanceWeight; // 0x98
		::System::Nullable_1<::System::Single> _OverrideMaxCheckDistanceXZ; // 0x9C
		::UnityEngine::Vector3 _normalRangeOriginOffset; // 0xA4
		::UnityEngine::Vector2 _SelfPosXZ; // 0xB0
		::System::Single _distanceRatio; // 0xB8
		::System::Single _playerOriginWeight; // 0xBC
		::UnityEngine::Vector3 _playerInputDirection; // 0xC0
		::System::Single _playerDistanceWeight; // 0xCC
		::UnityEngine::Vector3 _RaycastOffset; // 0xD0
		::System::Single _unLockTime; // 0xDC
		::System::Boolean _isMaze; // 0xE0
		::System::Boolean _enableInViewportCheck; // 0xE1
		::System::Boolean _isLockTargetStateDirty; // 0xE2
		::System::Int32 _lockTargetState; // 0xE4
		::System::Single _monsterWeight; // 0xE8
		::System::Single _lockTime; // 0xEC
		::UnityEngine::Vector3 _mainOriginPos; // 0xF0
		::System::Single _normal_lock_offset; // 0xFC
		::System::Single LockUIDistanceOffset; // 0x100
		::System::Single _playerInputWeight; // 0x104
		::System::Single _RefreshLeftTime; // 0x108
		::System::Single _angleRatio; // 0x10C
		::UnityEngine::Vector3 _selfPos; // 0x110
		::UnityEngine::Vector3 _selfForward; // 0x11C
		::UnityEngine::Vector3 _mainOriginForward; // 0x128
		::Struct_2_CD8A00A916F754FE _LockTargetCalcScoreParam; // 0x134
		::System::Single _cameraOriginWeight; // 0x194
		::System::Single _unlockScoreRatio; // 0x198
		::System::Single _maxFanAngle; // 0x19C
		::System::Nullable_1<::System::Single> _OverrideNotPropAdditiveScore; // 0x1A0
		::System::Int32 _DisableLockTargetCount; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONSTAGE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::AdventureCharacterConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_INITCOMPONENT_OFFSET))(this, config);
		}

		::System::Void OverrideLockTargetWeightConfig(::RPG::GameCore::PlayerLockTargetWeightOverrideConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerLockTargetWeightOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDELOCKTARGETWEIGHTCONFIG_OFFSET))(this, config);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void PushLockNormalDistance(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALDISTANCE_OFFSET))(this, distance);
		}

		::System::Void PopLockNormalDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALDISTANCE_OFFSET))(this);
		}

		::System::Void PushLockDistance(::RPG::GameCore::AdventureSkillType skillType, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKDISTANCE_OFFSET))(this, skillType, distance);
		}

		::System::Single PopLockDistance(::RPG::GameCore::AdventureSkillType skillType)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKDISTANCE_OFFSET))(this, skillType);
		}

		::System::Void PushLockHeightLimit(::System::Single heightLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKHEIGHTLIMIT_OFFSET))(this, heightLimit);
		}

		::System::Void PopLockHeightLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Void PushLockNormalFanAngle(::System::Single fanAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALFANANGLE_OFFSET))(this, fanAngle);
		}

		::System::Void PopLockNormalFanAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALFANANGLE_OFFSET))(this);
		}

		::System::Void PushLockAttackFanAngle(::System::Single fanAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKATTACKFANANGLE_OFFSET))(this, fanAngle);
		}

		::System::Void PopLockAttackFanAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKATTACKFANANGLE_OFFSET))(this);
		}

		::System::Void ForceLockTarget(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FORCELOCKTARGET_OFFSET))(this, entity);
		}

		::System::Void DisableLockTarget(::RPG::GameCore::DisableMazeLockReason reason, ::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DisableMazeLockReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISABLELOCKTARGET_OFFSET))(this, reason, isDisable);
		}

		::RPG::GameCore::GameEntity* get_CurrentLockTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGET_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CurrentLockTargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGETTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentAttackLockTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTATTACKLOCKTARGET_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentMazeSkillLockTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTMAZESKILLLOCKTARGET_OFFSET))(this);
		}

		::UnityEngine::Transform* TryGetSelectPointFromHitBoxGroup(::RPG::GameCore::GameEntity* entity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYGETSELECTPOINTFROMHITBOXGROUP_OFFSET))(this, entity);
		}

		::System::Boolean CheckLockTargetRayCast(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_OFFSET))(this, targetEntity);
		}

		static ::System::Boolean CheckLockTargetRayCast_1(::RPG::GameCore::GameEntity* sourceEntity, ::UnityEngine::Vector3 originPos, ::UnityEngine::Vector3 checkPos, ::RPG::GameCore::GameEntity* checkEntity, ::UnityEngine::Vector3 rayCastOffset, ::UnityEngine::Vector3 targetRaycastOffset, ::System::Single lockHeightLimit)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_1_OFFSET))(sourceEntity, originPos, checkPos, checkEntity, rayCastOffset, targetRaycastOffset, lockHeightLimit);
		}

		::System::Void _FillLockTargetGetEntityScoreParam(::System::Single maxDistance, ::System::Single additiveScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__FILLLOCKTARGETGETENTITYSCOREPARAM_OFFSET))(this, maxDistance, additiveScore);
		}

		static ::RPG::GameCore::GameEntity* FindHitTargetOwnerEntity(::UnityEngine::Transform* transformHitTarget)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FINDHITTARGETOWNERENTITY_OFFSET))(transformHitTarget);
		}

		::System::Void RefreshLockRangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKRANGEINFO_OFFSET))(this);
		}

		::System::Void RefreshLockTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKTARGET_OFFSET))(this);
		}

		::System::Void TryChangeLockTarget(::RPG::GameCore::GameEntity* candidateLockTarget, ::System::Single candidateScore)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGELOCKTARGET_OFFSET))(this, candidateLockTarget, candidateScore);
		}

		::System::Boolean CheckCandidateScore(::RPG::GameCore::GameEntity* candidateEntity, ::System::Single candidateScore)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKCANDIDATESCORE_OFFSET))(this, candidateEntity, candidateScore);
		}

		::System::Void OnTargetChange(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONTARGETCHANGE_OFFSET))(this, entity);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CalcLockableMonsterTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CALCLOCKABLEMONSTERTARGETLIST_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetSelectEntity(::System::Single& score)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETSELECTENTITY_OFFSET))(this, score);
		}

		::System::Boolean _TryGetPropSelectScoreByPos(::RPG::GameCore::PropComponent* prop, ::UnityEngine::Transform* calcTransform, ::System::Single& entityScore, ::System::Single& dis, ::System::Single& angle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::UnityEngine::Transform*, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__TRYGETPROPSELECTSCOREBYPOS_OFFSET))(this, prop, calcTransform, entityScore, dis, angle);
		}

		::System::Boolean IsMonsterValid(::RPG::GameCore::GameEntity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISMONSTERVALID_OFFSET))(this, monster);
		}

		static ::System::Boolean IsPropValid(::RPG::GameCore::GameEntity* prop)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISPROPVALID_OFFSET))(prop);
		}

		::System::Void OverrideMaxCheckDistanceXZ(::System::Boolean isOverride, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDEMAXCHECKDISTANCEXZ_OFFSET))(this, isOverride, distance);
		}

		::System::Boolean IsDistanceValid(::RPG::GameCore::GameEntity* entity, ::System::Single distance, ::System::Boolean isMonster)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISDISTANCEVALID_OFFSET))(this, entity, distance, isMonster);
		}

		::System::Void TickAttackTargetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICKATTACKTARGETSTATE_OFFSET))(this);
		}

		::System::Void TryChangeAttackTargetState(::RPG::GameCore::EMazeLockTargetState newState, ::RPG::GameCore::EMazeLockTargetUIState newUIState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState, ::RPG::GameCore::EMazeLockTargetUIState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGEATTACKTARGETSTATE_OFFSET))(this, newState, newUIState);
		}

		::System::Int32 GetCurrentLockTargetState(::RPG::GameCore::EMazeLockTargetState& lockTargetState, ::RPG::GameCore::EMazeLockTargetUIState& lockTargetUIState)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState&, ::RPG::GameCore::EMazeLockTargetUIState&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETCURRENTLOCKTARGETSTATE_OFFSET))(this, lockTargetState, lockTargetUIState);
		}

		::System::Void NotifyTargetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_NOTIFYTARGETSELECTSTATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMainOriginTran()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETMAINORIGINTRAN_OFFSET))(this);
		}

		static ::System::Single GetEntityScoreByPos(::UnityEngine::Vector3 pos, ::Struct_2_CD8A00A916F754FE getEntityScoreParam)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::Struct_2_CD8A00A916F754FE))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCOREBYPOS_OFFSET))(pos, getEntityScoreParam);
		}

		static ::System::Single GetEntityScore(::RPG::GameCore::GameEntity* entity, ::Struct_2_CD8A00A916F754FE getEntityScoreParam, ::UnityEngine::Transform* entityTransform)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::Struct_2_CD8A00A916F754FE, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCORE_OFFSET))(entity, getEntityScoreParam, entityTransform);
		}

		::System::Void _OnEntityLockableChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONENTITYLOCKABLECHANGE_OFFSET))(this, param);
		}

		::System::Void _OnCharacterModelLoaded(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELLOADED_OFFSET))(this, param);
		}

		::System::Void _OnCharacterModelUnloaded(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELUNLOADED_OFFSET))(this, param);
		}

		::System::Single get_NotPropAdditiveScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NOTPROPADDITIVESCORE_OFFSET))(this);
		}

		::RPG::GameCore::EMazeLockTargetState get_LockTargetState()
		{
			return ((::RPG::GameCore::EMazeLockTargetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKTARGETSTATE_OFFSET))(this);
		}

		::System::Single get_normalLockDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKDISTANCE_OFFSET))(this);
		}

		::System::Single get_meleeLockTargetDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_MELEELOCKTARGETDISTANCE_OFFSET))(this);
		}

		::System::Single get_skillLockTargetDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_SKILLLOCKTARGETDISTANCE_OFFSET))(this);
		}

		::System::Single get_lockHeightLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Single get_normalLockFanAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKFANANGLE_OFFSET))(this);
		}

		::System::Single get_attackLockFanAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_ATTACKLOCKFANANGLE_OFFSET))(this);
		}

		::System::Boolean get__LockTargetEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET__LOCKTARGETENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
