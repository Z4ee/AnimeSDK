#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleRecorder/ParticleRecorderState.h"
#include "unitysdk/System/Object.h"

#define PARTICLERECORDER_PARTICLERECORDERS__CTOR_OFFSET UNITYSDK_OFFSET(0x180FD110)

namespace ParticleRecorder
{
	inline static constexpr unsigned int ParticleRecorders_TypeDefinitionIndex = 34875;

	class ParticleRecorders : public ::System::Object
	{
	public:
		::ParticleRecorder::ParticleRecorderState State; // 0x10
		::System::Int32 Counter; // 0x14
		::System::Int32 BackwardCounter; // 0x18
		::System::Boolean isEmission; // 0x1C
		::System::Single elapsedTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLERECORDER_PARTICLERECORDERS__CTOR_OFFSET))(this);
		}
	};
}
