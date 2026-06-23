#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define MOTIONBLURPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x138562A0)
#define MOTIONBLURPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x13856670)
#define MOTIONBLURPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x13856860)
#define MOTIONBLURPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x13856810)
#define MOTIONBLURPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x13856A20)

inline static constexpr unsigned int MotionBlurProxy_TypeDefinitionIndex = 86996;

class MotionBlurProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single intensity; // 0x18
	::System::Single clamp; // 0x1C
	::UnityEngine::Rendering::Universal::MotionBlur* _motionBlur; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOTIONBLURPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOTIONBLURPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOTIONBLURPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOTIONBLURPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOTIONBLURPROXY_SETVALUETO_OFFSET))(this);
	}
};
