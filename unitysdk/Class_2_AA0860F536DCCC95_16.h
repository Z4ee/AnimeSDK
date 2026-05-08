#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_16__CTOR_OFFSET UNITYSDK_OFFSET(0xD08C9C0)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_16_TypeDefinitionIndex = 42395;

class Class_2_AA0860F536DCCC95_16 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_16__CTOR_OFFSET))(this);
	}
};
