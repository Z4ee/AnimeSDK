#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_2BC1F0DE405AE0D4_SEGMENT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x2BC61B0)
#define CLASS_1_2BC1F0DE405AE0D4_SEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x80F20)

inline static constexpr unsigned int Class_1_2BC1F0DE405AE0D4_Segment_TypeDefinitionIndex = 64827;

struct alignas(4) Class_1_2BC1F0DE405AE0D4_Segment
{
	::UnityEngine::Vector2 a; // 0x10
	::UnityEngine::Vector2 b; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_SEGMENT__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 get_Center()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_SEGMENT_GET_CENTER_OFFSET))(this);
	}
};
