#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLERECORDER_PARTICLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x177F6C50)

namespace ParticleRecorder
{
	inline static constexpr unsigned int ParticleClip_TypeDefinitionIndex = 35942;

	class ParticleClip : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customParticleData1; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customParticleData2; // 0x20
		::System::Single TimeRecord; // 0x28
		::System::Boolean isEmission; // 0x2C
		::System::Int32 maxBatchCount; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARTICLERECORDER_PARTICLECLIP__CTOR_OFFSET))(this, a1);
		}
	};
}
