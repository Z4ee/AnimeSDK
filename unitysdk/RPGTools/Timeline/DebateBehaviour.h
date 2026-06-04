#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class SimpleTalkInfo; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_SIMPLETALKCONFIG_OFFSET UNITYSDK_OFFSET(0xCFFE250)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCFFE270)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_USEDISCUSSIONMOUTHTALK_OFFSET UNITYSDK_OFFSET(0xCFFE290)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xCFFE570)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFE2B0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCFFE330)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFFE4B0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_SIMPLETALKCONFIG_OFFSET UNITYSDK_OFFSET(0xCFFE260)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCFFE280)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_USEDISCUSSIONMOUTHTALK_OFFSET UNITYSDK_OFFSET(0xCFFE2A0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFEAA0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFEAB0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCFFEAC0)
#define RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFFEAD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DebateBehaviour_TypeDefinitionIndex = 45364;

	class DebateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::SimpleTalkInfo* _SimpleTalkConfig_k__BackingField; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::System::Boolean _UseDiscussionMouthTalk_k__BackingField; // 0x20
		::System::Boolean _HasPlayed; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SimpleTalkInfo* get_SimpleTalkConfig()
		{
			return ((::RPG::GameCore::SimpleTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_SIMPLETALKCONFIG_OFFSET))(this);
		}

		::System::Void set_SimpleTalkConfig(::RPG::GameCore::SimpleTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SimpleTalkInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_SIMPLETALKCONFIG_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_UseDiscussionMouthTalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_GET_USEDISCUSSIONMOUTHTALK_OFFSET))(this);
		}

		::System::Void set_UseDiscussionMouthTalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_SET_USEDISCUSSIONMOUTHTALK_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
