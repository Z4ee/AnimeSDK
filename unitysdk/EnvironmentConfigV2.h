#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class WeatherConfig;
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define ENVIRONMENTCONFIGV2_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1B166770)
#define ENVIRONMENTCONFIGV2_READFROMVOLUME_OFFSET UNITYSDK_OFFSET(0x1B1666C0)
#define ENVIRONMENTCONFIGV2_WRITETOVOLUME_OFFSET UNITYSDK_OFFSET(0x1B1669B0)
#define ENVIRONMENTCONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B166650)

inline static constexpr unsigned int EnvironmentConfigV2_TypeDefinitionIndex = 26512;

class EnvironmentConfigV2 : public ::UnityEngine::ScriptableObject
{
public:
	::WeatherConfig* weatherConfig; // 0x18

	::System::Void _ctor(::UnityEngine::Rendering::Universal::VisualEnvironmentE* env)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + ENVIRONMENTCONFIGV2__CTOR_OFFSET))(this, env);
	}

	::System::Void ReadFromVolume(::UnityEngine::Rendering::Universal::VisualEnvironmentE* inputVolume)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + ENVIRONMENTCONFIGV2_READFROMVOLUME_OFFSET))(this, inputVolume);
	}

	static ::WeatherConfig* DeepClone(::WeatherConfig* obj)
	{
		return ((::WeatherConfig*(*)(::WeatherConfig*))((::PBYTE)hIl2Cpp + ENVIRONMENTCONFIGV2_DEEPCLONE_OFFSET))(obj);
	}

	::System::Void WriteToVolume(::UnityEngine::Rendering::Universal::VisualEnvironmentE* outputVolume)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + ENVIRONMENTCONFIGV2_WRITETOVOLUME_OFFSET))(this, outputVolume);
	}
};
