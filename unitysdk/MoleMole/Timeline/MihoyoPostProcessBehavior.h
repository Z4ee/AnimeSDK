#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::EffectSimulate { class IEffectSimulate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GET_SCALECURVEWHENCLIPTIMECHANGEINFOMSG_OFFSET UNITYSDK_OFFSET(0x12374220)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_1CCB664FA80C2930_OFFSET UNITYSDK_OFFSET(0x12374E20)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_29A494D59164912A_OFFSET UNITYSDK_OFFSET(0x12374340)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x123754A0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x12374E10)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_B507396681F9F72C_OFFSET UNITYSDK_OFFSET(0x12374E70)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_BF2ABB022A6B2E57_OFFSET UNITYSDK_OFFSET(0x123754B0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12374E00)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E94E9FAEF6415AAE_OFFSET UNITYSDK_OFFSET(0x12375650)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x12374550)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x123742A0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12374710)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12374D80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessBehavior_TypeDefinitionIndex = 78301;

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

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerable* Method_2_1CCB664FA80C2930()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_1CCB664FA80C2930_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_BF2ABB022A6B2E57()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_BF2ABB022A6B2E57_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem>* Method_2_B507396681F9F72C(::Enum_3_17B78A87EAE1DCED a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem>*(*)(::PVOID, ::Enum_3_17B78A87EAE1DCED, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_B507396681F9F72C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_29A494D59164912A(::UnityEngine::Rendering::Volume* a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_29A494D59164912A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_E94E9FAEF6415AAE(::MoleMole::EffectSimulate::IEffectSimulate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::IEffectSimulate*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_METHOD_2_E94E9FAEF6415AAE_OFFSET))(this, a1);
		}
	};
}
