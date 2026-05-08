#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_124__CTOR_OFFSET UNITYSDK_OFFSET(0x117A8B00)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_124_TypeDefinitionIndex = 66947;

class Class_2_AA0860F536DCCC95_124 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_124__CTOR_OFFSET))(this);
	}
};
