#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_CUSTOMOPTIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD98570)

namespace SRDebugger
{
	inline static constexpr unsigned int CustomOptionsAttribute_TypeDefinitionIndex = 37271;

	class CustomOptionsAttribute : public ::System::Attribute
	{
	public:
		::System::String* TargetOptionTab; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_CUSTOMOPTIONSATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
