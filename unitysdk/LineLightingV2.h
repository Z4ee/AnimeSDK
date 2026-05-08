#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LineLightingV2_CurveAxis.h"
#include "unitysdk/LineLightingV2_LineLightingV2Param.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define LINELIGHTINGV2_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C4F4C00)
#define LINELIGHTINGV2_COLLECTLINPOS_OFFSET UNITYSDK_OFFSET(0x1C4F57A0)
#define LINELIGHTINGV2_GETENABLE_OFFSET UNITYSDK_OFFSET(0x1C4F59C0)
#define LINELIGHTINGV2_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4F5A20)
#define LINELIGHTINGV2_INIT_OFFSET UNITYSDK_OFFSET(0x1C4F4CE0)
#define LINELIGHTINGV2_SETCUSTOMSCALE_OFFSET UNITYSDK_OFFSET(0x1C4F5980)
#define LINELIGHTINGV2_SETDYNAMICENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C4F5940)
#define LINELIGHTINGV2_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1C4F5990)
#define LINELIGHTINGV2_SETLINELIGHTINGV2PARAM_OFFSET UNITYSDK_OFFSET(0x1C4F59D0)
#define LINELIGHTINGV2_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1C4F4E00)
#define LINELIGHTINGV2_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4F4DC0)
#define LINELIGHTINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F5A30)

inline static constexpr unsigned int LineLightingV2_TypeDefinitionIndex = 33092;

class LineLightingV2 : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* EndTransform; // 0x18
	::System::Single altRotation; // 0x20
	::System::Single fps; // 0x24
	::System::Single ampX; // 0x28
	::System::Single ampY; // 0x2C
	::System::Single ampZ; // 0x30
	::System::Single displacement; // 0x34
	::System::Single detail; // 0x38
	::System::Boolean useCurve; // 0x3C
	::UnityEngine::AnimationCurve* curve; // 0x40
	::System::Single curveAmp; // 0x48
	::LineLightingV2_CurveAxis curveAxis; // 0x4C
	::System::Boolean enableMonoUpdate; // 0x50
	::System::Boolean _isDirty; // 0x51
	::UnityEngine::LineRenderer* _lineRender; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _linePosList; // 0x60
	::System::Single _time; // 0x68
	::System::Single _frameThreshhold; // 0x6C
	::System::Single _oriLength; // 0x70
	::System::Boolean _useDynamicEndPos; // 0x74
	::System::Boolean _isDynamicEndPosChange; // 0x75
	::UnityEngine::Vector3 _dynamicEndPos; // 0x78
	::System::Single _customTimeScale; // 0x84
	::System::Boolean _alphaEnable; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_AWAKE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_INIT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_UPDATE_OFFSET))(this);
	}

	::System::Void Simulate(::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_SIMULATE_OFFSET))(this, dt);
	}

	::System::Void CollectLinPos(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 destPos, ::System::Single displace)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_COLLECTLINPOS_OFFSET))(this, startPos, destPos, displace);
	}

	::System::Void SetDynamicEndPoint(::UnityEngine::Vector3 dynamicEnd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_SETDYNAMICENDPOINT_OFFSET))(this, dynamicEnd);
	}

	::System::Void SetCustomScale(::System::Single timeScale)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_SETCUSTOMSCALE_OFFSET))(this, timeScale);
	}

	::System::Void SetEnable(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_SETENABLE_OFFSET))(this, enable);
	}

	::System::Boolean GetEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_GETENABLE_OFFSET))(this);
	}

	::System::Void SetLineLightingV2Param(::LineLightingV2_LineLightingV2Param param)
	{
		return ((::System::Void(*)(::PVOID, ::LineLightingV2_LineLightingV2Param))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_SETLINELIGHTINGV2PARAM_OFFSET))(this, param);
	}

	::System::Single GetLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTINGV2_GETLENGTH_OFFSET))(this);
	}
};
