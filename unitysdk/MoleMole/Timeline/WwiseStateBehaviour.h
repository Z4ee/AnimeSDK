#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x191C0DD0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x191C0DF0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x191C0B50)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x191C0DE0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x191C0AC0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x191C0A70)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x191C0D10)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x191C0DC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseStateBehaviour_TypeDefinitionIndex = 72915;

	class WwiseStateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* stateGroup; // 0x10
		::System::String* state; // 0x18
		::System::Boolean _fired; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}
	};
}
