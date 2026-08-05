#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::EffectSimulate { class IEffectSimulate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GET_SCALECURVEWHENCLIPTIMECHANGEINFOMSG_OFFSET UNITYSDK_OFFSET(0x1A5E9A90)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_09CB25F38B741289_OFFSET UNITYSDK_OFFSET(0x1A5E9BB0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1A5EA680)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1A5EA670)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1A5EA690)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A5E9DC0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A5E9B10)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A5E9F80)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EA5F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessBehavior_TypeDefinitionIndex = 46945;

	class MihoyoPostProcessBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean scaleCurveWhenClipTimeChange; // 0x10
		::System::Boolean endNotClear; // 0x11
		::System::Single fadeInDuration; // 0x14
		::System::Single fadeOutDuration; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::IEffectSimulate*>* ESList; // 0x20
		::UnityEngine::Rendering::Volume* m_stVolume; // 0x28
		::System::Double m_dClipIn; // 0x30
		::System::Double m_dDuration; // 0x38
		::System::Single m_fNormalDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::String* get_ScaleCurveWhenClipTimeChangeInfoMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GET_SCALECURVEWHENCLIPTIMECHANGEINFOMSG_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_09CB25F38B741289(::UnityEngine::Rendering::Volume* a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_09CB25F38B741289_OFFSET))(this, a1, a2, a3);
		}
	};
}
