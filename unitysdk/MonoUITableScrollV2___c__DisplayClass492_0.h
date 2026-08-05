#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass492_0_TypeDefinitionIndex = 75014;

struct alignas(8) MonoUITableScrollV2___c__DisplayClass492_0
{
	::UnityEngine::GameObject* minGO; // 0x10
	::MonoUITableScrollV2* __4__this; // 0x18
	::UnityEngine::GameObject* maxGO; // 0x20
	::System::Int32 min; // 0x28
	::System::Int32 max; // 0x2C
	::UnityEngine::Vector2 customRange; // 0x30
	::System::Int32 count; // 0x38
};
