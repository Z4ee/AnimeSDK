#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_ISBETWEEN0AND1_OFFSET UNITYSDK_OFFSET(0x1B2D10E0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_ISBETWEEN_OFFSET UNITYSDK_OFFSET(0x1B2D1100)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_REPEAT_OFFSET UNITYSDK_OFFSET(0x1B2D1120)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int FloatExt_TypeDefinitionIndex = 25905;

	class FloatExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsBetween0And1(::System::Single v)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_ISBETWEEN0AND1_OFFSET))(v);
		}

		static ::System::Boolean IsBetween(::System::Single v, ::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_ISBETWEEN_OFFSET))(v, a, b);
		}

		static ::System::Single Repeat(::System::Single v, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_FLOATEXT_REPEAT_OFFSET))(v, min, max);
		}
	};
}
