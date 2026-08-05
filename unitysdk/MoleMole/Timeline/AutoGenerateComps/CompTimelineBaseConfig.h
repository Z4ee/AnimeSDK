#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_1374F5C8C30BDCEE_OFFSET UNITYSDK_OFFSET(0x18917C10)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_97FA89D8D3694CF1_OFFSET UNITYSDK_OFFSET(0x18917B80)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18917B40)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_D635BC10208DDAB9_OFFSET UNITYSDK_OFFSET(0x18917A80)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_F6F1C3E6461A192E_OFFSET UNITYSDK_OFFSET(0x18917AF0)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18917C00)

namespace MoleMole::Timeline::AutoGenerateComps
{
	inline static constexpr unsigned int CompTimelineBaseConfig_TypeDefinitionIndex = 50272;

	class CompTimelineBaseConfig : public ::System::Object
	{
	public:
		::WeatherConfig* weatherCfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D635BC10208DDAB9(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_D635BC10208DDAB9_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_1_97FA89D8D3694CF1(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_97FA89D8D3694CF1_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_1_1374F5C8C30BDCEE(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* a1, ::System::Single a2)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_1374F5C8C30BDCEE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F6F1C3E6461A192E(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_METHOD_1_F6F1C3E6461A192E_OFFSET))(this, a1);
		}
	};
}
