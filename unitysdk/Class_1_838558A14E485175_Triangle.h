#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_838558A14E485175_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x29380)

inline static constexpr unsigned int Class_1_838558A14E485175_Triangle_TypeDefinitionIndex = 56661;

struct alignas(4) Class_1_838558A14E485175_Triangle
{
	::UnityEngine::Vector2 a; // 0x10
	::UnityEngine::Vector2 b; // 0x18
	::UnityEngine::Vector2 c; // 0x20

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_TRIANGLE__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
