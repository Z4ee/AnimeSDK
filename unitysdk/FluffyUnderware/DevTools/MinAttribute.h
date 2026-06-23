#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_MINATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69D0A0)
#define FLUFFYUNDERWARE_DEVTOOLS_MINATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69D080)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int MinAttribute_TypeDefinitionIndex = 28360;

	class MinAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* MinFieldOrPropertyName; // 0x30
		::System::Single MinValue; // 0x38

		::System::Void _ctor(::System::Single value, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_MINATTRIBUTE__CTOR_OFFSET))(this, value, label, tooltip);
		}

		::System::Void _ctor_1(::System::String* fieldOrProperty, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_MINATTRIBUTE__CTOR_1_OFFSET))(this, fieldOrProperty, label, tooltip);
		}
	};
}
