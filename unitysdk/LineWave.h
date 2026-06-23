#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LineWave_Origins.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define LINEWAVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E829B70)
#define LINEWAVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E829C40)
#define LINEWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82A550)

inline static constexpr unsigned int LineWave_TypeDefinitionIndex = 34658;

class LineWave : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single ampT; // 0x18
	::UnityEngine::Material* traceMaterial; // 0x20
	::System::Single traceWidth; // 0x28
	::UnityEngine::GameObject* targetOptional; // 0x30
	::System::Single altRotation; // 0x38
	::LineWave_Origins origin; // 0x3C
	::System::Int32 size; // 0x40
	::System::Single lengh; // 0x44
	::System::Single freq; // 0x48
	::System::Single amp; // 0x4C
	::System::Boolean ampByFreq; // 0x50
	::System::Boolean centered; // 0x51
	::System::Boolean centCrest; // 0x52
	::System::Boolean warp; // 0x53
	::System::Boolean warpInvert; // 0x54
	::System::Single warpRandom; // 0x58
	::System::Single walkManual; // 0x5C
	::System::Single walkAuto; // 0x60
	::System::Boolean spiral; // 0x64
	::UnityEngine::AnimationCurve* posCurve; // 0x68
	::System::Single start; // 0x70
	::System::Single warpT; // 0x74
	::System::Single angle; // 0x78
	::System::Single sinAngle; // 0x7C
	::System::Single sinAngleZ; // 0x80
	::System::Double walkShift; // 0x88
	::UnityEngine::Vector3 posVtx2; // 0x90
	::UnityEngine::Vector3 posVtxSizeMinusOne; // 0x9C
	::UnityEngine::LineRenderer* lrComp; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINEWAVE__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINEWAVE_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINEWAVE_UPDATE_OFFSET))(this);
	}
};
