#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_DROPSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD985B0)

namespace SRDebugger
{
	inline static constexpr unsigned int DropSelectorAttribute_TypeDefinitionIndex = 37265;

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
