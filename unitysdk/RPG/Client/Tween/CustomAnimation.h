#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::Tween
{
	inline static constexpr unsigned int CustomAnimation_TypeDefinitionIndex = 70073;

	struct alignas(8) CustomAnimation
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
	};
}
