#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_171__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6A1A0)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_171_TypeDefinitionIndex = 84935;

class Class_2_AA0860F536DCCC95_171 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_171__CTOR_OFFSET))(this);
	}
};
