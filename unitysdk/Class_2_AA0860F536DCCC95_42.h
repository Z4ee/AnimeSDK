#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_42__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9C580)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_42_TypeDefinitionIndex = 46731;

class Class_2_AA0860F536DCCC95_42 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_42__CTOR_OFFSET))(this);
	}
};
