#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_ENUMFLAGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D0160)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int EnumFlagAttribute_TypeDefinitionIndex = 25871;

	class EnumFlagAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::Void _ctor(::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ENUMFLAGATTRIBUTE__CTOR_OFFSET))(this, label, tooltip);
		}
	};
}
