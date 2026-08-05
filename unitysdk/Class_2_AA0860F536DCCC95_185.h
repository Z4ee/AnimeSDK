#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_185__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEF970)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_185_TypeDefinitionIndex = 90875;

class Class_2_AA0860F536DCCC95_185 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_185__CTOR_OFFSET))(this);
	}
};
