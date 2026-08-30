#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PERSTATEPARAMSPECTRUM__CTOR_OFFSET UNITYSDK_OFFSET(0xDA4F810)

namespace RPG::Client
{
	inline static constexpr unsigned int PerStateParamSpectrum_TypeDefinitionIndex = 70787;

	class PerStateParamSpectrum : public ::System::Object
	{
	public:
		// static const ::System::Single _InMinFrequency; // 0x0
		// static const ::System::Single _InMaxFrequency; // 0x0
		::UnityEngine::Vector2 FrequencyRange; // 0x10
		::System::Single SpectrumSmooth; // 0x18
		::System::Boolean UseAmplitudeRemap; // 0x1C
		::UnityEngine::AnimationCurve* StateSpectrumFilterCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSTATEPARAMSPECTRUM__CTOR_OFFSET))(this);
		}
	};
}
