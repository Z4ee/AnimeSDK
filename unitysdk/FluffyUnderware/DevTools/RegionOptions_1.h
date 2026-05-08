#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTValueClamping.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int RegionOptions_1_TypeDefinitionIndex = 25879;

	template <typename T>
	struct RegionOptions_1
	{
		::System::String* LabelFrom; // 0x0
		::System::String* LabelTo; // 0x0
		::System::String* OptionalTooltip; // 0x0
		::FluffyUnderware::DevTools::DTValueClamping ClampFrom; // 0x0
		::FluffyUnderware::DevTools::DTValueClamping ClampTo; // 0x0
		T FromMin; // 0x0
		T FromMax; // 0x0
		T ToMin; // 0x0
		T ToMax; // 0x0
	};
}
