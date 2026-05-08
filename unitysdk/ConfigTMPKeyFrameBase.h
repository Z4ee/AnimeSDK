#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CONFIGTMPKEYFRAMEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x133E8270)

inline static constexpr unsigned int ConfigTMPKeyFrameBase_TypeDefinitionIndex = 66094;

class ConfigTMPKeyFrameBase : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Curve; // 0x10
	::System::Single KeyFrameTime; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTMPKEYFRAMEBASE__CTOR_OFFSET))(this);
	}
};
