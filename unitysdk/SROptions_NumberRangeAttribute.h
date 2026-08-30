#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/NumberRangeAttribute.h"

#define SROPTIONS_NUMBERRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xB31F220)

inline static constexpr unsigned int SROptions_NumberRangeAttribute_TypeDefinitionIndex = 44786;

class SROptions_NumberRangeAttribute : public ::SRDebugger::NumberRangeAttribute
{
public:
	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SROPTIONS_NUMBERRANGEATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
	}
};
