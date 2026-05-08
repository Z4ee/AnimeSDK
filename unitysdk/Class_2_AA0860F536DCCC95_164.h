#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_164__CTOR_OFFSET UNITYSDK_OFFSET(0x133F9590)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_164_TypeDefinitionIndex = 78073;

class Class_2_AA0860F536DCCC95_164 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_164__CTOR_OFFSET))(this);
	}
};
