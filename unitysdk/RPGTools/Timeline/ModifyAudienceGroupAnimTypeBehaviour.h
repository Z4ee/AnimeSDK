#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C6FD03DFDE9D9EFF;
namespace RPGTools::Timeline { class ModifyAudienceGroupAnimTypeClipConfig; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE870650)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0xE870800)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0xE870940)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE870670)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE870660)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE870AC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeBehaviour_TypeDefinitionIndex = 48654;

	class ModifyAudienceGroupAnimTypeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* _Config_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* get_Config()
		{
			return ((::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_1_C6FD03DFDE9D9EFF* Method_2_939B0A8FB671683E()
		{
			return ((::Class_1_C6FD03DFDE9D9EFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET))(this);
		}

		::System::Void Method_2_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET))(this, a1, a2);
		}
	};
}
