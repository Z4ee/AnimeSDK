#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/VignetteParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGVignette; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x199A97A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x199A97C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_METHOD_4_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0x199A9A90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x199A97E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x199A9A20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x199A9CF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_SET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x199A97B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_SET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x199A97D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199A9F20)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int VignetteTimelineBehaviour_TypeDefinitionIndex = 46838;

	class VignetteTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGVignette*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::VignetteParameter VignetteParameter; // 0x28
		::System::Single _EaseInDuration_k__BackingField; // 0x50
		::System::Single _EaseOutDuration_k__BackingField; // 0x54
		::RPGTools::Timeline::PostProcessing::VignetteParameter _StartParam; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Single get_EaseInDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_GET_EASEINDURATION_OFFSET))(this);
		}

		::System::Void set_EaseInDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_SET_EASEINDURATION_OFFSET))(this, a1);
		}

		::System::Single get_EaseOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_EaseOutDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_SET_EASEOUTDURATION_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_5892D030B127E82F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINEBEHAVIOUR_METHOD_4_5892D030B127E82F_OFFSET))(this);
		}
	};
}
