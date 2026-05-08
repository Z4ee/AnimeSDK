#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class Glitch; }

#define GLITCHPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x10B32DB0)
#define GLITCHPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x10B33180)
#define GLITCHPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x10B33460)
#define GLITCHPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x10B33410)
#define GLITCHPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x10B33790)

inline static constexpr unsigned int GlitchProxy_TypeDefinitionIndex = 39601;

class GlitchProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single glitchAngle; // 0x18
	::System::Single rShift; // 0x1C
	::System::Single gShift; // 0x20
	::System::Single bShift; // 0x24
	::System::Single noiseScale; // 0x28
	::System::Single noiseDistortion; // 0x2C
	::System::Single distortionThreshold; // 0x30
	::System::Single lineThresholdMin; // 0x34
	::System::Single lineThresholdMax; // 0x38
	::System::Single lineBrightness; // 0x3C
	::UnityEngine::Rendering::Universal::Glitch* _glitchField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHPROXY_SETVALUETO_OFFSET))(this);
	}
};
