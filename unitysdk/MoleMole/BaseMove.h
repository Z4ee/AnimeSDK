#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"
#include "unitysdk/MoleMole/BaseMove_AroundAxis.h"
#include "unitysdk/MoleMole/BaseMove_AroundUpdateMode.h"
#include "unitysdk/MoleMole/BaseMove_EAroundMoveMode.h"
#include "unitysdk/MoleMole/BaseMove_MoveDirectionMode.h"
#include "unitysdk/MoleMole/BaseMove_TypeOfAngleCheck.h"
#include "unitysdk/MoleMole/Config/BaseMoveType.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CDD73C57CE893967;
class Class_3_0D4C1A014C7CC9DE;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_6D73516CC6FEADD7;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_BA709FB56ED5FAC4;
class Class_3_CF6254B260CF5CF4;
class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_E2819F45333A39BF;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x11C79FF0)
#define MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET UNITYSDK_OFFSET(0x11C7D370)
#define MOLEMOLE_BASEMOVE_CANMOVE_OFFSET UNITYSDK_OFFSET(0x11C7A600)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET UNITYSDK_OFFSET(0x11C7D490)
#define MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET UNITYSDK_OFFSET(0x11C83780)
#define MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x11C804D0)
#define MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET UNITYSDK_OFFSET(0x11C81DC0)
#define MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET UNITYSDK_OFFSET(0x11C82D10)
#define MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET UNITYSDK_OFFSET(0x11C82EB0)
#define MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x11C80540)
#define MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET UNITYSDK_OFFSET(0x11C80EA0)
#define MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET UNITYSDK_OFFSET(0x11C821A0)
#define MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET UNITYSDK_OFFSET(0x11C82B70)
#define MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x11C82FE0)
#define MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x11C82390)
#define MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x11C7E810)
#define MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET UNITYSDK_OFFSET(0x11C7D5D0)
#define MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x11C82C10)
#define MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET UNITYSDK_OFFSET(0x11C80760)
#define MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET UNITYSDK_OFFSET(0x11C80AC0)
#define MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x11C80630)
#define MOLEMOLE_BASEMOVE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x11C806E0)
#define MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET UNITYSDK_OFFSET(0x11C7D1C0)
#define MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11C78220)
#define MOLEMOLE_BASEMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x11C803B0)
#define MOLEMOLE_BASEMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11C78D50)
#define MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C7A7C0)
#define MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET UNITYSDK_OFFSET(0x11C79510)
#define MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET UNITYSDK_OFFSET(0x11C79D90)
#define MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x11C7D650)
#define MOLEMOLE_BASEMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11C83D90)
#define MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET UNITYSDK_OFFSET(0x11C79A50)
#define MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET UNITYSDK_OFFSET(0x11C7FB50)
#define MOLEMOLE_BASEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C843A0)
#define MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_141_0_OFFSET UNITYSDK_OFFSET(0x11C836F0)
#define MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11C845B0)
#define MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x11C84640)
#define MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11C846D0)
#define MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C84760)
#define MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11C847F0)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMove_TypeDefinitionIndex = 69567;

	class BaseMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::System::String* AsideHorizontalCurveKey; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x60
		::Class_3_E2819F45333A39BF* characterBattle; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* canIdleVar; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMax; // 0x78
		::Class_3_6D73516CC6FEADD7* aiComponent; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _checkStartPos; // 0x90
		::BehaviorDesigner::Runtime::SharedString* selfForwardAttachPoint; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* AroundAngleMin; // 0xA0
		::BehaviorDesigner::Runtime::SharedString* TargetSavePointName; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _recheckcheckStartPos; // 0xB0
		::System::String* SavePointTargetCustomKey; // 0xB8
		::System::String* TargetAngleCurve; // 0xC0
		::Class_3_F33F9DC5F4112336* animCharacter; // 0xC8
		::BehaviorDesigner::Runtime::SharedString* targetGroupPoint; // 0xD0
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0xD8
		::Class_3_D2084E0C2DD39509* navmeshAgentComponent; // 0xE0
		::BehaviorDesigner::Runtime::SharedFloat* SteerMaxThinkTime; // 0xE8
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMin; // 0xF0
		::UnityEngine::Transform* _selfForwardPoint; // 0xF8
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x100
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x108
		::BehaviorDesigner::Runtime::SharedFloat* minDistanceNegtive; // 0x110
		::Class_2_CDD73C57CE893967* baseMoveTask; // 0x118
		::BehaviorDesigner::Runtime::SharedFloat* AroundRange; // 0x120
		::System::String* AsideVerticalCurveKey; // 0x128
		::BehaviorDesigner::Runtime::SharedBool* ApplyAvoidObstacle; // 0x130
		::BehaviorDesigner::Runtime::SharedFloat* CollisionCheckWidth; // 0x138
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x140
		::MoleMole::Battle::Entity* ownerEntity; // 0x148
		::BehaviorDesigner::Runtime::SharedFloat* AroundRangeMax; // 0x150
		::BehaviorDesigner::Runtime::SharedString* targetAttachPoint; // 0x158
		::BehaviorDesigner::Runtime::SharedVariable* steerVar; // 0x160
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0x168
		::BehaviorDesigner::Runtime::SharedFloat* minDistancePositive; // 0x170
		::BehaviorDesigner::Runtime::SharedVariable* steerLengthVar; // 0x178
		::BehaviorDesigner::Runtime::SharedBool* AroundFaceToAttackTarget; // 0x180
		::MoleMole::AnimatorBlendData* _blendData; // 0x188
		::BehaviorDesigner::Runtime::SharedBool* bSkipNearPoint; // 0x190
		::Class_3_BA709FB56ED5FAC4* inputComp; // 0x198
		::BehaviorDesigner::Runtime::SharedFloat* SkipPointDistance; // 0x1A0
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0x1A8
		::Class_3_3A3A95CA33F5CFBC* characterData; // 0x1B0
		::MoleMole::SkillCharacterScriptConfig* config; // 0x1B8
		::BehaviorDesigner::Runtime::SharedString* targetFloorPoint; // 0x1C0
		::BehaviorDesigner::Runtime::SharedFloat* moveTime; // 0x1C8
		::BehaviorDesigner::Runtime::SharedFloat* SteerMinThinkTime; // 0x1D0
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0x1D8
		::BehaviorDesigner::Runtime::SharedFloat* HitCheckRadius; // 0x1E0
		::Class_3_883E597458B91E77* characterMovement; // 0x1E8
		::System::Single RandomAroundRange; // 0x1F0
		::System::Single angleOffsetB; // 0x1F4
		::MoleMole::BaseMove_AIMoveTargetState _moveState; // 0x1F8
		::MoleMole::BaseMove_EAroundMoveMode AroundMoveMode; // 0x1FC
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMoveTimeRst; // 0x200
		::UnityEngine::Vector3 _checkBefore; // 0x204
		::UnityEngine::Vector3 AroundTargetPos; // 0x210
		::System::Single randomCurveMirror; // 0x21C
		::System::Single _currentLerpK; // 0x220
		::System::Single AngleMin; // 0x224
		::MoleMole::BaseMove_MoveDirectionMode directionMode; // 0x228
		::System::Single RandomAroundAngle; // 0x22C
		::System::Single _currentLerp; // 0x230
		::BehaviorDesigner::Runtime::Tasks::TaskStatus ExitAngleRst; // 0x234
		::System::Single AroundDirRefreshInterval; // 0x238
		::UnityEngine::Vector3 TargetSourceVec; // 0x23C
		::MoleMole::Config::BaseMoveType MoveType; // 0x248
		::MoleMole::AIMoveTargetType type; // 0x24C
		::System::Boolean ApplyAngleExitCheck; // 0x250
		::System::Boolean _targetDirLocked; // 0x251
		::System::Boolean TestSteerMode; // 0x252
		::System::Boolean IsSymmetry; // 0x253
		::UnityEngine::Vector3 _slotTargetPos; // 0x254
		::System::Single TestSteerAngle; // 0x260
		::System::Single _idleThinkTimer; // 0x264
		::System::Single _freeTimer; // 0x268
		::System::Boolean TestSteerLog; // 0x26C
		::System::Boolean IsTargetAngleCurveMirror; // 0x26D
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x270
		::System::Single _curTargetAngle; // 0x274
		::System::Single AngleMax; // 0x278
		::System::Single _selectTargetDir; // 0x27C
		::System::Single angleOffsetA; // 0x280
		::System::Single _asideTimer; // 0x284
		::UnityEngine::LayerMask _collisionLayerMask; // 0x288
		::UnityEngine::RaycastHit _hitInfo; // 0x28C
		::UnityEngine::Vector3 lastVect; // 0x2C0
		::System::Single _lerpAngle; // 0x2CC
		::UnityEngine::Vector3 _lastForce; // 0x2D0
		::System::Single _moveTimer; // 0x2DC
		::System::Single _targetDistance; // 0x2E0
		::System::Single _lastAngle; // 0x2E4
		::System::Int32 _moveType; // 0x2E8
		::System::Int32 _slotIndex; // 0x2EC
		::System::Single AroundDirRefreshMaxDistance; // 0x2F0
		::MoleMole::BaseMove_TypeOfAngleCheck TypeOfChecking; // 0x2F4
		::System::Single _fixMinDistance; // 0x2F8
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMaxRst; // 0x2FC
		::System::Single _followCheckTimer; // 0x300
		::System::Boolean applyMinDistanceRange; // 0x304
		::System::Boolean _isBlendMoving; // 0x305
		::System::Boolean _isHitted; // 0x306
		::System::Boolean applyMoveTime; // 0x307
		::MoleMole::BaseMove_AroundUpdateMode AroundMode; // 0x308
		::BehaviorDesigner::Runtime::Tasks::TaskStatus reachMinRst; // 0x30C
		::MoleMole::BaseMove_AroundAxis Axis; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CANMOVE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGETENTITY_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA GetTarget()
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSelfRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETSELFRIGHT_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetAITargetPos()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAITARGETPOS_OFFSET))(this);
		}

		::System::Boolean IsFreeStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_ISFREESTYLE_OFFSET))(this);
		}

		::System::Void SetBlendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETBLENDDATA_OFFSET))(this);
		}

		::System::Boolean TargetDirectionPostProcess(::UnityEngine::Vector3& targetDir)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TARGETDIRECTIONPOSTPROCESS_OFFSET))(this, targetDir);
		}

		::System::Void GetNearestDirection(::UnityEngine::Vector3 source, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* dirs, ::System::Int32& matchValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETNEARESTDIRECTION_OFFSET))(this, source, dirs, matchValue);
		}

		::UnityEngine::Vector3 CorrectDirection(::UnityEngine::Vector3 source, ::System::Boolean& res)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CORRECTDIRECTION_OFFSET))(this, source, res);
		}

		::System::Void ClearLerpParameter(::System::Boolean clearLerp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CLEARLERPPARAMETER_OFFSET))(this, clearLerp);
		}

		::UnityEngine::Vector2 GetAngleXY(::System::Single angle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLEXY_OFFSET))(this, angle);
		}

		::System::Single GetAngle360(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETANGLE360_OFFSET))(this, force, forward);
		}

		::MoleMole::AnimatorBlendGroup* GetBlendData(::System::Single& angle, ::MoleMole::AnimatorClipBlendData*& data1, ::MoleMole::AnimatorClipBlendData*& data2)
		{
			return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETBLENDDATA_OFFSET))(this, angle, data1, data2);
		}

		::System::Void UpdateLerpParameter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATELERPPARAMETER_OFFSET))(this);
		}

		::System::Single CustomLerpAngle(::System::Single currentAngle, ::System::Single targetAngle, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERPANGLE_OFFSET))(this, currentAngle, targetAngle, t);
		}

		::System::Single CustomLerp(::System::Single currentValue, ::System::Single targetValue, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CUSTOMLERP_OFFSET))(this, currentValue, targetValue, t);
		}

		::System::Void CalculatePathInNavmesh(::UnityEngine::Vector3& targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CALCULATEPATHINNAVMESH_OFFSET))(this, targetPos);
		}

		::System::Boolean GetHittedDirection(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward, ::System::Boolean check, ::UnityEngine::Vector3& newForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETHITTEDDIRECTION_OFFSET))(this, sourceElf, forward, check, newForward);
		}

		::System::Void UpdateAroundTargetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_UPDATEAROUNDTARGETPOS_OFFSET))(this);
		}

		::System::Void SetAroundTargetRangeAndAngle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_SETAROUNDTARGETRANGEANDANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAroundTargetPos(::UnityEngine::Vector3 targetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETAROUNDTARGETPOS_OFFSET))(this, targetPos);
		}

		::System::Single GetMirrorAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_GETMIRRORANGLE_OFFSET))(this, angle);
		}

		::System::Boolean CheckHittedState(::MoleMole::Battle::Entity* sourceElf, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_OFFSET))(this, sourceElf, forward);
		}

		::System::Boolean CheckHittedState_1(::MoleMole::Battle::Entity* sourceElf)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_CHECKHITTEDSTATE_1_OFFSET))(this, sourceElf);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 _GetAroundTargetPos_g__RandomPos_141_0(::System::Single targetRange, ::UnityEngine::Vector3 pos)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE__GETAROUNDTARGETPOS_G__RANDOMPOS_141_0_OFFSET))(targetRange, pos);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
