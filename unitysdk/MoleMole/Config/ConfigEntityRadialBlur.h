#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETBLOOMMODERADIUSADD_OFFSET UNITYSDK_OFFSET(0x1146FDE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETBLOOMMODESAMPLECOUNTADD_OFFSET UNITYSDK_OFFSET(0x1146FE60)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x1146FCF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1146F800)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCIRCLERANGE_OFFSET UNITYSDK_OFFSET(0x1146F980)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETDOWNSAMPLELEVEL_OFFSET UNITYSDK_OFFSET(0x1146F630)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETFORCEACTIVEOVERLAYDISTORTION_OFFSET UNITYSDK_OFFSET(0x1146FA00)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARECENTERFADERANGE_OFFSET UNITYSDK_OFFSET(0x1146FBF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREFADESHAPERATIO_OFFSET UNITYSDK_OFFSET(0x1146FC70)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREINTENSITY_OFFSET UNITYSDK_OFFSET(0x1146FAF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1146FB70)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETNOISESCALE_OFFSET UNITYSDK_OFFSET(0x1146FD60)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1146F780)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRANGERATIO_OFFSET UNITYSDK_OFFSET(0x1146FEE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1146F710)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLEDISTANCEMODE_OFFSET UNITYSDK_OFFSET(0x1146F6A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1146F880)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSEBLOOMMODE_OFFSET UNITYSDK_OFFSET(0x1146FA70)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSECIRCLERANGE_OFFSET UNITYSDK_OFFSET(0x1146F900)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1146FF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRadialBlur_TypeDefinitionIndex = 73984;

	class ConfigEntityRadialBlur : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x40
		::MoleMole::Config::ScreenEffectFloat* BloomModeRadiusAdd; // 0x48
		::MoleMole::Config::ScreenEffectFloat* noiseScale; // 0x50
		::MoleMole::Config::ScreenEffectFloat* glareFadeShapeRatio; // 0x58
		::MoleMole::Config::ScreenEffectFloat* threshold; // 0x60
		::MoleMole::Config::ScreenEffectFloat* RangeRatio; // 0x68
		::MoleMole::Config::ScreenEffectVector2* circleRange; // 0x70
		::MoleMole::Config::ScreenEffectFloat* glareThreshold; // 0x78
		::MoleMole::Config::ScreenEffectBool* useBloomMode; // 0x80
		::MoleMole::Config::ScreenEffectFloat* BloomModeSampleCountAdd; // 0x88
		::MoleMole::Config::ScreenEffectFloat* glareCenterFadeRange; // 0x90
		::MoleMole::Config::ScreenEffectVector2* centerPosition; // 0x98
		::MoleMole::Config::ScreenEffectFloat* glareIntensity; // 0xA0
		::MoleMole::Config::ScreenEffectBool* useCircleRange; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType glareCenterFadeRangeHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType useBloomModeHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType canBeDisabledByGlobalConfigHandleType; // 0xBC
		::System::Int32 sampleCount; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType sampleDistanceModeHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType centerPositionHandleType; // 0xCC
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType circleRangeHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType useCircleRangeHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType BloomModeRadiusAddHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType glareIntensityHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0xE4
		::System::Boolean forceActiveOverlayDistortion; // 0xE8
		::System::Boolean canBeDisabledByGlobalConfig; // 0xE9
		::MoleMole::Config::ScreenEffectFieldHandleType glareThresholdHandleType; // 0xEC
		::UnityEngine::Rendering::Universal::DownSampleLevel downSampleLevel; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType glareFadeShapeRatioHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveOverlayDistortionHandleType; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType thresholdHandleType; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType BloomModeSampleCountAddHandleType; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType noiseScaleHandleType; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DownSampleLevel GetDownSampleLevel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DownSampleLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETDOWNSAMPLELEVEL_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::SampleDistanceMode GetSampleDistanceMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::SampleDistanceMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLEDISTANCEMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenterPosition(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCENTERPOSITION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseCircleRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSECIRCLERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCircleRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCIRCLERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceActiveOverlayDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETFORCEACTIVEOVERLAYDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseBloomMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSEBLOOMMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareCenterFadeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARECENTERFADERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareFadeShapeRatio(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREFADESHAPERATIO_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCanBeDisabledByGlobalConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetNoiseScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETNOISESCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBloomModeRadiusAdd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETBLOOMMODERADIUSADD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBloomModeSampleCountAdd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETBLOOMMODESAMPLECOUNTADD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRangeRatio(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRANGERATIO_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
