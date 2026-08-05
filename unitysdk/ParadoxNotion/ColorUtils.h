#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_COLORUTILS_COLORTOHEX_OFFSET UNITYSDK_OFFSET(0x1DB3AAB0)
#define PARADOXNOTION_COLORUTILS_GREY_OFFSET UNITYSDK_OFFSET(0x1DB3AA90)
#define PARADOXNOTION_COLORUTILS_HEXTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1DB3AD10)
#define PARADOXNOTION_COLORUTILS_WITHALPHA_OFFSET UNITYSDK_OFFSET(0x1DB3AA80)
#define PARADOXNOTION_COLORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB3B060)

namespace ParadoxNotion
{
	inline static constexpr unsigned int ColorUtils_TypeDefinitionIndex = 30000;

	class ColorUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Color32, ::System::String*>** StaticGet_colorHexCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Color32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ColorUtils_TypeDefinitionIndex)->GetStaticField(0x26150);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>** StaticGet_hexColorCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ColorUtils_TypeDefinitionIndex)->GetStaticField(0x26158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_COLORUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color WithAlpha(::UnityEngine::Color color, ::System::Single alpha)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_COLORUTILS_WITHALPHA_OFFSET))(color, alpha);
		}

		static ::UnityEngine::Color Grey(::System::Single value)
		{
			return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_COLORUTILS_GREY_OFFSET))(value);
		}

		static ::System::String* ColorToHex(::UnityEngine::Color32 color)
		{
			return ((::System::String*(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + PARADOXNOTION_COLORUTILS_COLORTOHEX_OFFSET))(color);
		}

		static ::UnityEngine::Color HexToColor(::System::String* hex)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_COLORUTILS_HEXTOCOLOR_OFFSET))(hex);
		}
	};
}
