#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COMPOUNDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE00A2F0)

inline static constexpr unsigned int CompoundUnit_TypeDefinitionIndex = 47638;

class CompoundUnit : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOUNDUNIT__CTOR_OFFSET))(this);
	}
};
