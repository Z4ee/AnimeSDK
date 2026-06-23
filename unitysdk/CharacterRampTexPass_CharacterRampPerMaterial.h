#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int CharacterRampTexPass_CharacterRampPerMaterial_TypeDefinitionIndex = 27013;

struct alignas(4) CharacterRampTexPass_CharacterRampPerMaterial
{
	::UnityEngine::Vector3 shadowColor; // 0x10
	::System::Single lightDirectionFromCamera; // 0x1C
	::UnityEngine::Vector3 shallowColor; // 0x20
	::System::Single shadowColorFadeByZ; // 0x2C
};
