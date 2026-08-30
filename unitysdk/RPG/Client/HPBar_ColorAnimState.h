#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HPBar_ColorAnimState_TypeDefinitionIndex = 72466;

	struct alignas(4) HPBar_ColorAnimState
	{
		::UnityEngine::Color colorDummy; // 0x10
		::UnityEngine::Color colorB; // 0x20
		::UnityEngine::Color colorL; // 0x30
		::UnityEngine::Color colorR; // 0x40
		::UnityEngine::Color colorD; // 0x50
	};
}
