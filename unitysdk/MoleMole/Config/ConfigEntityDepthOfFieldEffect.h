#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET UNITYSDK_OFFSET(0x172A15B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET UNITYSDK_OFFSET(0x172A1630)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET UNITYSDK_OFFSET(0x172A16B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET UNITYSDK_OFFSET(0x172A1730)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLURQUALITYHIGH_OFFSET UNITYSDK_OFFSET(0x172A1830)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x172A1250)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDISCARDNEARCOC_OFFSET UNITYSDK_OFFSET(0x172A17B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET UNITYSDK_OFFSET(0x172A1530)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET UNITYSDK_OFFSET(0x172A14B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFORCENODEFAULTDOF_OFFSET UNITYSDK_OFFSET(0x172A18B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET UNITYSDK_OFFSET(0x172A1340)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET UNITYSDK_OFFSET(0x172A13C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET UNITYSDK_OFFSET(0x172A12C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET UNITYSDK_OFFSET(0x172A1440)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x172A11E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x172A1930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDepthOfFieldEffect_TypeDefinitionIndex = 57174;

	class ConfigEntityDepthOfFieldEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* bladeCount; // 0x40
		::MoleMole::Config::ScreenEffectFloat* focalLength; // 0x48
		::MoleMole::Config::ScreenEffectFloat* gaussianStart; // 0x50
		::MoleMole::Config::ScreenEffectBool* blurQualityHigh; // 0x58
		::MoleMole::Config::ScreenEffectFloat* gaussianEnd; // 0x60
		::MoleMole::Config::ScreenEffectBool* discardNearCoc; // 0x68
		::MoleMole::Config::ScreenEffectBool* forceNoDefaultDof; // 0x70
		::MoleMole::Config::ScreenEffectFloat* bladeCurvature; // 0x78
		::MoleMole::Config::ScreenEffectFloat* gaussianMaxRadius; // 0x80
		::MoleMole::Config::ScreenEffectFloat* bladeRotation; // 0x88
		::MoleMole::Config::ScreenEffectFloat* focusDistance; // 0x90
		::MoleMole::Config::ScreenEffectFloat* aperture; // 0x98
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType forceNoDefaultDofHandleType; // 0xA4
		::System::Boolean highQualitySampling; // 0xA8
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCountHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianEndHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType focalLengthHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianStartHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType highQualitySamplingHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianMaxRadiusHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType debugModeHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType discardNearCocHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType focusDistanceHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType blurQualityHighHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCurvatureHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType bladeRotationHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType apertureHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType modeHandleType; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DepthOfFieldMode GetMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfFieldMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::DofDebugMode GetDebugMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DofDebugMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianMaxRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetHighQualitySampling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocusDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocalLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAperture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBladeCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeCurvature(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeRotation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDiscardNearCoc(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDISCARDNEARCOC_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBlurQualityHigh(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLURQUALITYHIGH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceNoDefaultDof(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFORCENODEFAULTDOF_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
