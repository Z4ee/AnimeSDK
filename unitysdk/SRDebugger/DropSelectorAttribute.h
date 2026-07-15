#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_DROPSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1EE820)

namespace SRDebugger
{
	inline static constexpr unsigned int DropSelectorAttribute_TypeDefinitionIndex = 36406;

	class DropSelectorAttribute : public ::System::Attribute
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_DROPSELECTORATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
