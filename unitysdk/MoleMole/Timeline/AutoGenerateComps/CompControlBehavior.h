#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }

#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x180A1880)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_METHOD_2_7A391CCE1142AE06_OFFSET UNITYSDK_OFFSET(0x180A1890)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x180A18D0)

namespace MoleMole::Timeline::AutoGenerateComps
{
	inline static constexpr unsigned int CompControlBehavior_TypeDefinitionIndex = 83036;

	class CompControlBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* _CompTimelineConfig_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* get_CompTimelineConfig()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Method_2_7A391CCE1142AE06()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPCONTROLBEHAVIOR_METHOD_2_7A391CCE1142AE06_OFFSET))(this);
		}
	};
}
