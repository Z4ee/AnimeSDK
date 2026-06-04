#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CUSTOMRP_MATHEXT_DIV_OFFSET UNITYSDK_OFFSET(0x18EEB3E0)
#define RPG_CUSTOMRP_MATHEXT_MAX_OFFSET UNITYSDK_OFFSET(0x18EEB3A0)
#define RPG_CUSTOMRP_MATHEXT_SQRT_OFFSET UNITYSDK_OFFSET(0x18EEB2B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MathExt_TypeDefinitionIndex = 35305;

	class MathExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Color Sqrt(::UnityEngine::Color& a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_SQRT_OFFSET))(a1);
		}

		static ::UnityEngine::Color Max(::UnityEngine::Color& a1, ::UnityEngine::Color& a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_MAX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color Div(::UnityEngine::Color a1, ::UnityEngine::Color& a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATHEXT_DIV_OFFSET))(a1, a2);
		}
	};
}
