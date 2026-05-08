#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_125__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E9710)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_125_TypeDefinitionIndex = 66965;

class Class_2_AA0860F536DCCC95_125 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_125__CTOR_OFFSET))(this);
	}
};
