#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/NumberRangeAttribute.h"

#define SROPTIONS_NUMBERRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E52770)

inline static constexpr unsigned int SROptions_NumberRangeAttribute_TypeDefinitionIndex = 40925;

class SROptions_NumberRangeAttribute : public ::SRDebugger::NumberRangeAttribute
{
public:
	::System::Void _ctor(::System::Double min, ::System::Double max)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SROPTIONS_NUMBERRANGEATTRIBUTE__CTOR_OFFSET))(this, min, max);
	}
};
