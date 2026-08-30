#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CUSTOMVERTEXSTREAMS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3AFC480)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_CustomVertexStreams_TypeDefinitionIndex = 73595;

	struct alignas(4) SkinnedGPUParticlesBehavior_CustomVertexStreams
	{
		::System::Int32 Normal; // 0x10
		::System::Int32 Tangent; // 0x14
		::System::Int32 Color; // 0x18
		::System::Int32 UV; // 0x1C

		/*
		::UnityEngine::Vector4 get_Value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CUSTOMVERTEXSTREAMS_GET_VALUE_OFFSET))(this);
		}
		*/
	};
}
