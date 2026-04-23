#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_INCREMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6C0F0)

namespace SRDebugger
{
	inline static constexpr unsigned int IncrementAttribute_TypeDefinitionIndex = 35326;

	class IncrementAttribute : public ::System::Attribute
	{
	public:
		::System::Double Increment; // 0x10

		::System::Void _ctor(::System::Double increment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_INCREMENTATTRIBUTE__CTOR_OFFSET))(this, increment);
		}
	};
}
