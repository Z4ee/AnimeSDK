#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int PushBoxPlayerView_PushBoxPlayerAppearance_TypeDefinitionIndex = 42402;

struct alignas(8) PushBoxPlayerView_PushBoxPlayerAppearance
{
	::System::String* Key; // 0x10
	::System::String* PreTextureKey; // 0x18
	::System::String* TextureKey; // 0x20
};
