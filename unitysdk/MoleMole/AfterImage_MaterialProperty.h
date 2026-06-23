#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int AfterImage_MaterialProperty_TypeDefinitionIndex = 54412;

	struct alignas(8) AfterImage_MaterialProperty
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
	};
}
