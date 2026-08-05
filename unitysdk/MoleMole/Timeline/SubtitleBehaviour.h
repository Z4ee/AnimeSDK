#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60;
namespace System { class String; }

#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1999B900)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1999B920)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1999B910)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1999B5A0)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1999B7A0)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1999B640)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1999B470)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1999B8F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SubtitleBehaviour_TypeDefinitionIndex = 64561;

	class SubtitleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* textKey; // 0x10
		::System::Int32 languageType; // 0x18
		::System::Int32 subtitlePos; // 0x1C
		::Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60* _subtitleViewer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}
	};
}
