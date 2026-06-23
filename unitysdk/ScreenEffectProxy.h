#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define SCREENEFFECTPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AADB580)
#define SCREENEFFECTPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x1AADB980)
#define SCREENEFFECTPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x1AADBC10)
#define SCREENEFFECTPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AADBBC0)
#define SCREENEFFECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADBEC0)

inline static constexpr unsigned int ScreenEffectProxy_TypeDefinitionIndex = 65018;

class ScreenEffectProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single boundaryUVAspect; // 0x18
	::System::Single boundary; // 0x1C
	::System::Single feather; // 0x20
	::System::Single maxOpacity; // 0x24
	::System::Single lerpBrightness; // 0x28
	::System::Single distortionIntensity; // 0x2C
	::System::Single dissolveDistortionIntensity; // 0x30
	::UnityEngine::Rendering::Universal::ScreenEffects* _screenEffect; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENEFFECTPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENEFFECTPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENEFFECTPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENEFFECTPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENEFFECTPROXY_SETVALUETO_OFFSET))(this);
	}
};
