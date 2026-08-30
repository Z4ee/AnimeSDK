#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_INCREMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD98930)

namespace SRDebugger
{
	inline static constexpr unsigned int IncrementAttribute_TypeDefinitionIndex = 37267;

	class IncrementAttribute : public ::System::Attribute
	{
	public:
		::System::Double Increment; // 0x10

		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_INCREMENTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
