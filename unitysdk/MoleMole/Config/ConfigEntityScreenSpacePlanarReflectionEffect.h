#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETENABLED_OFFSET UNITYSDK_OFFSET(0x11CA8150)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x11CA81D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETMIRRORREFLECTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x11CA7D80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONBLURAMOUNT_OFFSET UNITYSDK_OFFSET(0x11CA7E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASKFORSPECIALSCENEANDDEVICE_OFFSET UNITYSDK_OFFSET(0x11CA8070)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASK_OFFSET UNITYSDK_OFFSET(0x11CA8000)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDRENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x11CA80E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONLODSTEPS_OFFSET UNITYSDK_OFFSET(0x11CA7E80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONMINSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x11CA7F00)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONSMOOTHNESSFADESTART_OFFSET UNITYSDK_OFFSET(0x11CA7F80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSCREENSTRETCHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x11CA82D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSTRETCHSCALE_OFFSET UNITYSDK_OFFSET(0x11CA8250)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA8350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpacePlanarReflectionEffect_TypeDefinitionIndex = 40693;

	class ConfigEntityScreenSpacePlanarReflectionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* planarReflectionBlurAmount; // 0x40
		::MoleMole::Config::ScreenEffectFloat* StretchScale; // 0x48
		::MoleMole::Config::ScreenEffectFloat* ScreenStretchThreshold; // 0x50
		::MoleMole::Config::ScreenEffectBool* mirrorReflectionOverride; // 0x58
		::MoleMole::Config::ScreenEffectFloat* planarReflectionMinSmoothness; // 0x60
		::MoleMole::Config::ScreenEffectFloat* planarReflectionSmoothnessFadeStart; // 0x68
		::MoleMole::Config::ScreenEffectFloat* FadeDistance; // 0x70
		::MoleMole::Config::ScreenEffectFloat* planarReflectionLodSteps; // 0x78
		::MoleMole::Config::ScreenEffectBool* Enabled; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionMinSmoothnessHandleType; // 0x88
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask planarReflectionCameraDisabledRenderLayerMask; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType EnabledHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionLodStepsHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType FadeDistanceHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledRenderLayerMaskHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionBlurAmountHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionSmoothnessFadeStartHandleType; // 0xA4
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledLayerMaskHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType StretchScaleHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType mirrorReflectionOverrideHandleType; // 0xB4
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMask; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType ScreenStretchThresholdHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDeviceHandleType; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetMirrorReflectionOverride(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETMIRRORREFLECTIONOVERRIDE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPlanarReflectionBlurAmount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONBLURAMOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPlanarReflectionLodSteps(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONLODSTEPS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPlanarReflectionMinSmoothness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONMINSMOOTHNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPlanarReflectionSmoothnessFadeStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONSMOOTHNESSFADESTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::LayerMask GetPlanarReflectionCameraDisabledLayerMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::LayerMask GetPlanarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASKFORSPECIALSCENEANDDEVICE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask GetPlanarReflectionCameraDisabledRenderLayerMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDRENDERLAYERMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFadeDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETFADEDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetStretchScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSTRETCHSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScreenStretchThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSCREENSTRETCHTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
