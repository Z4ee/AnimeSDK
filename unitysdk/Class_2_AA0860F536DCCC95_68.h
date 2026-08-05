#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_68__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0F820)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_68_TypeDefinitionIndex = 58126;

class Class_2_AA0860F536DCCC95_68 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_68__CTOR_OFFSET))(this);
	}
};
