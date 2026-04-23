#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_9432B3E32D314913;
namespace RPGTools::Timeline { class SetAudienceGroupVisibleClipConfig; }

#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB910E70)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_63257B146566F633_OFFSET UNITYSDK_OFFSET(0xB911040)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0xB911180)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB910E90)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB910E80)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB9112F0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB911300)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetAudienceGroupVisibleBehaviour_TypeDefinitionIndex = 45016;

	class SetAudienceGroupVisibleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* _Config_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* get_Config()
		{
			return ((::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_1_9432B3E32D314913* Method_2_A666BD4C2D583F89()
		{
			return ((::Class_1_9432B3E32D314913*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_A666BD4C2D583F89_OFFSET))(this);
		}

		::System::Void Method_2_63257B146566F633(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_63257B146566F633_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
