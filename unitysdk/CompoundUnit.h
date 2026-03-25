#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COMPOUNDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E6F70)

inline static constexpr unsigned int CompoundUnit_TypeDefinitionIndex = 38090;

class CompoundUnit : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOUNDUNIT__CTOR_OFFSET))(this);
	}
};
