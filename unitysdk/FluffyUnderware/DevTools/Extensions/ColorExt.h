#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COLOREXT_TOHTML_OFFSET UNITYSDK_OFFSET(0x1D698610)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int ColorExt_TypeDefinitionIndex = 28405;

	class ColorExt : public ::System::Object
	{
	public:
		static ::System::String* ToHtml(::UnityEngine::Color c)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COLOREXT_TOHTML_OFFSET))(c);
		}
	};
}
