#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define RADIALBLURPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B15C650)
#define RADIALBLURPROXY_COPYVALUEFROMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0x1B15CA20)
#define RADIALBLURPROXY_SETVALUETORADIALBLUR_OFFSET UNITYSDK_OFFSET(0x1B15CC60)
#define RADIALBLURPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B15CC10)
#define RADIALBLURPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B15D040)

inline static constexpr unsigned int RadialBlurProxy_TypeDefinitionIndex = 49040;

class RadialBlurProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0x18
	::System::Int32 sampleCount; // 0x1C
	::System::Single radius; // 0x20
	::UnityEngine::Vector2 centerPosition; // 0x24
	::System::Single threshold; // 0x2C
	::UnityEngine::Rendering::Universal::RadialBlur* _radialBlur; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RADIALBLURPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RADIALBLURPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RADIALBLURPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFromRadialBlur()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RADIALBLURPROXY_COPYVALUEFROMRADIALBLUR_OFFSET))(this);
	}

	::System::Void SetValueToRadialBlur()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RADIALBLURPROXY_SETVALUETORADIALBLUR_OFFSET))(this);
	}
};
