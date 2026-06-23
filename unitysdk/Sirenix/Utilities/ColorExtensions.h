#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_COLOREXTENSIONS_LERP_OFFSET UNITYSDK_OFFSET(0x1DE4CE50)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1DE4CF20)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_NORMALIZERGB_OFFSET UNITYSDK_OFFSET(0x1DE4D810)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_POW_OFFSET UNITYSDK_OFFSET(0x1DE4D7A0)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_TOCSHARPCOLOR_OFFSET UNITYSDK_OFFSET(0x1DE4D450)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_TRIMFLOAT_OFFSET UNITYSDK_OFFSET(0x1DE4D630)
#define SIRENIX_UTILITIES_COLOREXTENSIONS_TRYPARSESTRING_OFFSET UNITYSDK_OFFSET(0x1DE4CF70)
#define SIRENIX_UTILITIES_COLOREXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D8B0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int ColorExtensions_TypeDefinitionIndex = 6436;

	class ColorExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_trimRGBStart()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ColorExtensions_TypeDefinitionIndex)->GetStaticField(0x59E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color Lerp(::Il2CppArray<::UnityEngine::Color>* colors, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::Il2CppArray<::UnityEngine::Color>*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_LERP_OFFSET))(colors, t);
		}

		static ::UnityEngine::Color MoveTowards(::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single maxDelta)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_MOVETOWARDS_OFFSET))(from, to, maxDelta);
		}

		static ::System::Boolean TryParseString(::System::String* colorStr, ::UnityEngine::Color& color)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_TRYPARSESTRING_OFFSET))(colorStr, color);
		}

		static ::System::String* ToCSharpColor(::UnityEngine::Color color)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_TOCSHARPCOLOR_OFFSET))(color);
		}

		static ::UnityEngine::Color Pow(::UnityEngine::Color color, ::System::Single factor)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_POW_OFFSET))(color, factor);
		}

		static ::UnityEngine::Color NormalizeRGB(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_NORMALIZERGB_OFFSET))(color);
		}

		static ::System::String* TrimFloat(::System::Single value)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_COLOREXTENSIONS_TRIMFLOAT_OFFSET))(value);
		}
	};
}
