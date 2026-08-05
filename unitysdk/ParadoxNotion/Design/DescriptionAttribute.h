#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_DESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7A3A0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DescriptionAttribute_TypeDefinitionIndex = 30220;

	class DescriptionAttribute : public ::System::Attribute
	{
	public:
		::System::String* description; // 0x10

		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}
	};
}
