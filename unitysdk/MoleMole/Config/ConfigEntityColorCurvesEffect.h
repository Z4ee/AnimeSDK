#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETBLUE_OFFSET UNITYSDK_OFFSET(0x12EFF4D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETGREEN_OFFSET UNITYSDK_OFFSET(0x12EFF460)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETHUEVSHUE_OFFSET UNITYSDK_OFFSET(0x12EFF540)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETHUEVSSAT_OFFSET UNITYSDK_OFFSET(0x12EFF5B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETLUMVSSAT_OFFSET UNITYSDK_OFFSET(0x12EFF690)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETMASTER_OFFSET UNITYSDK_OFFSET(0x12EFF380)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETRED_OFFSET UNITYSDK_OFFSET(0x12EFF3F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETSATVSSAT_OFFSET UNITYSDK_OFFSET(0x12EFF620)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFF700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityColorCurvesEffect_TypeDefinitionIndex = 52837;

	class ConfigEntityColorCurvesEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0x40
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0x48
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0x50
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0x58
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x60
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0x68
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0x70
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType masterHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType hueVsSatHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType lumVsSatHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType redHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType satVsSatHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType hueVsHueHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType blueHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType greenHandleType; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetMaster(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETMASTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetRed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETRED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetGreen(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETGREEN_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetBlue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETBLUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetHueVsHue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETHUEVSHUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetHueVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETHUEVSSAT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetSatVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETSATVSSAT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetLumVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORCURVESEFFECT_GETLUMVSSAT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
