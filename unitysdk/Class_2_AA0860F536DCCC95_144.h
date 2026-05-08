#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_144__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3D1B0)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_144_TypeDefinitionIndex = 72900;

class Class_2_AA0860F536DCCC95_144 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_144__CTOR_OFFSET))(this);
	}
};
