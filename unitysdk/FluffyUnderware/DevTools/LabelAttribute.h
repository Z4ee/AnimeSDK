#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_LABELATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69D020)
#define FLUFFYUNDERWARE_DEVTOOLS_LABELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69CFE0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int LabelAttribute_TypeDefinitionIndex = 28354;

	class LabelAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_LABELATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_LABELATTRIBUTE__CTOR_1_OFFSET))(this, label, tooltip);
		}
	};
}
