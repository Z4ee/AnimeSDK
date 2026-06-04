#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define REFGPUPARTICLESYSTEMBURST_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1ABCD150)
#define REFGPUPARTICLESYSTEMBURST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF020)

inline static constexpr unsigned int RefGPUParticleSystemBurst_TypeDefinitionIndex = 40551;

class RefGPUParticleSystemBurst : public ::System::Object
{
public:
	::System::Int32 minBurst; // 0x10
	::System::Int32 maxBurst; // 0x14
	::System::Single burstTime; // 0x18
	::System::Single burstProbability; // 0x1C
	::System::Boolean playOnce; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBURST__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBURST_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
