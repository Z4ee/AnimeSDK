#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPV6ACCESS__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A4C30)

inline static constexpr unsigned int IPV6Access_TypeDefinitionIndex = 44789;

class IPV6Access : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPV6ACCESS__CTOR_OFFSET))(this);
	}
};
