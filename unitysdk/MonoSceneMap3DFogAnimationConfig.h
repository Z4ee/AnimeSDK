#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MONOSCENEMAP3DFOGANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF22F0)

inline static constexpr unsigned int MonoSceneMap3DFogAnimationConfig_TypeDefinitionIndex = 82036;

class MonoSceneMap3DFogAnimationConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::AnimationCurve* fogCurve; // 0x18
	::System::Single fogDuration; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DFOGANIMATIONCONFIG__CTOR_OFFSET))(this);
	}
};
