#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define FOUNDATION_COLORX_COLORTOHEX_OFFSET UNITYSDK_OFFSET(0x1C00CD40)
#define FOUNDATION_COLORX_HEXTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1C00D0C0)
#define FOUNDATION_COLORX_LERP_OFFSET UNITYSDK_OFFSET(0x1C00D330)
#define FOUNDATION_COLORX_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C00D3F0)

namespace Foundation
{
	inline static constexpr unsigned int ColorX_TypeDefinitionIndex = 8285;

	class ColorX : public ::System::Object
	{
	public:
		static ::System::String* ColorToHex(::UnityEngine::Color color)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_COLORX_COLORTOHEX_OFFSET))(color);
		}

		static ::UnityEngine::Color HexToColor(::System::String* hex)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COLORX_HEXTOCOLOR_OFFSET))(hex);
		}

		static ::UnityEngine::Color Lerp(::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COLORX_LERP_OFFSET))(from, to, t);
		}

		static ::UnityEngine::Vector3 ToVector3(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_COLORX_TOVECTOR3_OFFSET))(color);
		}
	};
}
