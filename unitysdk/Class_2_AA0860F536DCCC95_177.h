#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_177__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE010)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_177_TypeDefinitionIndex = 88686;

class Class_2_AA0860F536DCCC95_177 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_177__CTOR_OFFSET))(this);
	}
};
