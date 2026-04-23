#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_DROPSELECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6BDE0)

namespace SRDebugger
{
	inline static constexpr unsigned int DropSelectAttribute_TypeDefinitionIndex = 35323;

	class DropSelectAttribute : public ::System::Attribute
	{
	public:
		::System::String* SelectorEvent; // 0x10
		::System::String* SelectorName; // 0x18
		::System::Single TextHeight; // 0x20
		::System::Single TextWidth; // 0x24
		::System::Boolean AutoScroll; // 0x28
		::System::Boolean RefreshCategoryOnSelectorChanged; // 0x29

		::System::Void _ctor(::System::String* selectorName, ::System::Single textWidth, ::System::Single textHeight, ::System::String* selectorEvent, ::System::Boolean refreshCategoryOnSelectorChanged, ::System::Boolean autoScroll)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_DROPSELECTATTRIBUTE__CTOR_OFFSET))(this, selectorName, textWidth, textHeight, selectorEvent, refreshCategoryOnSelectorChanged, autoScroll);
		}
	};
}
