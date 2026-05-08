#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int Character_TypeDefinitionIndex = 29610;

struct alignas(4) Character
{
	::UnityEngine::Vector3 position; // 0x10
	::System::Single bounds; // 0x1C
	::System::Int32 startID; // 0x20
	::System::Int32 endID; // 0x24
	::System::Single lightIndex; // 0x28
};
