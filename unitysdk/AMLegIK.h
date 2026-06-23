#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMLegIK_FootLockInfo.h"
#include "unitysdk/AMLegIK_PredictState.h"
#include "unitysdk/AMLegIK_RayCastHeightState.h"
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

class AMLegIK_AnimageDelegate;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define AMLEGIK_APPLYPLAYERMOTION_OFFSET UNITYSDK_OFFSET(0x160350B0)
#define AMLEGIK_CALCULATEFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x1603E290)
#define AMLEGIK_CALCULATEPELVISTARGETADCANCE_OFFSET UNITYSDK_OFFSET(0x1603F390)
#define AMLEGIK_CALCULATEPELVISTARGETLEGACY_OFFSET UNITYSDK_OFFSET(0x1603F060)
#define AMLEGIK_CALCULATEPELVISTARGET_OFFSET UNITYSDK_OFFSET(0x1603F750)
#define AMLEGIK_CALCULATEPREDICTFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x16035E00)
#define AMLEGIK_CROSSCHECK_OFFSET UNITYSDK_OFFSET(0x16037770)
#define AMLEGIK_DEBUGFOCUSEDFOOT_OFFSET UNITYSDK_OFFSET(0x16035050)
#define AMLEGIK_DOCALCULATETARGET_OFFSET UNITYSDK_OFFSET(0x1603D1C0)
#define AMLEGIK_FINALIZEFOOTIK_OFFSET UNITYSDK_OFFSET(0x1603EA10)
#define AMLEGIK_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16039070)
#define AMLEGIK_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x16038EC0)
#define AMLEGIK_GETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x16033670)
#define AMLEGIK_GET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0x16033890)
#define AMLEGIK_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x16033830)
#define AMLEGIK_GET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x160337D0)
#define AMLEGIK_GET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0x160337B0)
#define AMLEGIK_GET_ENABLELOCKFOOTREAL_OFFSET UNITYSDK_OFFSET(0x160334B0)
#define AMLEGIK_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x160337F0)
#define AMLEGIK_GET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0x16033790)
#define AMLEGIK_GET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x160338B0)
#define AMLEGIK_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x16033810)
#define AMLEGIK_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x160338D0)
#define AMLEGIK_GET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0x16033870)
#define AMLEGIK_GET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0x16033850)
#define AMLEGIK_GET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0x16033910)
#define AMLEGIK_GET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x160338F0)
#define AMLEGIK_GET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0x160332F0)
#define AMLEGIK_GET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0x160332D0)
#define AMLEGIK_GET_REALPREDICTRAYCASTHEIGHT_OFFSET UNITYSDK_OFFSET(0x160331D0)
#define AMLEGIK_GET_REALRAYCASTHEIGHT_OFFSET UNITYSDK_OFFSET(0x160330D0)
#define AMLEGIK_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET UNITYSDK_OFFSET(0x16038730)
#define AMLEGIK_HIPHEIGHTLIFTINGDELTA_OFFSET UNITYSDK_OFFSET(0x16038590)
#define AMLEGIK_HITGROUNDIMPL_OFFSET UNITYSDK_OFFSET(0x1603A410)
#define AMLEGIK_HITGROUNDSIMPLEIMPL_OFFSET UNITYSDK_OFFSET(0x16039380)
#define AMLEGIK_HITGROUND_OFFSET UNITYSDK_OFFSET(0x16037160)
#define AMLEGIK_INITIALIZEFOOTLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x16034B40)
#define AMLEGIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16033930)
#define AMLEGIK_INITSCENEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x16034EB0)
#define AMLEGIK_ISFOOTMOVING_OFFSET UNITYSDK_OFFSET(0x160389C0)
#define AMLEGIK_ISINPIKSTATE_OFFSET UNITYSDK_OFFSET(0x160373B0)
#define AMLEGIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16041540)
#define AMLEGIK_LOCKFOOT_OFFSET UNITYSDK_OFFSET(0x16037920)
#define AMLEGIK_MAXHIPSDELTA_OFFSET UNITYSDK_OFFSET(0x1603EF80)
#define AMLEGIK_MINHIPSDELTA_OFFSET UNITYSDK_OFFSET(0x1603EEA0)
#define AMLEGIK_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x16040ED0)
#define AMLEGIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16040850)
#define AMLEGIK_ONFOOTPLANT_OFFSET UNITYSDK_OFFSET(0x16040400)
#define AMLEGIK_ORDINARYIKHITGROUND_OFFSET UNITYSDK_OFFSET(0x1603BE50)
#define AMLEGIK_PREDICTDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x16037330)
#define AMLEGIK_PREDICTFOOT_OFFSET UNITYSDK_OFFSET(0x160366A0)
#define AMLEGIK_PREDICTIKHITGROUND_OFFSET UNITYSDK_OFFSET(0x1603C190)
#define AMLEGIK_PREPARE_OFFSET UNITYSDK_OFFSET(0x16035270)
#define AMLEGIK_PREPROCESSANIMPOS_OFFSET UNITYSDK_OFFSET(0x160381A0)
#define AMLEGIK_PREPROCESSPREDICTIONIK_OFFSET UNITYSDK_OFFSET(0x16037670)
#define AMLEGIK_RESETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x16033720)
#define AMLEGIK_SETFOOTCONTROLPARAM_OFFSET UNITYSDK_OFFSET(0x1603E7E0)
#define AMLEGIK_SETSTATEDEPENDPARAMS_OFFSET UNITYSDK_OFFSET(0x16033540)
#define AMLEGIK_SET_DISABLEDAMPING_OFFSET UNITYSDK_OFFSET(0x16033330)
#define AMLEGIK_SET_ENABLEANIMDEBUG_OFFSET UNITYSDK_OFFSET(0x160338A0)
#define AMLEGIK_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x16033840)
#define AMLEGIK_SET_ENABLEFOOTMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x160337E0)
#define AMLEGIK_SET_ENABLELOCKFOOTDEBUG_OFFSET UNITYSDK_OFFSET(0x160337C0)
#define AMLEGIK_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x16033800)
#define AMLEGIK_SET_ENABLEPELVISDEBUG_OFFSET UNITYSDK_OFFSET(0x160337A0)
#define AMLEGIK_SET_ENABLEPELVISIKROT_OFFSET UNITYSDK_OFFSET(0x16033510)
#define AMLEGIK_SET_ENABLEPIKDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x160338C0)
#define AMLEGIK_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET UNITYSDK_OFFSET(0x16033820)
#define AMLEGIK_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET UNITYSDK_OFFSET(0x160338E0)
#define AMLEGIK_SET_ENABLERAYCASTDEBUG_OFFSET UNITYSDK_OFFSET(0x16033880)
#define AMLEGIK_SET_ENABLETARGETDEBUG_OFFSET UNITYSDK_OFFSET(0x16033860)
#define AMLEGIK_SET_FOOTINDEXTOWATCH_OFFSET UNITYSDK_OFFSET(0x16033920)
#define AMLEGIK_SET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x16033900)
#define AMLEGIK_SET_HIPDELTA_OFFSET UNITYSDK_OFFSET(0x16033310)
#define AMLEGIK_SET_IKWEIGHT_OFFSET UNITYSDK_OFFSET(0x160332E0)
#define AMLEGIK_SET_ISONMOVINGPLATFORM_OFFSET UNITYSDK_OFFSET(0x16033340)
#define AMLEGIK_SET_PELVISCASTDIST_OFFSET UNITYSDK_OFFSET(0x16033530)
#define AMLEGIK_SET_PELVISIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x16033520)
#define AMLEGIK_START_OFFSET UNITYSDK_OFFSET(0x16040680)
#define AMLEGIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x16040A20)
#define AMLEGIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x160416F0)
#define AMLEGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x160415A0)

inline static constexpr unsigned int AMLegIK_TypeDefinitionIndex = 67262;

class AMLegIK : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_castResults()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(AMLegIK_TypeDefinitionIndex)->GetStaticField(0x35630);
	}
	static ::System::Single* StaticGet_RayCastHeightOnMovingPlatform()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AMLegIK_TypeDefinitionIndex)->GetStaticField(0xD410);
	}
	// static const ::System::Single FLOAT_MIN; // 0x0
	// static const ::System::Single FLOAT_MAX; // 0x0
	::System::Boolean IsDefaultEnabled; // 0x18
	::UnityEngine::GameObject* pelvis; // 0x20
	::System::String* pelvisCpName; // 0x28
	::Il2CppArray<::UnityEngine::GameObject*>* feet; // 0x30
	::Il2CppArray<::UnityEngine::GameObject*>* toes; // 0x38
	::Il2CppArray<::System::String*>* PosQuatNames; // 0x40
	::System::Single BlendTime; // 0x48
	::Il2CppArray<::UnityEngine::Quaternion>* FeetBindRotCompSpaceDelta; // 0x50
	::System::Single FootHeights; // 0x58
	::System::Single FootDisableIkHeight; // 0x5C
	::System::Single FootOnGroundHeight; // 0x60
	::System::Single FootOffGroundHeight; // 0x64
	::System::Single FootUpVelocityLimit; // 0x68
	::System::Single FootDownVelocityLimit; // 0x6C
	::System::Single FootRotVelocityLimit; // 0x70
	::System::Single RayCastHeight; // 0x74
	::System::Single RayCastHeightForNewScene; // 0x78
	::System::Single PredictRayCastHeight; // 0x7C
	::System::Single PredictRayCastHeightForNewScene; // 0x80
	::System::Single EffectorCastMaxDist; // 0x84
	::System::Single OffsetFromHeelToFoot; // 0x88
	::System::Single OffsetFromToeToTiptoe; // 0x8C
	::System::Single FootWidthRadius; // 0x90
	::System::Single PelvisMaxUpVelocity; // 0x94
	::System::Single PelvisMaxDownVelocity; // 0x98
	::System::Single PelvisFootMinDistance; // 0x9C
	::System::Boolean EnablePelvisPD; // 0xA0
	::System::Single PelvisThreshold; // 0xA4
	::System::Single PelvisMaxStiffness; // 0xA8
	::System::Single PelvisMaxDamping; // 0xAC
	::System::Boolean PelvisAdjustmentAdvance; // 0xB0
	::System::Boolean EnableLockFoot; // 0xB1
	::System::Single FootLockHeight; // 0xB4
	::System::Single FootLockSpeed; // 0xB8
	::System::Single FootLockRange; // 0xBC
	::System::Single FootLockDamping; // 0xC0
	::System::Single FootLockStiffness; // 0xC4
	::System::Boolean FootLockCrossCheck; // 0xC8
	::System::Single FadeInHeight; // 0xCC
	::System::Single FadeinWeight; // 0xD0
	::System::Single FootMoveThreshold; // 0xD4
	::System::Single FootNormalForwardAngleThreshold; // 0xD8
	::System::Boolean EnablePIKWarp; // 0xDC
	::System::Boolean EnablePredictiveMoving; // 0xDD
	::System::Single PredictiveMovingHeight; // 0xE0
	::System::Single PIKSmoothSpeed; // 0xE4
	::System::Single PredictPointXZDistanceThreshold; // 0xE8
	::System::Boolean EnableStrideWrapping; // 0xEC
	::System::Single MinStrideScale; // 0xF0
	::UnityEngine::LayerMask IKLayerMask; // 0xF4
	::AMLegIK_RayCastHeightState rayCastHeightState; // 0xF8
	::System::Single _IKWeight_k__BackingField; // 0xFC
	::System::Single forwardSpeed; // 0x100
	::System::Single downSpeed; // 0x104
	::UnityEngine::Vector3 realVelocity; // 0x108
	::System::Single DownStairWeight; // 0x114
	::UnityEngine::Vector3 _HipDelta_k__BackingField; // 0x118
	::System::Single deltaTime; // 0x124
	::Il2CppArray<::System::Single>* lastFrameIKCastDist; // 0x128
	::Il2CppArray<::UnityEngine::Vector3>* lastFrameNormal; // 0x130
	::UnityEngine::StringIDWrapper pelvisNameWrapper; // 0x138
	::Il2CppArray<::UnityEngine::StringIDWrapper>* footNameWrappers; // 0x140
	::Il2CppArray<::UnityEngine::StringIDWrapper>* toeNameWrappers; // 0x148
	::UnityEngine::ControlParamHandleWrapper pelvisCpHanleWrapper; // 0x150
	::Il2CppArray<::UnityEngine::ControlParamHandleWrapper>* controlParamHandleWrappers; // 0x168
	::UnityEngine::AnimageComponent* animageComponent; // 0x170
	::UnityEngine::Animator* animator; // 0x178
	::UnityEngine::Rigidbody* rigidbody; // 0x180
	::System::Single footToeLen; // 0x188
	::System::Single lastHeight; // 0x18C
	::System::Single lastPelvisHeightDelta; // 0x190
	::System::Single lastPelvisHeightDeltaDiff; // 0x194
	::System::Boolean isMoving; // 0x198
	::System::Boolean isRaising; // 0x199
	::System::Boolean isBlocking; // 0x19A
	::System::Boolean isOnMovingPlatform; // 0x19B
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootInAir; // 0x1A0
	::Il2CppArray<::System::Boolean>* isLeavingMovingPlatformAndFootOnGround; // 0x1A8
	::AMLegIK_RayCastHeightState tempRayCastHeightStateLeavingMovingPlatform; // 0x1B0
	::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Boolean>>* hipsDelta; // 0x1B8
	::UnityEngine::Vector3 pelvisPosLocal; // 0x1C0
	::UnityEngine::Quaternion pelvisRotLocal; // 0x1CC
	::Il2CppArray<::UnityEngine::Vector3>* currentFootAnimPosLocal; // 0x1E0
	::Il2CppArray<::UnityEngine::Vector3>* currentFootAnimPosGlobal; // 0x1E8
	::Il2CppArray<::UnityEngine::Vector3>* currentFootLockedPosGlobal; // 0x1F0
	::Il2CppArray<::UnityEngine::Quaternion>* currentFootAnimRotLocal; // 0x1F8
	::Il2CppArray<::UnityEngine::Quaternion>* currentFootAnimRotGlobal; // 0x200
	::Il2CppArray<::UnityEngine::Vector3>* currentToePosGlobal; // 0x208
	::Il2CppArray<::UnityEngine::Vector3>* lastOrdinaryHitPosGlobal; // 0x210
	::Il2CppArray<::UnityEngine::Vector3>* lastHitPosGlobal; // 0x218
	::Il2CppArray<::UnityEngine::Vector3>* lastHitNormalGlobal; // 0x220
	::Il2CppArray<::UnityEngine::Vector3>* lastAnimPosGlobal; // 0x228
	::Il2CppArray<::UnityEngine::Vector3>* lastTargetPosGlobal; // 0x230
	::Il2CppArray<::UnityEngine::Quaternion>* lastTargetRotGlobal; // 0x238
	::Il2CppArray<::UnityEngine::Quaternion>* footBindRots; // 0x240
	::MoleMole::Battle::Entity* actor; // 0x248
	::System::Boolean hasToe; // 0x250
	::System::Boolean isRootPelvis; // 0x251
	::System::Boolean disableDamping; // 0x252
	::Il2CppArray<::AMLegIK_PredictState>* footPredictState; // 0x258
	::AMLegIK_AnimageDelegate* OnLateUpdate; // 0x260
	::Il2CppArray<::AMLegIK_FootLockInfo>* footLockInfos; // 0x268
	::System::Boolean enablePelvisIkRot; // 0x270
	::System::Boolean enablePelvisIkRotTarget; // 0x271
	::System::Single pelvisIkWeight; // 0x274
	::System::Single pelvisIkWeightTarget; // 0x278
	::UnityEngine::Vector3 lastPos; // 0x27C
	::Il2CppArray<::UnityEngine::RaycastHit>* predictMovingRaycastHitBuffer; // 0x288
	::System::Single pelvisCastDist; // 0x290
	::System::Boolean enableStrideWrapping; // 0x294
	::System::Single footOnGroundHeight; // 0x298
	::System::Single footOffGroundHeight; // 0x29C
	::System::Single footUpVelocityLimit; // 0x2A0
	::System::Single footDownVelocityLimit; // 0x2A4
	::System::Single pelvisMaxUpVelocity; // 0x2A8
	::System::Single pelvisMaxDownVelocity; // 0x2AC
	::System::Single AnimatorVel; // 0x2B0
	::System::Single FinalVel; // 0x2B4
	::System::Single VelFactor; // 0x2B8
	::System::Boolean EnableLowQuality; // 0x2BC
	::System::Boolean _EnablePelvisDebug_k__BackingField; // 0x2BD
	::System::Boolean _EnableLockFootDebug_k__BackingField; // 0x2BE
	::System::Boolean _EnableFootMovingDebug_k__BackingField; // 0x2BF
	::System::Boolean _EnableOrdinaryHitGroundDebug_k__BackingField; // 0x2C0
	::System::Boolean _EnablePikHitGroundDebug_k__BackingField; // 0x2C1
	::System::Boolean _EnableFinalHitGroundDebug_k__BackingField; // 0x2C2
	::System::Boolean _EnableTargetDebug_k__BackingField; // 0x2C3
	::System::Boolean _EnableRaycastDebug_k__BackingField; // 0x2C4
	::System::Boolean _EnableAnimDebug_k__BackingField; // 0x2C5
	::System::Boolean _EnablePIKDrawDebug_k__BackingField; // 0x2C6
	::System::Boolean _EnablePredictiveMovingDebug_k__BackingField; // 0x2C7
	::System::Single _GizmosLastTime_k__BackingField; // 0x2C8
	::System::Int32 _FootIndexToWatch_k__BackingField; // 0x2CC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLEGIK__CCTOR_OFFSET))();
	}

	::System::Single get_RealRayCastHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_REALRAYCASTHEIGHT_OFFSET))(this);
	}

	::System::Single get_RealPredictRayCastHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_REALPREDICTRAYCASTHEIGHT_OFFSET))(this);
	}

	::System::Single get_IKWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_IKWEIGHT_OFFSET))(this);
	}

	::System::Void set_IKWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_IKWEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_HipDelta()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_HIPDELTA_OFFSET))(this);
	}

	::System::Void set_HipDelta(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_SET_HIPDELTA_OFFSET))(this, value);
	}

	::System::Void set_DisableDamping(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_DISABLEDAMPING_OFFSET))(this, value);
	}

	::System::Void set_IsOnMovingPlatform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ISONMOVINGPLATFORM_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootReal()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLELOCKFOOTREAL_OFFSET))(this);
	}

	::System::Void set_EnablePelvisIkRot(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPELVISIKROT_OFFSET))(this, value);
	}

	::System::Void set_PelvisIkWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_PELVISIKWEIGHT_OFFSET))(this, value);
	}

	::System::Void set_PelvisCastDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_PELVISCASTDIST_OFFSET))(this, value);
	}

	::System::Void SetStateDependParams(::System::Boolean enableStrideWrapping, ::System::Single footOnGroundHeight, ::System::Single footOffGroundHeight, ::System::Single footUpVelocityLimit, ::System::Single footDownVelocityLimit, ::System::Single pelvisUpVelLimit, ::System::Single pelvisDownVelLimit)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SETSTATEDEPENDPARAMS_OFFSET))(this, enableStrideWrapping, footOnGroundHeight, footOffGroundHeight, footUpVelocityLimit, footDownVelocityLimit, pelvisUpVelLimit, pelvisDownVelLimit);
	}

	::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single> GetStateDependParams()
	{
		return ((::System::ValueTuple_7<::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Void ResetStateDependParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_RESETSTATEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Boolean get_EnablePelvisDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPELVISDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePelvisDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPELVISDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableLockFootDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLELOCKFOOTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableLockFootDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLELOCKFOOTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFootMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFootMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEFOOTMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableOrdinaryHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableOrdinaryHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEORDINARYHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePikHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePikHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPIKHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableFinalHitGroundDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableFinalHitGroundDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEFINALHITGROUNDDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableTargetDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLETARGETDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableTargetDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLETARGETDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableRaycastDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLERAYCASTDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableRaycastDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLERAYCASTDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnableAnimDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEANIMDEBUG_OFFSET))(this);
	}

	::System::Void set_EnableAnimDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEANIMDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePIKDrawDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPIKDRAWDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePIKDrawDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPIKDRAWDEBUG_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePredictiveMovingDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this);
	}

	::System::Void set_EnablePredictiveMovingDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_SET_ENABLEPREDICTIVEMOVINGDEBUG_OFFSET))(this, value);
	}

	::System::Single get_GizmosLastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_GIZMOSLASTTIME_OFFSET))(this);
	}

	::System::Void set_GizmosLastTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_SET_GIZMOSLASTTIME_OFFSET))(this, value);
	}

	::System::Int32 get_FootIndexToWatch()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_GET_FOOTINDEXTOWATCH_OFFSET))(this);
	}

	::System::Void set_FootIndexToWatch(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_SET_FOOTINDEXTOWATCH_OFFSET))(this, value);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITIALIZE_OFFSET))(this);
	}

	::System::Void InitializeFootLockState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITIALIZEFOOTLOCKSTATE_OFFSET))(this);
	}

	::System::Void InitSceneDependParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_INITSCENEDEPENDPARAMS_OFFSET))(this);
	}

	::System::Boolean DebugFocusedFoot(::System::Int32 footIndex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_DEBUGFOCUSEDFOOT_OFFSET))(this, footIndex);
	}

	::System::Void ApplyPlayerMotion()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_APPLYPLAYERMOTION_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_PREPARE_OFFSET))(this);
	}

	::UnityEngine::Vector3 CalculatePredictFootTarget(::System::Int32 footIndex)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPREDICTFOOTTARGET_OFFSET))(this, footIndex);
	}

	::System::Void PredictFoot(::System::Int32 currentFootIdx)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTFOOT_OFFSET))(this, currentFootIdx);
	}

	::System::Void PredictDrawDebug()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTDRAWDEBUG_OFFSET))(this);
	}

	::System::Boolean IsInPIKState(::System::Single& stateIKWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_ISINPIKSTATE_OFFSET))(this, stateIKWeight);
	}

	::System::Boolean PreprocessPredictionIK(::System::Single& pIkWeight)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AMLEGIK_PREPROCESSPREDICTIONIK_OFFSET))(this, pIkWeight);
	}

	::System::Boolean CrossCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CROSSCHECK_OFFSET))(this);
	}

	::System::Void LockFoot(::System::Int32 footIndex, ::UnityEngine::Vector3 footPosLocal, ::System::Boolean isCross, ::UnityEngine::Vector3& footLockXZLocalOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_LOCKFOOT_OFFSET))(this, footIndex, footPosLocal, isCross, footLockXZLocalOffset);
	}

	::System::Void PreprocessAnimPos(::System::Int32 footIndex, ::System::Boolean needPIK, ::System::Boolean isCross, ::System::Single pIkWeight)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_PREPROCESSANIMPOS_OFFSET))(this, footIndex, needPIK, isCross, pIkWeight);
	}

	::System::Single HipHeightLiftingDelta(::System::Single straightestLegLength, ::UnityEngine::Vector3 rootJointPos, ::UnityEngine::Vector3 endJointPos)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_HIPHEIGHTLIFTINGDELTA_OFFSET))(this, straightestLegLength, rootJointPos, endJointPos);
	}

	::System::ValueTuple_2<::System::Single, ::System::Boolean> HipHeightLiftingDeltaByMinDist(::System::Int32 footIndex, ::System::Single shortestAllowableDist, ::UnityEngine::Vector3 rootJointPos, ::UnityEngine::Vector3 endJointPos)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_HIPHEIGHTLIFTINGDELTABYMINDIST_OFFSET))(this, footIndex, shortestAllowableDist, rootJointPos, endJointPos);
	}

	::System::Boolean IsFootMoving(::System::Int32 footIndex, ::UnityEngine::Vector3 footPos, ::UnityEngine::Vector3& posDelta)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_ISFOOTMOVING_OFFSET))(this, footIndex, footPos, posDelta);
	}

	::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 startPoint, ::System::Single castDistance)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AMLEGIK_GETRAYCASTHIT_OFFSET))(this, startPoint, castDistance);
	}

	::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform(::UnityEngine::Transform* transform, ::UnityEngine::Rigidbody* rigidbody)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + AMLEGIK_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET))(this, transform, rigidbody);
	}

	::System::Void HitGround(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUND_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::Void HitGroundSimpleImpl(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUNDSIMPLEIMPL_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::Void HitGroundImpl(::System::Int32 footIndex, ::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMLEGIK_HITGROUNDIMPL_OFFSET))(this, footIndex, footGlobalPos, footGlobalRot, toeGlobalPos, castHeight, hitPos, hitNormal);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> OrdinaryIkHitGround(::System::Int32 footIndex)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_ORDINARYIKHITGROUND_OFFSET))(this, footIndex);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> PredictIkHitGround(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 ordinaryHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_PREDICTIKHITGROUND_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, ordinaryHitNormal);
	}

	::System::Void DoCalculateTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 hitPos, ::UnityEngine::Vector3 hitNormal, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + AMLEGIK_DOCALCULATETARGET_OFFSET))(this, footIndex, hitPos, hitNormal, targetPos, targetRot);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CalculateFootTarget(::System::Int32 footIndex, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEFOOTTARGET_OFFSET))(this, footIndex, finalHitPos, finalHitNormal);
	}

	::System::Void SetFootControlParam(::System::Int32 footIndex, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AMLEGIK_SETFOOTCONTROLPARAM_OFFSET))(this, footIndex, targetPos, targetRot);
	}

	::System::Void FinalizeFootIk(::System::Int32 footIndex, ::System::Boolean needPIK, ::UnityEngine::Vector3 ordinaryHitPos, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::UnityEngine::Vector3 finalHitPos, ::UnityEngine::Vector3 finalHitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMLEGIK_FINALIZEFOOTIK_OFFSET))(this, footIndex, needPIK, ordinaryHitPos, targetPos, targetRot, finalHitPos, finalHitNormal);
	}

	::System::Single MinHipsDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_MINHIPSDELTA_OFFSET))(this);
	}

	::System::Single MaxHipsDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_MAXHIPSDELTA_OFFSET))(this);
	}

	::System::Single CalculatePelvisTargetLegacy()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGETLEGACY_OFFSET))(this);
	}

	::System::Single CalculatePelvisTargetAdcance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGETADCANCE_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CalculatePelvisTarget()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_CALCULATEPELVISTARGET_OFFSET))(this);
	}

	::System::Void OnFootPlant(::MoleMole::Config::AnimatorZoneFootPrint_FootType footType, ::System::Boolean isInZone, ::System::Boolean isSliding)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLEGIK_ONFOOTPLANT_OFFSET))(this, footType, isInZone, isSliding);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_UPDATE_OFFSET))(this);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMLEGIK_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_LATEUPDATE_OFFSET))(this);
	}
};
