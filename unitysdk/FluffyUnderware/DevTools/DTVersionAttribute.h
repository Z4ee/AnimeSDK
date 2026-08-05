#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA51320)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTVersionAttribute_TypeDefinitionIndex = 28945;

	class DTVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* Version; // 0x10

		::System::Void _ctor(::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTVERSIONATTRIBUTE__CTOR_OFFSET))(this, version);
		}
	};
}
