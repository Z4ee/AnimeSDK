#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET UNITYSDK_OFFSET(0x16100B30)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_29DFCCC291F2C3F0_OFFSET UNITYSDK_OFFSET(0x16100390)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_4C2226B1674A06C1_OFFSET UNITYSDK_OFFSET(0x16100830)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_6386111AF3985F9C_OFFSET UNITYSDK_OFFSET(0x16100580)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET UNITYSDK_OFFSET(0x16100C10)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x161004A0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16100CE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET UNITYSDK_OFFSET(0x16100A20)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16100810)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkConfig_TypeDefinitionIndex = 76737;

	class VisualEnvWaterMarkConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::System::Boolean overrideWetness; // 0x18
		::System::Single wetness; // 0x1C
		::System::Boolean ignoreHeightMap; // 0x20
		::System::Boolean ignoreNoiseMap; // 0x21
		::UnityEngine::Texture* wetnessNoise; // 0x28
		::System::Single wetnessNoiseTilling; // 0x30
		::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x34
		::System::Boolean wetnessNoiseForHeight; // 0x3C
		::UnityEngine::Vector2 porosity; // 0x40
		::UnityEngine::Vector4 m_SceneWaterPoolBoundBox; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_29DFCCC291F2C3F0(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_29DFCCC291F2C3F0_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_6386111AF3985F9C(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_6386111AF3985F9C_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_4C2226B1674A06C1(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_4C2226B1674A06C1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D635BC10208DDAB9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET))(this, a1);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_1374F5C8C30BDCEE(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_97FA89D8D3694CF1(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
