#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_COLORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF8B40)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ColorAttribute_TypeDefinitionIndex = 30880;

	class ColorAttribute : public ::System::Attribute
	{
	public:
		::System::String* hexColor; // 0x10

		::System::Void _ctor(::System::String* hexColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_COLORATTRIBUTE__CTOR_OFFSET))(this, hexColor);
		}
	};
}
