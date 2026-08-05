#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_COLORFROMHTML_OFFSET UNITYSDK_OFFSET(0x1EA53C20)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_TRIMEND_OFFSET UNITYSDK_OFFSET(0x1EA54030)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x1EA53FE0)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int StringExt_TypeDefinitionIndex = 29012;

	class StringExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Color ColorFromHtml(::System::String* hexString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_COLORFROMHTML_OFFSET))(hexString);
		}

		static ::System::String* TrimStart(::System::String* s, ::System::String* trim, ::System::StringComparison compare)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_TRIMSTART_OFFSET))(s, trim, compare);
		}

		static ::System::String* TrimEnd(::System::String* s, ::System::String* trim, ::System::StringComparison compare)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_STRINGEXT_TRIMEND_OFFSET))(s, trim, compare);
		}
	};
}
