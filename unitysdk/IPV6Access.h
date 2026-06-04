#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPV6ACCESS__CTOR_OFFSET UNITYSDK_OFFSET(0xA132FC0)

inline static constexpr unsigned int IPV6Access_TypeDefinitionIndex = 41746;

class IPV6Access : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPV6ACCESS__CTOR_OFFSET))(this);
	}
};
