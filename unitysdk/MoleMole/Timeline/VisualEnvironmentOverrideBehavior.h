#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_GET_REALPRIORITY_OFFSET UNITYSDK_OFFSET(0x11D7EF10)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11D7F520)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11D7F510)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x11D7F530)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x11D7F0D0)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x11D7EF20)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11D7F280)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7F500)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvironmentOverrideBehavior_TypeDefinitionIndex = 59709;

	class VisualEnvironmentOverrideBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::System::Int32 priority; // 0x18
		::System::Boolean isApplied; // 0x1C
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* overrideConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_realPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_GET_REALPRIORITY_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
