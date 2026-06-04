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

#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKCANDIDATESCORE_OFFSET UNITYSDK_OFFSET(0xCE714D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_1_OFFSET UNITYSDK_OFFSET(0xCE6F070)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_OFFSET UNITYSDK_OFFSET(0xCE6EDF0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISABLELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6EBE0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE6BED0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FINDHITTARGETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCE6F860)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FORCELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6EB70)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETCURRENTLOCKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCE71BC0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCOREBYPOS_OFFSET UNITYSDK_OFFSET(0xCE73280)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCORE_OFFSET UNITYSDK_OFFSET(0xCE71980)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETMAINORIGINTRAN_OFFSET UNITYSDK_OFFSET(0xCE6D5E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xCE6FA90)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_ATTACKLOCKFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6D7E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTATTACKLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6EC80)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCE6EC70)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6EC60)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_CURRENTMAZESKILLLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6ECE0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xCE6F020)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_LOCKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCE73AB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_MELEELOCKTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE73040)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6D6E0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NORMALLOCKFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6D730)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_NOTPROPADDITIVESCORE_OFFSET UNITYSDK_OFFSET(0xCE71920)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET_SKILLLOCKTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6D790)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GET__LOCKTARGETENABLE_OFFSET UNITYSDK_OFFSET(0xCE6DBF0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE6C370)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISDISTANCEVALID_OFFSET UNITYSDK_OFFSET(0xCE72250)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISMONSTERVALID_OFFSET UNITYSDK_OFFSET(0xCE72D40)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISPROPVALID_OFFSET UNITYSDK_OFFSET(0xCE72ED0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_NOTIFYTARGETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xCE71DB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONSTAGE_OFFSET UNITYSDK_OFFSET(0xCE6C0F0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONTARGETCHANGE_OFFSET UNITYSDK_OFFSET(0xCE6C150)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDELOCKTARGETWEIGHTCONFIG_OFFSET UNITYSDK_OFFSET(0xCE6D830)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDEMAXCHECKDISTANCEXZ_OFFSET UNITYSDK_OFFSET(0xCE72FB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKATTACKFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6EB10)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6E720)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xCE6E890)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6E570)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6E9D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKATTACKFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6EA30)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6E5D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xCE6E7B0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE6E490)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALFANANGLE_OFFSET UNITYSDK_OFFSET(0xCE6E8F0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKRANGEINFO_OFFSET UNITYSDK_OFFSET(0xCE6DC00)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE6E3A0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICKATTACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCE6E410)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCE6D940)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGEATTACKTARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCE6C2D0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCE71210)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYGETSELECTPOINTFROMHITBOXGROUP_OFFSET UNITYSDK_OFFSET(0xCE6ED40)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CALCLOCKABLEMONSTERTARGETLIST_OFFSET UNITYSDK_OFFSET(0xCE72090)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE73DB0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE73AC0)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__FILLLOCKTARGETGETENTITYSCOREPARAM_OFFSET UNITYSDK_OFFSET(0xCE6F990)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELLOADED_OFFSET UNITYSDK_OFFSET(0xCE73930)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELUNLOADED_OFFSET UNITYSDK_OFFSET(0xCE73A00)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONENTITYLOCKABLECHANGE_OFFSET UNITYSDK_OFFSET(0xCE73820)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__TRYGETPROPSELECTSCOREBYPOS_OFFSET UNITYSDK_OFFSET(0xCE72460)
#define RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCE73E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockTargetComponent_TypeDefinitionIndex = 53864;

	class PlayerLockTargetComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__PlayLockTargetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(PlayerLockTargetComponent_TypeDefinitionIndex)->GetStaticField(0x688B0);
		}
		static ::System::Single* StaticGet__ForceLockLimitDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlayerLockTargetComponent_TypeDefinitionIndex)->GetStaticField(0x140F0);
		}
		// static const ::System::Single RAYCAST_BACK_DISTANCE; // 0x0
		// static const ::System::Single ConstNotPropAdditiveScore; // 0x0
		// static const ::System::Single MaxCheckDistanceXZ; // 0x0
		// static const ::System::Single RefreshInterval; // 0x0
		::Class_1_A7CE96953806D8B2* _NormalLockRangeData; // 0x18
		::UnityEngine::Transform* _LockTargetTransform; // 0x20
		::UnityEngine::Transform* _mainOriginTran; // 0x28
		::RPG::GameCore::AdventureCharacterController* _characterController; // 0x30
		::RPG::GameCore::GameEntity* _forceLockTarget; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _AllLockableMonsters; // 0x40
		::Class_1_A7CE96953806D8B2* _AttackLockRangeData; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PlayerLockTargetComponent_EntityLockInfo>* _cacheEntityTargetState; // 0x50
		::System::Collections::Generic::Stack_1<::System::Single>* _lockHeightLimitStack; // 0x58
		::System::Collections::Generic::Stack_1<::System::Single>* _normalLockDistanceStack; // 0x60
		::System::Collections::Generic::Stack_1<::System::Single>* _attackLockFanAngleStack; // 0x68
		::System::Collections::Generic::Stack_1<::System::Single>* _skillLoackDistanceStack; // 0x70
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _AllLockableProps; // 0x78
		::RPG::GameCore::GameEntity* _lockTarget; // 0x80
		::System::Collections::Generic::Stack_1<::System::Single>* _normalLockFanAngleStack; // 0x88
		::System::Collections::Generic::Stack_1<::System::Single>* _meleeLoackDistanceStack; // 0x90
		::System::Single _normal_lock_offset; // 0x98
		::System::Single _distanceRatio; // 0x9C
		::System::Int32 _DisableLockTargetCount; // 0xA0
		::UnityEngine::Vector3 _playerInputDirection; // 0xA4
		::System::Single _playerInputWeight; // 0xB0
		::System::Single _unLockTime; // 0xB4
		::UnityEngine::Vector3 _selfPos; // 0xB8
		::Struct_2_CD8A00A916F754FE _LockTargetCalcScoreParam; // 0xC4
		::System::Nullable_1<::System::Single> _OverrideMaxCheckDistanceXZ; // 0x124
		::System::Single _cameraOriginWeight; // 0x12C
		::System::Boolean _isLockTargetStateDirty; // 0x130
		::System::Boolean _isMaze; // 0x131
		::System::Boolean _enableInViewportCheck; // 0x132
		::System::Single _playerDistanceWeight; // 0x134
		::UnityEngine::Vector3 _RaycastOffset; // 0x138
		::System::Single _lockTime; // 0x144
		::UnityEngine::Vector2 _SelfPosXZ; // 0x148
		::System::Single _angleRatio; // 0x150
		::System::Int32 _lockTargetState; // 0x154
		::System::Single _RefreshLeftTime; // 0x158
		::System::Single _playerOriginWeight; // 0x15C
		::System::Single _maxFanAngle; // 0x160
		::System::Nullable_1<::System::Single> _OverrideNotPropAdditiveScore; // 0x164
		::System::Single LockUIDistanceOffset; // 0x16C
		::UnityEngine::Vector3 _mainOriginForward; // 0x170
		::System::Single _monsterWeight; // 0x17C
		::System::Single _unlockScoreRatio; // 0x180
		::UnityEngine::Vector3 _selfForward; // 0x184
		::UnityEngine::Vector3 _mainOriginPos; // 0x190
		::UnityEngine::Vector3 _normalRangeOriginOffset; // 0x19C
		::System::Single _cameraDistanceWeight; // 0x1A8

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

		::System::Void InitComponent(::RPG::GameCore::AdventureCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OverrideLockTargetWeightConfig(::RPG::GameCore::PlayerLockTargetWeightOverrideConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerLockTargetWeightOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDELOCKTARGETWEIGHTCONFIG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void PushLockNormalDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALDISTANCE_OFFSET))(this, a1);
		}

		::System::Void PopLockNormalDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALDISTANCE_OFFSET))(this);
		}

		::System::Void PushLockDistance(::RPG::GameCore::AdventureSkillType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Single PopLockDistance(::RPG::GameCore::AdventureSkillType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKDISTANCE_OFFSET))(this, a1);
		}

		::System::Void PushLockHeightLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKHEIGHTLIMIT_OFFSET))(this, a1);
		}

		::System::Void PopLockHeightLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Void PushLockNormalFanAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKNORMALFANANGLE_OFFSET))(this, a1);
		}

		::System::Void PopLockNormalFanAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKNORMALFANANGLE_OFFSET))(this);
		}

		::System::Void PushLockAttackFanAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_PUSHLOCKATTACKFANANGLE_OFFSET))(this, a1);
		}

		::System::Void PopLockAttackFanAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_POPLOCKATTACKFANANGLE_OFFSET))(this);
		}

		::System::Void ForceLockTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FORCELOCKTARGET_OFFSET))(this, a1);
		}

		::System::Void DisableLockTarget(::RPG::GameCore::DisableMazeLockReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DisableMazeLockReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_DISABLELOCKTARGET_OFFSET))(this, a1, a2);
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

		::UnityEngine::Transform* TryGetSelectPointFromHitBoxGroup(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYGETSELECTPOINTFROMHITBOXGROUP_OFFSET))(this, a1);
		}

		::System::Boolean CheckLockTargetRayCast(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckLockTargetRayCast_1(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKLOCKTARGETRAYCAST_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _FillLockTargetGetEntityScoreParam(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__FILLLOCKTARGETGETENTITYSCOREPARAM_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::GameEntity* FindHitTargetOwnerEntity(::UnityEngine::Transform* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_FINDHITTARGETOWNERENTITY_OFFSET))(a1);
		}

		::System::Void RefreshLockRangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKRANGEINFO_OFFSET))(this);
		}

		::System::Void RefreshLockTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_REFRESHLOCKTARGET_OFFSET))(this);
		}

		::System::Void TryChangeLockTarget(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGELOCKTARGET_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckCandidateScore(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_CHECKCANDIDATESCORE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTargetChange(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ONTARGETCHANGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CalcLockableMonsterTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__CALCLOCKABLEMONSTERTARGETLIST_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetSelectEntity(::System::Single& a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETSELECTENTITY_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetPropSelectScoreByPos(::RPG::GameCore::PropComponent* a1, ::UnityEngine::Transform* a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::UnityEngine::Transform*, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__TRYGETPROPSELECTSCOREBYPOS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsMonsterValid(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISMONSTERVALID_OFFSET))(this, a1);
		}

		static ::System::Boolean IsPropValid(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISPROPVALID_OFFSET))(a1);
		}

		::System::Void OverrideMaxCheckDistanceXZ(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_OVERRIDEMAXCHECKDISTANCEXZ_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDistanceValid(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_ISDISTANCEVALID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TickAttackTargetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TICKATTACKTARGETSTATE_OFFSET))(this);
		}

		::System::Void TryChangeAttackTargetState(::RPG::GameCore::EMazeLockTargetState a1, ::RPG::GameCore::EMazeLockTargetUIState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState, ::RPG::GameCore::EMazeLockTargetUIState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_TRYCHANGEATTACKTARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCurrentLockTargetState(::RPG::GameCore::EMazeLockTargetState& a1, ::RPG::GameCore::EMazeLockTargetUIState& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EMazeLockTargetState&, ::RPG::GameCore::EMazeLockTargetUIState&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETCURRENTLOCKTARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTargetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_NOTIFYTARGETSELECTSTATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMainOriginTran()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETMAINORIGINTRAN_OFFSET))(this);
		}

		static ::System::Single GetEntityScoreByPos(::UnityEngine::Vector3 a1, ::Struct_2_CD8A00A916F754FE a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::Struct_2_CD8A00A916F754FE))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCOREBYPOS_OFFSET))(a1, a2);
		}

		static ::System::Single GetEntityScore(::RPG::GameCore::GameEntity* a1, ::Struct_2_CD8A00A916F754FE a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::Struct_2_CD8A00A916F754FE, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT_GETENTITYSCORE_OFFSET))(a1, a2, a3);
		}

		::System::Void _OnEntityLockableChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONENTITYLOCKABLECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterModelLoaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterModelUnloaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT__ONCHARACTERMODELUNLOADED_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKTARGETCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
