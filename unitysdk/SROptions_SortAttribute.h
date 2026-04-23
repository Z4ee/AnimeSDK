#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/SortAttribute.h"

#define SROPTIONS_SORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E52780)

inline static constexpr unsigned int SROptions_SortAttribute_TypeDefinitionIndex = 40926;

class SROptions_SortAttribute : public ::SRDebugger::SortAttribute
{
public:
	::System::Void _ctor(::System::Int32 priority)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SROPTIONS_SORTATTRIBUTE__CTOR_OFFSET))(this, priority);
	}
};
