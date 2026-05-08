#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraCurve_1_TypeDefinitionIndex = 75922;

	template <typename T>
	class ConfigCameraCurve_1 : public ::System::Object
	{
	public:
		T target; // 0x0
		::UnityEngine::AnimationCurve* forwardCurve; // 0x0
		::UnityEngine::AnimationCurve* backwardCurve; // 0x0
	};
}
