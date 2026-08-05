#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_TEXTAREAFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E733280)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int TextAreaFieldAttribute_TypeDefinitionIndex = 30827;

	class TextAreaFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Int32 numberOfLines; // 0x10

		::System::Void _ctor(::System::Int32 numberOfLines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_TEXTAREAFIELDATTRIBUTE__CTOR_OFFSET))(this, numberOfLines);
		}
	};
}
