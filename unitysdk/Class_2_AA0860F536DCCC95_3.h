#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F88D0)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_3_TypeDefinitionIndex = 42874;

class Class_2_AA0860F536DCCC95_3 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_3__CTOR_OFFSET))(this);
	}
};
