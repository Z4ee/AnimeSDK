#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

#define CLASS_2_880B97E2DED4BCEE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DF280)

inline static constexpr unsigned int Class_2_880B97E2DED4BCEE_TypeDefinitionIndex = 59126;

class Class_2_880B97E2DED4BCEE : public ::RPG::Client::BaseRedDotFilter
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_880B97E2DED4BCEE__CTOR_OFFSET))(this);
	}
};
