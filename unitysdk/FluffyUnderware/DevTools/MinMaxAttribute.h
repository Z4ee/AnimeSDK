#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_MINMAXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA562F0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int MinMaxAttribute_TypeDefinitionIndex = 28968;

	class MinMaxAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* MaxValueField; // 0x30
		::System::String* MaxBoundFieldOrPropertyName; // 0x38
		::System::String* MinBoundFieldOrPropertyName; // 0x40
		::System::Single Max; // 0x48
		::System::Single Min; // 0x4C

		::System::Void _ctor(::System::String* maxValueField, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_MINMAXATTRIBUTE__CTOR_OFFSET))(this, maxValueField, label, tooltip);
		}
	};
}
