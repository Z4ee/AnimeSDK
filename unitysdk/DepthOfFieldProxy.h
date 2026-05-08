#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define DEPTHOFFIELDPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x13D959B0)
#define DEPTHOFFIELDPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x13D95D80)
#define DEPTHOFFIELDPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x13D96060)
#define DEPTHOFFIELDPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x13D96010)
#define DEPTHOFFIELDPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x13D96520)

inline static constexpr unsigned int DepthOfFieldProxy_TypeDefinitionIndex = 40199;

class DepthOfFieldProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single gaussianStart; // 0x18
	::System::Single gaussianEnd; // 0x1C
	::System::Single gaussianMaxRadius; // 0x20
	::System::Boolean highQualitySampling; // 0x24
	::System::Single focusDistance; // 0x28
	::System::Single aperture; // 0x2C
	::System::Single focalLength; // 0x30
	::System::Int32 bladeCount; // 0x34
	::System::Single bladeCurvature; // 0x38
	::System::Single bladeRotation; // 0x3C
	::UnityEngine::Rendering::Universal::DepthOfField* _depthOfField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHOFFIELDPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHOFFIELDPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHOFFIELDPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHOFFIELDPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHOFFIELDPROXY_SETVALUETO_OFFSET))(this);
	}
};
