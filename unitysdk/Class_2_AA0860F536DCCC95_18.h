#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_18__CTOR_OFFSET UNITYSDK_OFFSET(0xE16CD00)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_18_TypeDefinitionIndex = 42765;

class Class_2_AA0860F536DCCC95_18 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_18__CTOR_OFFSET))(this);
	}
};
