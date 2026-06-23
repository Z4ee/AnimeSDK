#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_MAXATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69D060)
#define FLUFFYUNDERWARE_DEVTOOLS_MAXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69D040)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int MaxAttribute_TypeDefinitionIndex = 28362;

	class MaxAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* MaxFieldOrPropertyName; // 0x30
		::System::Single MaxValue; // 0x38

		::System::Void _ctor(::System::Single value, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_MAXATTRIBUTE__CTOR_OFFSET))(this, value, label, tooltip);
		}

		::System::Void _ctor_1(::System::String* fieldOrProperty, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_MAXATTRIBUTE__CTOR_1_OFFSET))(this, fieldOrProperty, label, tooltip);
		}
	};
}
