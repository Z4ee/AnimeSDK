#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParticleRecorder { class ParticleClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLERECORDER_PARTICLESYSTEMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9FF90)

namespace ParticleRecorder
{
	inline static constexpr unsigned int ParticleSystemItem_TypeDefinitionIndex = 35159;

	class ParticleSystemItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleClip*>* clips0; // 0x10
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleClip*>* clips1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLERECORDER_PARTICLESYSTEMITEM__CTOR_OFFSET))(this);
		}
	};
}
