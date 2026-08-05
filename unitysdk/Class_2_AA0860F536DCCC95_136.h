#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_136__CTOR_OFFSET UNITYSDK_OFFSET(0x12831B00)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_136_TypeDefinitionIndex = 79158;

class Class_2_AA0860F536DCCC95_136 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_136__CTOR_OFFSET))(this);
	}
};
