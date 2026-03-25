#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/IncrementAttribute.h"

#define SROPTIONS_INCREMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x861D120)

inline static constexpr unsigned int SROptions_IncrementAttribute_TypeDefinitionIndex = 35096;

class SROptions_IncrementAttribute : public ::SRDebugger::IncrementAttribute
{
public:
	::System::Void _ctor(::System::Double increment)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SROPTIONS_INCREMENTATTRIBUTE__CTOR_OFFSET))(this, increment);
	}
};
