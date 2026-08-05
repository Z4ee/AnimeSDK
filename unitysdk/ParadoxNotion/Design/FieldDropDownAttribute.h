#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_FIELDDROPDOWNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7331E0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int FieldDropDownAttribute_TypeDefinitionIndex = 30024;

	class FieldDropDownAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::String* NoneDisplayText; // 0x10
		::System::String* ValuesGetter; // 0x18

		::System::Void _ctor(::System::String* valuesGetter, ::System::String* noneDisplayText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_FIELDDROPDOWNATTRIBUTE__CTOR_OFFSET))(this, valuesGetter, noneDisplayText);
		}
	};
}
