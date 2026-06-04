#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ParticleRecorder { class ParticleSystemItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLERECORDER_BACKWARDPARTICLESINFOSO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9FE50)

namespace ParticleRecorder
{
	inline static constexpr unsigned int BackwardParticlesInfoSO_TypeDefinitionIndex = 35161;

	class BackwardParticlesInfoSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleSystemItem*>* particleSystemItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLERECORDER_BACKWARDPARTICLESINFOSO__CTOR_OFFSET))(this);
		}
	};
}
