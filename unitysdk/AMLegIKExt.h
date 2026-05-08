#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMLegIKExt_FootLockInfo.h"
#include "unitysdk/AMLegIKExt_PredictState.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_7.h"
#include "unitysdk/UnityEngine/ControlParamHandleWrapper.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AMFootShape;
class AMLegIKExt_AnimageDelegate;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define AMLEGIKEXT_APPLYPLAYERMOTION_OFFSET UNITYSDK_OFFSET(0xFF3E400)
#define AMLEGIKEXT_CALCFOOTBINDVECTORS_OFFSET UNITYSDK_OFFSET(0xFF3DC70)
#define AMLEGIKEXT_CALCULATEFOOTTARGET_OFFSET UNITYSDK_OFFSET(0xFF452D0)
#define AMLEGIKEXT_CALCULATEIKHIPDELTA_OFFSET UNITYSDK_OFFSET(0xFF3F180)
#define AMLEGIKEXT_CALCULATEPELVISTARGET_OFFSET UNITYSDK_OFFSET(0xFF45F60)
#define AMLEGIKEXT_CALCULATEPREDICTFOOTTARGET_OFFSET UNITYSDK_OFFSET(0xFF3FAF0)
#define AMLEGIKEXT_CROSSCHECK_OFFSET UNITYSDK_OFFSET(0xFF413C0)
#define AMLEGIKEXT_DEBUGFOCUSEDFOOT_OFFSET UNITYSDK_OFFSET(0xFF3E3B0)
#define AMLEGIKEXT_DOCALCULATETARGET_OFFSET UNITYSDK_OFFSET(0xFF443B0)
#define AMLEGIKEXT_FINALIZEFOOTIK_OFFSET UNITYSDK_OFFSET(0xFF45A30)
#define AMLEGIKEXT_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0xFF42BE0)
#define AMLEGIKEXT_GETFOOTSHAPE_OFFSET UNITYSDK_OFFSET(0xFF42EE0)
#define AMLEGIKEXT_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0xFF42A30)
#define AMLEGIKEXT_GETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0xFF3C350)
#define AMLEGIKEXT_GET_CURRENTFOOTANIMPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BEB0)
#define AMLEGIKEXT_GET_CURRENTFOOTANIMPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BE90)
#define AMLEGIKEXT_GET_CURRENTFOOTANIMROTGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BF10)
#define AMLEGIKEXT_GET_CURRENTFOOTANIMROTLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BEF0)
#define AMLEGIKEXT_GET_CURRENTFOOTLOCKEDPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BED0)
#define AMLEGIKEXT_GET_CURRENTPELVISANIMPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BE30)
#define AMLEGIKEXT_GET_CURRENTPELVISANIMROTLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BE70)
#define AMLEGIKEXT_GET_CURRENTTOEPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BF30)
#define AMLEGIKEXT_GET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C560)
#define AMLEGIKEXT_GET_ENABLEDEBUGONOFFGROUNDHEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3C580)
#define AMLEGIKEXT_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C500)
#define AMLEGIKEXT_GET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4A0)
#define AMLEGIKEXT_GET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C480)
#define AMLEGIKEXT_GET_ENABLELOCKFOOTREAL_OFFSET UNITYSDK_OFFSET(0xFF3C1C0)
#define AMLEGIKEXT_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4C0)
#define AMLEGIKEXT_GET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C460)
#define AMLEGIKEXT_GET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C5A0)
#define AMLEGIKEXT_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4E0)
#define AMLEGIKEXT_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C5C0)
#define AMLEGIKEXT_GET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C540)
#define AMLEGIKEXT_GET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C520)
#define AMLEGIKEXT_GET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0xFF3C600)
#define AMLEGIKEXT_GET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0xFF3C5E0)
#define AMLEGIKEXT_GET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0xFF3BDF0)
#define AMLEGIKEXT_GET_HIPHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xFF452C0)
#define AMLEGIKEXT_GET_HIPHITPOINT_OFFSET UNITYSDK_OFFSET(0xFF45290)
#define AMLEGIKEXT_GET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3BDD0)
#define AMLEGIKEXT_GET_LASTANIMPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C010)
#define AMLEGIKEXT_GET_LASTFOOTONGROUNDWEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3C070)
#define AMLEGIKEXT_GET_LASTHITNORMALGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFF0)
#define AMLEGIKEXT_GET_LASTHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFD0)
#define AMLEGIKEXT_GET_LASTORDINARYHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BF90)
#define AMLEGIKEXT_GET_LASTPIKHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFB0)
#define AMLEGIKEXT_GET_LASTTARGETPELVISPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BF50)
#define AMLEGIKEXT_GET_LASTTARGETPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C030)
#define AMLEGIKEXT_GET_LASTTARGETROTGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C050)
#define AMLEGIKEXT_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET UNITYSDK_OFFSET(0xFF422D0)
#define AMLEGIKEXT_INITIALIZEFOOTLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xFF3E1B0)
#define AMLEGIKEXT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xFF3C620)
#define AMLEGIKEXT_ISFOOTMOVING_OFFSET UNITYSDK_OFFSET(0xFF42530)
#define AMLEGIKEXT_ISINPIKSTATE_OFFSET UNITYSDK_OFFSET(0xFF41000)
#define AMLEGIKEXT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFF47500)
#define AMLEGIKEXT_LOCKFOOT_OFFSET UNITYSDK_OFFSET(0xFF415A0)
#define AMLEGIKEXT_ONANIMATORIKEXEC_OFFSET UNITYSDK_OFFSET(0xFF46EA0)
#define AMLEGIKEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFF467E0)
#define AMLEGIKEXT_ONFOOTPLANT_OFFSET UNITYSDK_OFFSET(0xFF464A0)
#define AMLEGIKEXT_ORDINARYIKHITGROUND_OFFSET UNITYSDK_OFFSET(0xFF42F70)
#define AMLEGIKEXT_PREDICTDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xFF40F80)
#define AMLEGIKEXT_PREDICTFOOT_OFFSET UNITYSDK_OFFSET(0xFF403F0)
#define AMLEGIKEXT_PREDICTIKHITGROUND_OFFSET UNITYSDK_OFFSET(0xFF43330)
#define AMLEGIKEXT_PREPARE_OFFSET UNITYSDK_OFFSET(0xFF3E5F0)
#define AMLEGIKEXT_PREPROCESSANIMPOS_OFFSET UNITYSDK_OFFSET(0xFF41E70)
#define AMLEGIKEXT_PREPROCESSPREDICTIONIK_OFFSET UNITYSDK_OFFSET(0xFF412C0)
#define AMLEGIKEXT_RESETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0xFF3C3F0)
#define AMLEGIKEXT_SETFOOTCONTROLPARAM_OFFSET UNITYSDK_OFFSET(0xFF45800)
#define AMLEGIKEXT_SETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0xFF3C220)
#define AMLEGIKEXT_SET_CURRENTFOOTANIMPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BEC0)
#define AMLEGIKEXT_SET_CURRENTFOOTANIMPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BEA0)
#define AMLEGIKEXT_SET_CURRENTFOOTANIMROTGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BF20)
#define AMLEGIKEXT_SET_CURRENTFOOTANIMROTLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BF00)
#define AMLEGIKEXT_SET_CURRENTFOOTLOCKEDPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BEE0)
#define AMLEGIKEXT_SET_CURRENTPELVISANIMPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BE50)
#define AMLEGIKEXT_SET_CURRENTPELVISANIMROTLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BE80)
#define AMLEGIKEXT_SET_CURRENTTOEPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BF40)
#define AMLEGIKEXT_SET_DISABLEDAMPING_OFFSET UNITYSDK_OFFSET(0xFF3C090)
#define AMLEGIKEXT_SET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C570)
#define AMLEGIKEXT_SET_ENABLEDEBUGONOFFGROUNDHEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3C590)
#define AMLEGIKEXT_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C510)
#define AMLEGIKEXT_SET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4B0)
#define AMLEGIKEXT_SET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C490)
#define AMLEGIKEXT_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4D0)
#define AMLEGIKEXT_SET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C470)
#define AMLEGIKEXT_SET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C5B0)
#define AMLEGIKEXT_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C4F0)
#define AMLEGIKEXT_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C5D0)
#define AMLEGIKEXT_SET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C550)
#define AMLEGIKEXT_SET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0xFF3C530)
#define AMLEGIKEXT_SET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0xFF3C610)
#define AMLEGIKEXT_SET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0xFF3C5F0)
#define AMLEGIKEXT_SET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0xFF3BE10)
#define AMLEGIKEXT_SET_HIPHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xFF452B0)
#define AMLEGIKEXT_SET_HIPHITPOINT_OFFSET UNITYSDK_OFFSET(0xFF45270)
#define AMLEGIKEXT_SET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3BDE0)
#define AMLEGIKEXT_SET_ISONMOVINGPLATFORM_OFFSET UNITYSDK_OFFSET(0xFF3C0A0)
#define AMLEGIKEXT_SET_LASTANIMPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C020)
#define AMLEGIKEXT_SET_LASTFOOTONGROUNDWEIGHT_OFFSET UNITYSDK_OFFSET(0xFF3C080)
#define AMLEGIKEXT_SET_LASTHITNORMALGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C000)
#define AMLEGIKEXT_SET_LASTHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFE0)
#define AMLEGIKEXT_SET_LASTORDINARYHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFA0)
#define AMLEGIKEXT_SET_LASTPIKHITPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3BFC0)
#define AMLEGIKEXT_SET_LASTTARGETPELVISPOSLOCAL_OFFSET UNITYSDK_OFFSET(0xFF3BF70)
#define AMLEGIKEXT_SET_LASTTARGETPOSGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C040)
#define AMLEGIKEXT_SET_LASTTARGETROTGLOBAL_OFFSET UNITYSDK_OFFSET(0xFF3C060)
#define AMLEGIKEXT_START_OFFSET UNITYSDK_OFFSET(0xFF46610)
#define AMLEGIKEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0xFF469B0)
#define AMLEGIKEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFF47560)

inline static constexpr unsigned int AMLegIKExt_TypeDefinitionIndex = 57494;

class AMLegIKExt : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single FLOAT_MIN; // 0x0
	::System::Boolean IsDefaultEnabled; // 0x18
	::UnityEngine::GameObject* pelvis; // 0x20
	::System::String* pelvisCpName; // 0x28
	::Il2CppArray<::UnityEngine::GameObject*>* feet; // 0x30
	::Il2CppArray<::UnityEngine::GameObject*>* toes; // 0x38
	::Il2CppArray<::System::String*>* PosQuatNames; // 0x40
	::System::Single BlendTime; // 0x48
	::System::Single FootHeights; // 0x4C
	::Il2CppArray<::UnityEngine::Quaternion>* FeetBindRotCompSpaceDelta; // 0x50
	::System::Single FootDisableIkHeight; // 0x58
	::System::Single FootOnGroundHeight; // 0x5C
	::System::Single FootOffGroundHeight; // 0x60
	::System::Single FootUpVelocityLimit; // 0x64
	::System::Single FootDownVelocityLimit; // 0x68
	::System::Single FootRotVelocityLimit; // 0x6C
	::System::Single RayCastHeight; // 0x70
	::System::Single ShrinkTopRayCastHeight; // 0x74
	::System::Single PredictRayCastHeight; // 0x78
	::System::Single EffectorCastMaxDist; // 0x7C
	::System::Single OffsetFromHeelToFoot; // 0x80
	::System::Single OffsetFromToeToTiptoe; // 0x84
	::System::Single FootWidthRadius; // 0x88
	::System::Single PelvisMaxUpVelocity; // 0x8C
	::System::Single PelvisMaxDownVelocity; // 0x90
	::System::Single PelvisFootMinDistance; // 0x94
	::System::Boolean EnablePelvisPD; // 0x98
	::System::Single PelvisThreshold; // 0x9C
	::System::Single PelvisMaxStiffness; // 0xA0
	::System::Single PelvisMaxDamping; // 0xA4
	::System::Single PelvisCastHeight; // 0xA8
	::System::Single PelvisSphereCastRadius; // 0xAC
	::System::Single StraightestLegFactor; // 0xB0
	::System::Boolean EnableLockFoot; // 0xB4
	::System::Single FootLockHeight; // 0xB8
	::System::Single FootLockSpeed; // 0xBC
	::System::Single FootLockRange; // 0xC0
	::System::Single FootLockDamping; // 0xC4
	::System::Single FootLockStiffness; // 0xC8
	::System::Boolean FootLockCrossCheck; // 0xCC
	::System::Single FadeInHeight; // 0xD0
	::System::Single FadeinWeight; // 0xD4
	::System::Single FootMoveThreshold; // 0xD8
	::System::Single FootNormalAngleThreshold; // 0xDC
	::System::Boolean EnablePIKWarp; // 0xE0
	::System::Boolean EnablePredictiveMoving; // 0xE1
	::System::Single PredictiveMovingHeight; // 0xE4
	::System::Single PIKSmoothSpeed; // 0xE8
	::System::Single PredictPointXZDistanceThreshold; // 0xEC
	::System::Boolean EnableStrideWrapping; // 0xF0
	::System::Single MinStrideScale; // 0xF4
	::UnityEngine::LayerMask IKLayerMask; // 0xF8
	::System::Single _IKWeight_k__BackingField; // 0xFC
	::System::Single forwardSpeed; // 0x100
	::System::Single downSpeed; // 0x104
	::UnityEngine::Vector3 realVelocity; // 0x108
	::System::Single DownStairWeight; // 0x114
	::UnityEngine::Vector3 _HipDelta_k__BackingField; // 0x118
	::System::Single deltaTime; // 0x124
	::Il2CppArray<::System::Single>* lastFrameIKCastDist; // 0x128
	::Il2CppArray<::System::Single>* lastFrameIKCastDistBeforeMoving; // 0x130
	::Il2CppArray<::UnityEngine::Vector3>* lastFrameNormal; // 0x138
	::UnityEngine::StringIDWrapper pelvisNameWrapper; // 0x140
	::Il2CppArray<::UnityEngine::StringIDWrapper>* footNameWrappers; // 0x148
	::Il2CppArray<::UnityEngine::StringIDWrapper>* toeNameWrappers; // 0x150
	::UnityEngine::ControlParamHandleWrapper pelvisCpHanleWrapper; // 0x158
	::Il2CppArray<::UnityEngine::ControlParamHandleWrapper>* controlParamHandleWrappers; // 0x170
	::UnityEngine::AnimageComponent* animageComponent; // 0x178
	::UnityEngine::Animator* animator; // 0x180
	::UnityEngine::Rigidbody* rigidbody; // 0x188
	::System::Single footToeLen; // 0x190
	::System::Single lastHeight; // 0x194
	::System::Single lastPelvisHeightDelta; // 0x198
	::System::Single lastPelvisHeightDeltaDiff; // 0x19C
	::System::Boolean isMoving; // 0x1A0
	::System::Boolean isRaising; // 0x1A1
	::System::Boolean isBlocking; // 0x1A2
	::System::Boolean isOnMovingPlatform; // 0x1A3
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootInAir; // 0x1A8
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootOnGround; // 0x1B0
	::Il2CppArray<::System::Single>* hipsDelta; // 0x1B8
	::UnityEngine::Vector3 pelvisPosAdjustment; // 0x1C0
	::UnityEngine::Quaternion pelvisRotAdjustment; // 0x1CC
	::Il2CppArray<::UnityEngine::Vector3>* footAnimPosAdjustment; // 0x1E0
	::System::Single pelvisPosAdjustmentBlendWeight; // 0x1E8
	::System::Single pelvisIkWeight; // 0x1EC
	::UnityEngine::Vector3 _currentPelvisAnimPosLocal_k__BackingField; // 0x1F0
	::UnityEngine::Quaternion _currentPelvisAnimRotLocal_k__BackingField; // 0x1FC
	::Il2CppArray<::UnityEngine::Vector3>* _currentFootAnimPosLocal_k__BackingField; // 0x210
	::Il2CppArray<::UnityEngine::Vector3>* _currentFootAnimPosGlobal_k__BackingField; // 0x218
	::Il2CppArray<::UnityEngine::Vector3>* _currentFootLockedPosGlobal_k__BackingField; // 0x220
	::Il2CppArray<::UnityEngine::Quaternion>* _currentFootAnimRotLocal_k__BackingField; // 0x228
	::Il2CppArray<::UnityEngine::Quaternion>* _currentFootAnimRotGlobal_k__BackingField; // 0x230
	::Il2CppArray<::UnityEngine::Vector3>* _currentToePosGlobal_k__BackingField; // 0x238
	::UnityEngine::Vector3 _lastTargetPelvisPosLocal_k__BackingField; // 0x240
	::Il2CppArray<::UnityEngine::Vector3>* _lastOrdinaryHitPosGlobal_k__BackingField; // 0x250
	::Il2CppArray<::UnityEngine::Vector3>* _lastPikHitPosGlobal_k__BackingField; // 0x258
	::Il2CppArray<::UnityEngine::Vector3>* _lastHitPosGlobal_k__BackingField; // 0x260
	::Il2CppArray<::UnityEngine::Vector3>* _lastHitNormalGlobal_k__BackingField; // 0x268
	::Il2CppArray<::UnityEngine::Vector3>* _lastAnimPosGlobal_k__BackingField; // 0x270
	::Il2CppArray<::UnityEngine::Vector3>* _lastTargetPosGlobal_k__BackingField; // 0x278
	::Il2CppArray<::UnityEngine::Quaternion>* _lastTargetRotGlobal_k__BackingField; // 0x280
	::Il2CppArray<::System::Single>* _lastFootOnGroundWeight_k__BackingField; // 0x288
	::Il2CppArray<::UnityEngine::Quaternion>* footBindRots; // 0x290
	::MoleMole::Battle::Entity* actor; // 0x298
	::System::Boolean hasToe; // 0x2A0
	::System::Boolean disableDamping; // 0x2A1
	::Il2CppArray<::AMLegIKExt_PredictState>* footPredictState; // 0x2A8
	::AMLegIKExt_AnimageDelegate* OnLateUpdate; // 0x2B0
	::Il2CppArray<::AMLegIKExt_FootLockInfo>* footLockInfos; // 0x2B8
	::UnityEngine::Vector3 lastPos; // 0x2C0
	::Il2CppArray<::UnityEngine::RaycastHit>* predictMovingRaycastHitBuffer; // 0x2D0
	::System::Single currentPelvisIKCastDist; // 0x2D8
	::System::Boolean enableStrideWrapping; // 0x2DC
	::System::Single footOnGroundHeight; // 0x2E0
	::System::Single footOffGroundHeight; // 0x2E4
	::System::Single footUpVelocityLimit; // 0x2E8
	::System::Single footDownVelocityLimit; // 0x2EC
	::System::Single pelvisMaxUpVelocity; // 0x2F0
	::System::Single pelvisMaxDownVelocity; // 0x2F4
	::System::Single AnimatorVel; // 0x2F8
	::System::Single FinalVel; // 0x2FC
	::System::Single VelFactor; // 0x300
	::System::Boolean _EnablePelvisDebug_k__BackingField; // 0x304
	::System::Boolean _EnableLockFootDebug_k__BackingField; // 0x305
	::System::Boolean _EnableFootMovingDebug_k__BackingField; // 0x306
	::System::Boolean _EnableOrdinaryHitGroundDebug_k__BackingField; // 0x307
	::System::Boolean _EnablePikHitGroundDebug_k__BackingField; // 0x308
	::System::Boolean _EnableFinalHitGroundDebug_k__BackingField; // 0x309
	::System::Boolean _EnableTargetDebug_k__BackingField; // 0x30A
	::System::Boolean _EnableRaycastDebug_k__BackingField; // 0x30B
	::System::Boolean _EnableAnimDebug_k__BackingField; // 0x30C
	::System::Boolean _EnableDebugOnOffGroundHeight_k__BackingField; // 0x30D
	::System::Boolean _EnablePIKDrawDebug_k__BackingField; // 0x30E
	::System::Boolean _EnablePredictiveMovingDebug_k__BackingField; // 0x30F
	::System::Single _GizmosLastTime_k__BackingField; // 0x310
	::System::Int32 _FootIndexToWatch_k__BackingField; // 0x314
	::Il2CppArray<::AMFootShape*>* feetshape; // 0x318
	::System::Single lastFrameHipDelta; // 0x320
	::UnityEngine::Vector3 _HipHitPoint_k__BackingField; // 0x324
	::UnityEngine::Collider* _HipHitCollider_k__BackingField; // 0x330

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT__CTOR_OFFSET))(this);
	}

	::System::Single get_IKWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_IKWEIGHT_OFFSET))(this);
	}

	::System::Void set_IKWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_IKWEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_HipDelta()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_HIPDELTA_OFFSET))(this);
	}

	::System::Void set_HipDelta(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_HIPDELTA_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_currentPelvisAnimPosLocal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTPELVISANIMPOSLOCAL_OFFSET))(this);
	}

	::System::Void set_currentPelvisAnimPosLocal(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTPELVISANIMPOSLOCAL_OFFSET))(this, value);
	}

	::UnityEngine::Quaternion get_currentPelvisAnimRotLocal()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTPELVISANIMROTLOCAL_OFFSET))(this);
	}

	::System::Void set_currentPelvisAnimRotLocal(::UnityEngine::Quaternion value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTPELVISANIMROTLOCAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_currentFootAnimPosLocal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTFOOTANIMPOSLOCAL_OFFSET))(this);
	}

	::System::Void set_currentFootAnimPosLocal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTFOOTANIMPOSLOCAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_currentFootAnimPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTFOOTANIMPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_currentFootAnimPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTFOOTANIMPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_currentFootLockedPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTFOOTLOCKEDPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_currentFootLockedPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTFOOTLOCKEDPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Quaternion>* get_currentFootAnimRotLocal()
	{
		return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTFOOTANIMROTLOCAL_OFFSET))(this);
	}

	::System::Void set_currentFootAnimRotLocal(::Il2CppArray<::UnityEngine::Quaternion>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTFOOTANIMROTLOCAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Quaternion>* get_currentFootAnimRotGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTFOOTANIMROTGLOBAL_OFFSET))(this);
	}

	::System::Void set_currentFootAnimRotGlobal(::Il2CppArray<::UnityEngine::Quaternion>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTFOOTANIMROTGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_currentToePosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_CURRENTTOEPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_currentToePosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_CURRENTTOEPOSGLOBAL_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_lastTargetPelvisPosLocal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTTARGETPELVISPOSLOCAL_OFFSET))(this);
	}

	::System::Void set_lastTargetPelvisPosLocal(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTTARGETPELVISPOSLOCAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastOrdinaryHitPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTORDINARYHITPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastOrdinaryHitPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTORDINARYHITPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastPikHitPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTPIKHITPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastPikHitPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTPIKHITPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastHitPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTHITPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastHitPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTHITPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastHitNormalGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTHITNORMALGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastHitNormalGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTHITNORMALGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastAnimPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTANIMPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastAnimPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTANIMPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_lastTargetPosGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTTARGETPOSGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastTargetPosGlobal(::Il2CppArray<::UnityEngine::Vector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTTARGETPOSGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Quaternion>* get_lastTargetRotGlobal()
	{
		return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTTARGETROTGLOBAL_OFFSET))(this);
	}

	::System::Void set_lastTargetRotGlobal(::Il2CppArray<::UnityEngine::Quaternion>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTTARGETROTGLOBAL_OFFSET))(this, value);
	}

	::Il2CppArray<::System::Single>* get_lastFootOnGroundWeight()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_LASTFOOTONGROUNDWEIGHT_OFFSET))(this);
	}

	::System::Void set_lastFootOnGroundWeight(::Il2CppArray<::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_LASTFOOTONGROUNDWEIGHT_OFFSET))(this, value);
	}

	::System::Void set_DisableDamping(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_DISABLEDAMPING_OFFSET))(this, value);
	}

	::System::Void set_IsOnMovingPlatform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ISONMOVINGPLATFORM_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootReal()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLELOCKFOOTREAL_OFFSET))(this);
	}

	::System::Void SetStateDependParams(::System::Boolean enableStrideWrapping, ::System::Single footOnGroundHeight, ::System::Single footOffGroundHeight, ::System::Single footUpVelocityLimit, ::System::Single footDownVelocityLimit, ::System::Single pelvisUpVelLimit, ::System::Single pelvisDownVelLimit)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SETSTATEDEPENDPARAMS_OFFSET))(this, enableStrideWrapping, footOnGroundHeight, footOffGroundHeight, footUpVelocityLimit, footDownVelocityLimit, pelvisUpVelLimit, pelvisDownVelLimit);
	}

	::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single> GetStateDependParams()
	{
		return ((::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Void ResetStateDependParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_RESETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Boolean get_EnablePelvisDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEPELVISDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePelvisDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEPELVISDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLELOCKFOOTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableLockFootDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLELOCKFOOTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFootMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFootMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableOrdinaryHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableOrdinaryHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePikHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePikHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFinalHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFinalHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableTargetDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLETARGETDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableTargetDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLETARGETDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableRaycastDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLERAYCASTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableRaycastDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLERAYCASTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableAnimDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEANIMDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableAnimDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEANIMDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableDebugOnOffGroundHeight()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEDEBUGONOFFGROUNDHEIGHT_OFFSET))(this);
	}

	::System::Void set_EnableDebugOnOffGroundHeight(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEDEBUGONOFFGROUNDHEIGHT_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePIKDrawDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEPIKDRAWDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePIKDrawDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEPIKDRAWDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePredictiveMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePredictiveMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Single get_GizmosLastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_GIZMOSLASTTIME_OFFSET))(this);
	}

	::System::Void set_GizmosLastTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_GIZMOSLASTTIME_OFFSET))(this, value);
	}

	::System::Int32 get_FootIndexToWatch()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_FOOTINDEXTOWATCH_OFFSET))(this);
	}

	::System::Void set_FootIndexToWatch(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_FOOTINDEXTOWATCH_OFFSET))(this, value);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_INITIALIZE_OFFSET))(this);
	}

	::System::Void CalcFootBindVectors(::System::Int32 footIndex, ::UnityEngine::Vector3& front, ::UnityEngine::Vector3& right)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CALCFOOTBINDVECTORS_OFFSET))(this, footIndex, front, right);
	}

	::System::Void InitializeFootLockState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_INITIALIZEFOOTLOCKSTATE_OFFSET))(this);
	}

	::System::Boolean DebugFocusedFoot(::System::Int32 footIndex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_DEBUGFOCUSEDFOOT_OFFSET))(this, footIndex);
	}

	::System::Void ApplyPlayerMotion()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_APPLYPLAYERMOTION_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREPARE_OFFSET))(this);
	}

	::UnityEngine::Vector3 CalculatePredictFootTarget(::System::Int32 footIndex)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CALCULATEPREDICTFOOTTARGET_OFFSET))(this, footIndex);
	}

	::System::Void PredictFoot(::System::Int32 currentFootIdx)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREDICTFOOT_OFFSET))(this, currentFootIdx);
	}

	::System::Void PredictDrawDebug()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREDICTDRAWDEBUG_OFFSET))(this);
	}

	::System::Boolean IsInPIKState(::System::Single& stateIKWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ISINPIKSTATE_OFFSET))(this, stateIKWeight);
	}

	::System::Boolean PreprocessPredictionIK(::System::Single& pIkWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREPROCESSPREDICTIONIK_OFFSET))(this, pIkWeight);
	}

	::System::Boolean CrossCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CROSSCHECK_OFFSET))(this);
	}

	::System::Void LockFoot(::System::Int32 footIndex, ::UnityEngine::Vector3 footPosLocal, ::System::Boolean isCross, ::UnityEngine::Vector3& footLockXZLocalOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_LOCKFOOT_OFFSET))(this, footIndex, footPosLocal, isCross, footLockXZLocalOffset);
	}

	::System::Void PreprocessAnimPos(::System::Int32 footIndex, ::System::Boolean needPIK, ::System::Boolean isCross, ::System::Single pIkWeight)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREPROCESSANIMPOS_OFFSET))(this, footIndex, needPIK, isCross, pIkWeight);
	}

	::System::Single HipHeightLiftingDeltaByMinDist(::System::Int32 footIndex, ::System::Single shortestAllowableDist, ::UnityEngine::Vector3 pelvisPos, ::UnityEngine::Vector3 footPos, ::System::Single targetHipDelta)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET))(this, footIndex, shortestAllowableDist, pelvisPos, footPos, targetHipDelta);
	}

	::System::Boolean IsFootMoving(::System::Int32 footIndex, ::UnityEngine::Vector3 footPos, ::UnityEngine::Vector3& posDelta)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ISFOOTMOVING_OFFSET))(this, footIndex, footPos, posDelta);
	}

	::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 startPoint, ::System::Single castDistance)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GETRAYCASTHIT_OFFSET))(this, startPoint, castDistance);
	}

	static ::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform(::UnityEngine::Transform* trans, ::UnityEngine::Rigidbody* rigidbody)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET))(trans, rigidbody);
	}

	::AMFootShape* getFootShape(::System::Int32 footIndex)
	{
		return ((::AMFootShape*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GETFOOTSHAPE_OFFSET))(this, footIndex);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> OrdinaryIkHitGround(::System::Int32 footIndex)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ORDINARYIKHITGROUND_OFFSET))(this, footIndex);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> PredictIkHitGround(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 ordinaryHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_PREDICTIKHITGROUND_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, ordinaryHitNormal);
	}

	::System::Void DoCalculateTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 hitPos, ::UnityEngine::Vector3 hitNormal, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + AMLEGIKEXT_DOCALCULATETARGET_OFFSET))(this, footIndex, hitPos, hitNormal, targetPos, targetRot);
	}

	::System::Void set_HipHitPoint(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_HIPHITPOINT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_HipHitPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_HIPHITPOINT_OFFSET))(this);
	}

	::System::Void set_HipHitCollider(::UnityEngine::Collider* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SET_HIPHITCOLLIDER_OFFSET))(this, value);
	}

	::UnityEngine::Collider* get_HipHitCollider()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_GET_HIPHITCOLLIDER_OFFSET))(this);
	}

	::System::Single CalculateIKHipDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CALCULATEIKHIPDELTA_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CalculateFootTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CALCULATEFOOTTARGET_OFFSET))(this, footIndex, finalHitPos, finalHitNormal);
	}

	::System::Void SetFootControlParam(::System::Int32 footIndex, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AMLEGIKEXT_SETFOOTCONTROLPARAM_OFFSET))(this, footIndex, targetPos, targetRot);
	}

	::System::Void FinalizeFootIk(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 pikHitPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIKEXT_FINALIZEFOOTIK_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, pikHitPos, targetPos, targetRot, finalHitPos, finalHitNormal);
	}

	::UnityEngine::Vector3 CalculatePelvisTarget()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_CALCULATEPELVISTARGET_OFFSET))(this);
	}

	::System::Void OnFootPlant(::MoleMole::Config::AnimatorZoneFootPrint_FootType footType, ::System::Boolean isInZone, ::System::Boolean isSliding)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ONFOOTPLANT_OFFSET))(this, footType, isInZone, isSliding);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_UPDATE_OFFSET))(this);
	}

	::System::Void OnAnimatorIKExec(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ONANIMATORIKEXEC_OFFSET))(this, layerIndex);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_LATEUPDATE_OFFSET))(this);
	}
};
