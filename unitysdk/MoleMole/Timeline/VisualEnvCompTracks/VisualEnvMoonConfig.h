#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET UNITYSDK_OFFSET(0x1B21AEE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_167EDA53C47E20A4_OFFSET UNITYSDK_OFFSET(0x1B21A950)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_29DFCCC291F2C3F0_OFFSET UNITYSDK_OFFSET(0x1B21A6D0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_7144A3A3D733A906_OFFSET UNITYSDK_OFFSET(0x1B21AB80)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET UNITYSDK_OFFSET(0x1B21AFC0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1B21A800)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B21AD40)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET UNITYSDK_OFFSET(0x1B21ADD0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21AB60)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvMoonConfig_TypeDefinitionIndex = 78029;

	class VisualEnvMoonConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::UnityEngine::Vector3 moonDir; // 0x18
		::UnityEngine::Color MoonLightColor; // 0x24
		::System::Single MoonLightIntensity; // 0x34
		::UnityEngine::Color MoonLightColorForChar; // 0x38
		::UnityEngine::Color MoonLightColorForCharIndoor; // 0x48
		::System::Single MoonLightIntensityForChar; // 0x58
		::System::Single MoonLightIntensityForCharIndoor; // 0x5C
		::UnityEngine::Color MoonColor; // 0x60
		::System::Single moonSize; // 0x70
		::System::Single customMoonPhase; // 0x74
		::System::Single moonPhaseAlphaBlend; // 0x78
		::UnityEngine::Color MoonGlowColor; // 0x7C
		::System::Boolean enableLensFlareForMoon; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_29DFCCC291F2C3F0(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_29DFCCC291F2C3F0_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_167EDA53C47E20A4(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_167EDA53C47E20A4_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_7144A3A3D733A906(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_7144A3A3D733A906_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_D635BC10208DDAB9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET))(this, a1);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_1374F5C8C30BDCEE(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_97FA89D8D3694CF1(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET))(this, a1, a2);
		}
	};
}
