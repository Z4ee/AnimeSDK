#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C933C1C9CFD23DE2;
namespace RPGTools::Timeline { class ModifyAudienceGroupAnimTypeClipConfig; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD02F210)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0xD02F3C0)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0xD02F500)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02F230)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD02F220)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD02F680)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02F690)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeBehaviour_TypeDefinitionIndex = 45485;

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

		::Class_1_C933C1C9CFD23DE2* Method_2_939B0A8FB671683E()
		{
			return ((::Class_1_C933C1C9CFD23DE2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_939B0A8FB671683E_OFFSET))(this);
		}

		::System::Void Method_2_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_METHOD_2_6BE484E5F636032A_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
