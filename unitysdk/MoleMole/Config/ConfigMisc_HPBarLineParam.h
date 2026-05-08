#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_HPBarLineParam_TypeDefinitionIndex = 63724;

	struct alignas(8) ConfigMisc_HPBarLineParam
	{
		::UnityEngine::Color LineColor2; // 0x10
		::System::Single LineRecoverTime; // 0x20
		::UnityEngine::AnimationCurve* LineRecoverCurve; // 0x28
		::System::Single LineKeepTime; // 0x30
		::System::Single LineClearTime; // 0x34
	};
}
