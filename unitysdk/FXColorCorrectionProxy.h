#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }

#define FXCOLORCORRECTIONPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1401D570)
#define FXCOLORCORRECTIONPROXY_COPYVALUEFROMFXCOLORCORRECTION_OFFSET UNITYSDK_OFFSET(0x1401D980)
#define FXCOLORCORRECTIONPROXY_SETVALUETOFXCOLORCORRECTION_OFFSET UNITYSDK_OFFSET(0x1401DD50)
#define FXCOLORCORRECTIONPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1401DD00)
#define FXCOLORCORRECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1401E540)

inline static constexpr unsigned int FXColorCorrectionProxy_TypeDefinitionIndex = 72851;

class FXColorCorrectionProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single postExposure; // 0x18
	::System::Single contrast; // 0x1C
	::System::Single saturation; // 0x20
	::System::Single gamma; // 0x24
	::System::Boolean lutInvert; // 0x28
	::System::Boolean lutToneColors; // 0x29
	::UnityEngine::Color lutToneA; // 0x2C
	::UnityEngine::Color lutToneB; // 0x3C
	::System::Single lutMiddlePoint; // 0x4C
	::System::Single lutSoftness; // 0x50
	::System::Single desaturate; // 0x54
	::System::Boolean invert; // 0x58
	::System::Boolean toneColors; // 0x59
	::UnityEngine::Color toneA; // 0x5C
	::UnityEngine::Color toneB; // 0x6C
	::System::Single middlePoint; // 0x7C
	::System::Single softness; // 0x80
	::UnityEngine::Rendering::Universal::FXColorCorrection* _fXColorCorrection; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOLORCORRECTIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOLORCORRECTIONPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOLORCORRECTIONPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFromFXColorCorrection()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOLORCORRECTIONPROXY_COPYVALUEFROMFXCOLORCORRECTION_OFFSET))(this);
	}

	::System::Void SetValueToFXColorCorrection()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOLORCORRECTIONPROXY_SETVALUETOFXCOLORCORRECTION_OFFSET))(this);
	}
};
