#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_CATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBC500)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int CategoryAttribute_TypeDefinitionIndex = 28165;

	class CategoryAttribute : public ::System::Attribute
	{
	public:
		::System::String* category; // 0x10

		::System::Void _ctor(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_CATEGORYATTRIBUTE__CTOR_OFFSET))(this, category);
		}
	};
}
