#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GET_CANPLAYSUBTITLE_OFFSET UNITYSDK_OFFSET(0x12BE4710)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x12BE4AF0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x12BE4B00)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12BE4A90)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x12BE4B10)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x12BE4AA0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12BE4AB0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12BE4B20)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x12BE4890)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x12BE4800)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12BE4760)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x12BE47B0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12BE4A30)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12BE4920)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE4A80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DialogBehaviour_TypeDefinitionIndex = 84583;

	class DialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* subtitleKey; // 0x10
		::System::Single subtitleDelay; // 0x18
		::System::Boolean _needPlay; // 0x1C
		::System::Boolean _isPlaying; // 0x1D
		::System::Single _currTimer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_canPlaySubtitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GET_CANPLAYSUBTITLE_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}
	};
}
