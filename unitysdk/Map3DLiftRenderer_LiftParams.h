#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

inline static constexpr unsigned int Map3DLiftRenderer_LiftParams_TypeDefinitionIndex = 75478;

struct alignas(8) Map3DLiftRenderer_LiftParams
{
	::UnityEngine::Material* lineMaterial; // 0x10
	::System::Single lineRadius; // 0x18
	::System::Single lineRadiusFar; // 0x1C
};
