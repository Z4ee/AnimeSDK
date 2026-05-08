#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET UNITYSDK_OFFSET(0x15BCC190)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_171FCDDC6C47F867_OFFSET UNITYSDK_OFFSET(0x15BCBE10)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_7FD1635A2D6EEB81_OFFSET UNITYSDK_OFFSET(0x15BCBFE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET UNITYSDK_OFFSET(0x15BCC410)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x15BCBCD0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15BCC380)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET UNITYSDK_OFFSET(0x15BCC270)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_F3A0B0CF16594F6F_OFFSET UNITYSDK_OFFSET(0x15BCBB80)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCBFC0)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvFogConfig_TypeDefinitionIndex = 63447;

	class VisualEnvFogConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::UnityEngine::Color fogRayColor; // 0x18
		::UnityEngine::Color fogMieColor; // 0x28
		::System::Single fogMieG; // 0x38
		::UnityEngine::Color fogExtinctColor; // 0x3C
		::System::Single fogDensity; // 0x4C
		::System::Single fogScattering; // 0x50
		::UnityEngine::Vector2 fogHeightRange; // 0x54
		::System::Single fogStartDistance; // 0x5C
		::System::Boolean useMirrorFog; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_F3A0B0CF16594F6F(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_F3A0B0CF16594F6F_OFFSET))(this, a1);
		}

		::System::Void Method_2_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_171FCDDC6C47F867(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_171FCDDC6C47F867_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_7FD1635A2D6EEB81(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_7FD1635A2D6EEB81_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_1374F5C8C30BDCEE(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_1374F5C8C30BDCEE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D635BC10208DDAB9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_D635BC10208DDAB9_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_97FA89D8D3694CF1(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_METHOD_2_97FA89D8D3694CF1_OFFSET))(this, a1, a2);
		}
	};
}
