#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundImage_TypeDefinitionIndex = 38980;

	struct alignas(8) LayerBackgroundImage
	{
		::UnityEngine::Color Color; // 0x10
		::System::String* ImagePath; // 0x20
		::System::Single FadeTime; // 0x28
	};
}
