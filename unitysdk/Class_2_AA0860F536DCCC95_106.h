#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_106__CTOR_OFFSET UNITYSDK_OFFSET(0x122C9C90)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_106_TypeDefinitionIndex = 71640;

class Class_2_AA0860F536DCCC95_106 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_106__CTOR_OFFSET))(this);
	}
};
