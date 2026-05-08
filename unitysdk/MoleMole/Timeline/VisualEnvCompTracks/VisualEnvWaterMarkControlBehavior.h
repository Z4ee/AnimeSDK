#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompControlBehavior.h"

class WeatherConfig;
namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }
namespace MoleMole::Timeline::VisualEnvCompTracks { class VisualEnvWaterMarkConfig; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x15869F50)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_28D339477F611571_OFFSET UNITYSDK_OFFSET(0x15869F60)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_29DFCCC291F2C3F0_OFFSET UNITYSDK_OFFSET(0x15869FF0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_7A391CCE1142AE06_OFFSET UNITYSDK_OFFSET(0x1586A0A0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15869FE0)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkControlBehavior_TypeDefinitionIndex = 63642;

	class VisualEnvWaterMarkControlBehavior : public ::MoleMole::Timeline::AutoGenerateComps::CompControlBehavior
	{
	public:
		::System::Boolean initEnvConfig; // 0x18
		::MoleMole::Timeline::VisualEnvCompTracks::VisualEnvWaterMarkConfig* EnvTimelineConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* get_CompTimelineConfig()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_3_28D339477F611571()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_28D339477F611571_OFFSET))(this);
		}

		::System::Void Method_3_29DFCCC291F2C3F0(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_29DFCCC291F2C3F0_OFFSET))(this, a1);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_3_7A391CCE1142AE06()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_METHOD_3_7A391CCE1142AE06_OFFSET))(this);
		}
	};
}
