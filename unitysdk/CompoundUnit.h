#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COMPOUNDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36940)

inline static constexpr unsigned int CompoundUnit_TypeDefinitionIndex = 45388;

class CompoundUnit : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOUNDUNIT__CTOR_OFFSET))(this);
	}
};
