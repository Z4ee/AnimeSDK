#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CUSTOMRP_MATHEXT_DIV_OFFSET UNITYSDK_OFFSET(0x18145360)
#define RPG_CUSTOMRP_MATHEXT_MAX_OFFSET UNITYSDK_OFFSET(0x18145320)
#define RPG_CUSTOMRP_MATHEXT_SQRT_OFFSET UNITYSDK_OFFSET(0x18145230)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MathExt_TypeDefinitionIndex = 35020;

	class MathExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Color Sqrt(::UnityEngine::Color& color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_SQRT_OFFSET))(color);
		}

		static ::UnityEngine::Color Max(::UnityEngine::Color& color1, ::UnityEngine::Color& color2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_MAX_OFFSET))(color1, color2);
		}

		static ::UnityEngine::Color Div(::UnityEngine::Color color1, ::UnityEngine::Color& color2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_DIV_OFFSET))(color1, color2);
		}
	};
}
