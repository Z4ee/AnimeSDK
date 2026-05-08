#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_173__CTOR_OFFSET UNITYSDK_OFFSET(0x121C4780)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_173_TypeDefinitionIndex = 80885;

class Class_2_AA0860F536DCCC95_173 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_173__CTOR_OFFSET))(this);
	}
};
