#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_BINDCONTROLACTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE21F0)

namespace SRDebugger
{
	inline static constexpr unsigned int BindControlActionAttribute_TypeDefinitionIndex = 35628;

	class BindControlActionAttribute : public ::System::Attribute
	{
	public:
		::System::String* ActionName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_BINDCONTROLACTIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
