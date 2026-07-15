#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_DROPSELECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1EE7F0)

namespace SRDebugger
{
	inline static constexpr unsigned int DropSelectAttribute_TypeDefinitionIndex = 36405;

	class DropSelectAttribute : public ::System::Attribute
	{
	public:
		::System::String* SelectorEvent; // 0x10
		::System::String* SelectorName; // 0x18
		::System::Boolean RefreshCategoryOnSelectorChanged; // 0x20
		::System::Boolean AutoScroll; // 0x21
		::System::Single TextWidth; // 0x24
		::System::Single TextHeight; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_DROPSELECTATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
