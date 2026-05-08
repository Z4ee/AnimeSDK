#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }

inline static constexpr unsigned int BlendShapeControlSequencePlay_SequenceParameters_TypeDefinitionIndex = 45010;

struct alignas(8) BlendShapeControlSequencePlay_SequenceParameters
{
	::UnityEngine::Texture2D* texture; // 0x10
	::UnityEngine::Vector4 parameters; // 0x18
};
