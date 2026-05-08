#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass458_0_TypeDefinitionIndex = 54143;

struct alignas(8) MonoUITableScrollV2___c__DisplayClass458_0
{
	::MonoUITableScrollV2* __4__this; // 0x10
	::UnityEngine::GameObject* minGO; // 0x18
	::UnityEngine::GameObject* maxGO; // 0x20
	::System::Int32 min; // 0x28
	::UnityEngine::Vector2 customRange; // 0x2C
	::System::Int32 max; // 0x34
	::System::Int32 count; // 0x38
};
