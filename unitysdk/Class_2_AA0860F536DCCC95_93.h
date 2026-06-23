#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_AA0860F536DCCC95_93__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBDA80)

inline static constexpr unsigned int Class_2_AA0860F536DCCC95_93_TypeDefinitionIndex = 66982;

class Class_2_AA0860F536DCCC95_93 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA0860F536DCCC95_93__CTOR_OFFSET))(this);
	}
};
