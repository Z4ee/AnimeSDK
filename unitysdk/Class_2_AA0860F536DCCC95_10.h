#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_10__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0A2D0)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_10_TypeDefinitionIndex = 45848;

class Class_2_AA0860F536DCCC95_10 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_10__CTOR_OFFSET))(this);
	}
};
