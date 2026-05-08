#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_27__CTOR_OFFSET UNITYSDK_OFFSET(0x10C0FF60)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_27_TypeDefinitionIndex = 44209;

class Class_2_AA0860F536DCCC95_27 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_27__CTOR_OFFSET))(this);
	}
};
