#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15E60E70)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x15E60C70)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x15E60E80)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15E60BE0)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15E60B90)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E60E60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseMusicBehaviour_TypeDefinitionIndex = 58686;

	class WwiseMusicBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* customParam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
		}
	};
}
