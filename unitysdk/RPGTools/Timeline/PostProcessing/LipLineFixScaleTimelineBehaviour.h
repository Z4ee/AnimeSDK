#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/LipLineFixParams.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_9CBC71DC5240DC00;
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_GET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xAB8C9A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xAB8CD40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAB8CA20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xAB8CC20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB8CCB0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAB8C9C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8CAE0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xAB8C9B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8CE20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB8CE60)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAB8CE40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB8CE50)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LipLineFixScaleTimelineBehaviour_TypeDefinitionIndex = 39384;

	class LipLineFixScaleTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::Single _DEFAULT_LIPLINE_FIXSCALE; // 0x0
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean _AutoReset_k__BackingField; // 0x18
		::RPGTools::Timeline::PostProcessing::LipLineFixParams LipLineParams; // 0x1C
		::System::Int32 _LipLineFixScaleID; // 0x20
		::Class_1_9CBC71DC5240DC00* _GoRendererCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_GET_AUTORESET_OFFSET))(this);
		}

		::System::Void set_AutoReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_SET_AUTORESET_OFFSET))(this, value);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
