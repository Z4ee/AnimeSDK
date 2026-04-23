#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_NUMBERRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E701E0)

namespace SRDebugger
{
	inline static constexpr unsigned int NumberRangeAttribute_TypeDefinitionIndex = 35325;

	class NumberRangeAttribute : public ::System::Attribute
	{
	public:
		::System::Double Max; // 0x10
		::System::Double Min; // 0x18

		::System::Void _ctor(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_NUMBERRANGEATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}
	};
}
