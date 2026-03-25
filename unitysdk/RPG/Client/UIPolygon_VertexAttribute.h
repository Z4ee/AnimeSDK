#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_UIPOLYGON_VERTEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x85F00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPolygon_VertexAttribute_TypeDefinitionIndex = 59582;

	struct alignas(4) UIPolygon_VertexAttribute
	{
		::UnityEngine::Vector2 pos; // 0x10
		::UnityEngine::Vector2 uv; // 0x18
		::UnityEngine::Color color; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 pos, ::UnityEngine::Vector2 uv, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_VERTEXATTRIBUTE__CTOR_OFFSET))(this, pos, uv, color);
		}
	};
}
