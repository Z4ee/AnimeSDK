#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AfterImageNew_MaterialColorProperty_TypeDefinitionIndex = 67271;

	struct alignas(8) Effect_AfterImageNew_MaterialColorProperty
	{
		::System::String* name; // 0x10
		::UnityEngine::Gradient* gradient; // 0x18
	};
}
