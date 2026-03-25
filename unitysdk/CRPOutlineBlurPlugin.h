#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRPOUTLINEBLURPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6D5020)
#define CRPOUTLINEBLURPLUGIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA6D4FA0)
#define CRPOUTLINEBLURPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D5080)

inline static constexpr unsigned int CRPOutlineBlurPlugin_TypeDefinitionIndex = 38227;

class CRPOutlineBlurPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean enable; // 0x18
	::System::Single GlobalGaussianSigma; // 0x1C
	::System::Single BlurScale; // 0x20
	::System::Single NearPlane; // 0x24
	::System::Single FarPlane; // 0x28
	::UnityEngine::Color OutlineColor; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOUTLINEBLURPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOUTLINEBLURPLUGIN_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOUTLINEBLURPLUGIN_ONDISABLE_OFFSET))(this);
	}
};
