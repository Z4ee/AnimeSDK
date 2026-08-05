#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int DiceInfo_TypeDefinitionIndex = 81642;

	struct alignas(8) DiceInfo
	{
		::System::Int32 index; // 0x10
		::UnityEngine::GameObject* animDices; // 0x18
		::UnityEngine::GameObject* ctrlDices; // 0x20
	};
}
