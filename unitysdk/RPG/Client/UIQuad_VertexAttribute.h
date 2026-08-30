#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_UIQUAD_VERTEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x159C10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIQuad_VertexAttribute_TypeDefinitionIndex = 72635;

	struct alignas(4) UIQuad_VertexAttribute
	{
		::UnityEngine::Vector2 pos; // 0x10
		::UnityEngine::Vector2 uv; // 0x18
		::UnityEngine::Color color; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_VERTEXATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
