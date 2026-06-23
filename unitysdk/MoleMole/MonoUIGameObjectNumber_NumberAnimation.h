#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_NumberAnimation_TypeDefinitionIndex = 81315;

	struct alignas(8) MonoUIGameObjectNumber_NumberAnimation
	{
		::UnityEngine::Animation* animation; // 0x10
		::System::String* animationName; // 0x18
	};
}
