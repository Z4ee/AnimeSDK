#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_9432B3E32D314913;
namespace RPGTools::Timeline { class ModifyAudienceGroupAnimTypeClipConfig; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8ED330)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0xB8ED500)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0xB8ED640)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8ED350)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8ED340)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ED7B0)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8ED7C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeBehaviour_TypeDefinitionIndex = 44937;

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

		::System::Void set_Config(::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Class_1_9432B3E32D314913* Method_2_A666BD4C2D583F89()
		{
			return ((::Class_1_9432B3E32D314913*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_A666BD4C2D583F89_OFFSET))(this);
		}

		::System::Void Method_2_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
