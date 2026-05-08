#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HDRPARAMS_START_OFFSET UNITYSDK_OFFSET(0x140CA960)
#define HDRPARAMS_UPDATE_OFFSET UNITYSDK_OFFSET(0x140CA9B0)
#define HDRPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x140CAA00)
#define HDRPARAMS__SETPARAM_OFFSET UNITYSDK_OFFSET(0x140CA850)

inline static constexpr unsigned int HDRParams_TypeDefinitionIndex = 78164;

class HDRParams : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single colorGamutExpand; // 0x18
	::System::Boolean useRGBA16F; // 0x1C
	::System::Single scenePaperWhite; // 0x20
	::System::Single uiPaperWhite; // 0x24
	::System::Single maxLuminosity; // 0x28
	::System::Boolean enableHueShift; // 0x2C
	::System::Boolean enableSceneHDR; // 0x2D
	::System::Boolean enableAvatarHDR; // 0x2E
	::System::Single HueShiftLerpThreshold; // 0x30
	::System::Single HueShiftLerpRange; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDRPARAMS__CTOR_OFFSET))(this);
	}

	::System::Void _SetParam()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDRPARAMS__SETPARAM_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDRPARAMS_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDRPARAMS_UPDATE_OFFSET))(this);
	}
};
