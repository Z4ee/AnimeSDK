#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETENABLED_OFFSET UNITYSDK_OFFSET(0x148624B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x14862530)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETMIRRORREFLECTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x148620E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONBLURAMOUNT_OFFSET UNITYSDK_OFFSET(0x14862160)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASKFORSPECIALSCENEANDDEVICE_OFFSET UNITYSDK_OFFSET(0x148623D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDLAYERMASK_OFFSET UNITYSDK_OFFSET(0x14862360)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONCAMERADISABLEDRENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x14862440)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONLODSTEPS_OFFSET UNITYSDK_OFFSET(0x148621E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONMINSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x14862260)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETPLANARREFLECTIONSMOOTHNESSFADESTART_OFFSET UNITYSDK_OFFSET(0x148622E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSCREENSTRETCHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14862630)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT_GETSTRETCHSCALE_OFFSET UNITYSDK_OFFSET(0x148625B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x148626B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpacePlanarReflectionEffect_TypeDefinitionIndex = 81100;

	class ConfigEntityScreenSpacePlanarReflectionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* mirrorReflectionOverride; // 0x40
		::MoleMole::Config::ScreenEffectFloat* ScreenStretchThreshold; // 0x48
		::MoleMole::Config::ScreenEffectFloat* planarReflectionBlurAmount; // 0x50
		::MoleMole::Config::ScreenEffectFloat* planarReflectionSmoothnessFadeStart; // 0x58
		::MoleMole::Config::ScreenEffectBool* Enabled; // 0x60
		::MoleMole::Config::ScreenEffectFloat* planarReflectionMinSmoothness; // 0x68
		::MoleMole::Config::ScreenEffectFloat* StretchScale; // 0x70
		::MoleMole::Config::ScreenEffectFloat* FadeDistance; // 0x78
		::MoleMole::Config::ScreenEffectFloat* planarReflectionLodSteps; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType mirrorReflectionOverrideHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionLodStepsHandleType; // 0x8C
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMask; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType ScreenStretchThresholdHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionSmoothnessFadeStartHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType StretchScaleHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType FadeDistanceHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionMinSmoothnessHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType EnabledHandleType; // 0xA8
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xAC
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask planarReflectionCameraDisabledRenderLayerMask; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledRenderLayerMaskHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledLayerMaskHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDeviceHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionBlurAmountHandleType; // 0xC0

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
