#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_ColorMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Gradient; }

#define COLORGRADIENTBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E370)

inline static constexpr unsigned int ColorGradientBundle_TypeDefinitionIndex = 42291;

class ColorGradientBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_ColorMode mode; // 0x10
	::System::Single intensity; // 0x14
	::UnityEngine::Color color1; // 0x18
	::UnityEngine::Color color2; // 0x28
	::UnityEngine::Gradient* gradient1; // 0x38
	::UnityEngine::Gradient* gradient2; // 0x40
	::System::Single seed; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORGRADIENTBUNDLE__CTOR_OFFSET))(this);
	}
};
