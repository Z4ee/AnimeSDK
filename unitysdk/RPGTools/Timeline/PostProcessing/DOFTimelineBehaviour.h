#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour_1.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/DOFParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::CustomRP { class RPGDepthOfField; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xAB892E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB89300)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xAB892F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB896B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB89700)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineBehaviour_TypeDefinitionIndex = 39365;

	class DOFTimelineBehaviour : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour_1<::RPG::CustomRP::RPGDepthOfField*>
	{
	public:
		::RPGTools::Timeline::PostProcessing::DOFParameter RPGDepthOfFieldParamter; // 0x28
		::UnityEngine::GameObject* _Target_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Target()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_SET_TARGET_OFFSET))(this, value);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
