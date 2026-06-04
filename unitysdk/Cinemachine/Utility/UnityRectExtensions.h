#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CINEMACHINE_UTILITY_UNITYRECTEXTENSIONS_INFLATED_OFFSET UNITYSDK_OFFSET(0x1466DC00)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityRectExtensions_TypeDefinitionIndex = 36961;

	class UnityRectExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect Inflated(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYRECTEXTENSIONS_INFLATED_OFFSET))(a1, a2);
		}
	};
}
