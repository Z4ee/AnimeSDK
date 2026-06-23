#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_50__CTOR_OFFSET UNITYSDK_OFFSET(0xF5D3020)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_50_TypeDefinitionIndex = 56013;

class Class_2_AA0860F536DCCC95_50 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_50__CTOR_OFFSET))(this);
	}
};
