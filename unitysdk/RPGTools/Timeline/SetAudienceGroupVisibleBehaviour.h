#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C6FD03DFDE9D9EFF;
namespace RPGTools::Timeline { class SetAudienceGroupVisibleClipConfig; }

#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x199B28E0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_03F25796FF41212C_OFFSET UNITYSDK_OFFSET(0x199B2A90)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0x199B2BD0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x199B2900)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x199B28F0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199B2D50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetAudienceGroupVisibleBehaviour_TypeDefinitionIndex = 46498;

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

		::System::Void set_Config(::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_1_C6FD03DFDE9D9EFF* Method_2_939B0A8FB671683E()
		{
			return ((::Class_1_C6FD03DFDE9D9EFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET))(this);
		}

		::System::Void Method_2_03F25796FF41212C(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_METHOD_2_03F25796FF41212C_OFFSET))(this, a1, a2);
		}
	};
}
