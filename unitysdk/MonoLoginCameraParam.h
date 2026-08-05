#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MONOLOGINCAMERAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x162F9A20)

inline static constexpr unsigned int MonoLoginCameraParam_TypeDefinitionIndex = 58421;

class MonoLoginCameraParam : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::AnimationCurve* PositionCurve; // 0x18
	::UnityEngine::AnimationCurve* RotationCurve; // 0x20
	::UnityEngine::AnimationCurve* FovCurve; // 0x28
	::System::Single Time; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOGINCAMERAPARAM__CTOR_OFFSET))(this);
	}
};
