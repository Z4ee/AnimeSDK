#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_DESIGN_ICONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC64710)
#define PARADOXNOTION_DESIGN_ICONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC64700)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int IconAttribute_TypeDefinitionIndex = 29218;

	class IconAttribute : public ::System::Attribute
	{
	public:
		::System::Type* fromType; // 0x10
		::System::String* runtimeIconTypeCallback; // 0x18
		::System::String* iconName; // 0x20
		::System::Boolean fixedColor; // 0x28

		::System::Void _ctor(::System::String* iconName, ::System::Boolean fixedColor, ::System::String* runtimeIconTypeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_ICONATTRIBUTE__CTOR_OFFSET))(this, iconName, fixedColor, runtimeIconTypeCallback);
		}

		::System::Void _ctor_1(::System::Type* fromType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_ICONATTRIBUTE__CTOR_1_OFFSET))(this, fromType);
		}
	};
}
