#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleBaseDataType.h"

#define PARTICLEVECTOR4DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23D5C0)

inline static constexpr unsigned int ParticleVector4Data_TypeDefinitionIndex = 26965;

class ParticleVector4Data : public ::ParticleBaseDataType
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEVECTOR4DATA__CTOR_OFFSET))(this);
	}
};
