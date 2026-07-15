#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AfterImageNew_MaterialProperty_TypeDefinitionIndex = 67270;

	struct alignas(8) Effect_AfterImageNew_MaterialProperty
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
	};
}
