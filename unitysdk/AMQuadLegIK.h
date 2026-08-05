#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CurvePoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AMLegIKExt;
class CurveInterpolator;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class GameObject; }

#define AMQUADLEGIK_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x134A6AD0)
#define AMQUADLEGIK_GET_ENABLEDEBUGHIPHIT_OFFSET UNITYSDK_OFFSET(0x134A4A30)
#define AMQUADLEGIK_GET_ENABLEDEBUGNOTLOCKFOOT_OFFSET UNITYSDK_OFFSET(0x134A4A50)
#define AMQUADLEGIK_GET_ENABLEDEBUGSHOWSKELETON_OFFSET UNITYSDK_OFFSET(0x134A4A10)
#define AMQUADLEGIK_GET_LASTFRAMETHETA_OFFSET UNITYSDK_OFFSET(0x134A49F0)
#define AMQUADLEGIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x134A4BE0)
#define AMQUADLEGIK_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x134A6A20)
#define AMQUADLEGIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x134A50D0)
#define AMQUADLEGIK_QUADAMLEGIKPASS_OFFSET UNITYSDK_OFFSET(0x134A52D0)
#define AMQUADLEGIK_SET_ENABLEDEBUGHIPHIT_OFFSET UNITYSDK_OFFSET(0x134A4A40)
#define AMQUADLEGIK_SET_ENABLEDEBUGNOTLOCKFOOT_OFFSET UNITYSDK_OFFSET(0x134A4A60)
#define AMQUADLEGIK_SET_ENABLEDEBUGSHOWSKELETON_OFFSET UNITYSDK_OFFSET(0x134A4A20)
#define AMQUADLEGIK_SET_LASTFRAMETHETA_OFFSET UNITYSDK_OFFSET(0x134A4A00)
#define AMQUADLEGIK_START_OFFSET UNITYSDK_OFFSET(0x134A4A70)
#define AMQUADLEGIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x134A5240)
#define AMQUADLEGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x134A6DB0)

inline static constexpr unsigned int AMQuadLegIK_TypeDefinitionIndex = 47570;

class AMQuadLegIK : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* boneRoot; // 0x18
	::AMLegIKExt* fspineIK; // 0x20
	::AMLegIKExt* pelvisIK; // 0x28
	::System::Single thetaPosWeight; // 0x30
	::System::Single thetaRotWeight; // 0x34
	::System::Single fspineIKWeight; // 0x38
	::System::Single pelvisIKWeight; // 0x3C
	::System::Single BodyHeightDeltaVelocityLimit; // 0x40
	::System::Single FootAnimPosAdjustmentVelocityLimit; // 0x44
	::System::Single ThetaThreshold; // 0x48
	::System::Collections::Generic::List_1<::CurvePoint>* handsCurveData; // 0x50
	::System::Collections::Generic::List_1<::CurvePoint>* feetCurveData; // 0x58
	::System::Single lastHeightDelta; // 0x60
	::System::Single deltaTime; // 0x64
	::UnityEngine::AnimageComponent* animageComponent; // 0x68
	::CurveInterpolator* fspineAnimAdjustmentReferenceCurve; // 0x70
	::CurveInterpolator* pelvisAnimAdjustmentReferenceCurve; // 0x78
	::System::Single _lastFrameTheta_k__BackingField; // 0x80
	::System::Boolean _EnableDebugShowSkeleton_k__BackingField; // 0x84
	::System::Boolean _EnableDebugHipHit_k__BackingField; // 0x85
	::System::Boolean _EnableDebugNotLockFoot_k__BackingField; // 0x86

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK__CTOR_OFFSET))(this);
	}

	::System::Single get_lastFrameTheta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_GET_LASTFRAMETHETA_OFFSET))(this);
	}

	::System::Void set_lastFrameTheta(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMQUADLEGIK_SET_LASTFRAMETHETA_OFFSET))(this, value);
	}

	::System::Boolean get_EnableDebugShowSkeleton()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_GET_ENABLEDEBUGSHOWSKELETON_OFFSET))(this);
	}

	::System::Void set_EnableDebugShowSkeleton(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMQUADLEGIK_SET_ENABLEDEBUGSHOWSKELETON_OFFSET))(this, value);
	}

	::System::Boolean get_EnableDebugHipHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_GET_ENABLEDEBUGHIPHIT_OFFSET))(this);
	}

	::System::Void set_EnableDebugHipHit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMQUADLEGIK_SET_ENABLEDEBUGHIPHIT_OFFSET))(this, value);
	}

	::System::Boolean get_EnableDebugNotLockFoot()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_GET_ENABLEDEBUGNOTLOCKFOOT_OFFSET))(this);
	}

	::System::Void set_EnableDebugNotLockFoot(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMQUADLEGIK_SET_ENABLEDEBUGNOTLOCKFOOT_OFFSET))(this, value);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_ONENABLE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_INITIALIZE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_UPDATE_OFFSET))(this);
	}

	::System::Void QuadAMLegIKPass()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMQUADLEGIK_QUADAMLEGIKPASS_OFFSET))(this);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMQUADLEGIK_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void AddPoint(::System::Single theta, ::Il2CppArray<::UnityEngine::Vector2>* pelvisVectors, ::Il2CppArray<::UnityEngine::Vector2>* fspineVectors)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + AMQUADLEGIK_ADDPOINT_OFFSET))(this, theta, pelvisVectors, fspineVectors);
	}
};
