#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }

#define CLASS_2_E6C97C2127A27B34_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x1A778B40)
#define CLASS_2_E6C97C2127A27B34_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A778B50)
#define CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A778A20)
#define CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A7788D0)
#define CLASS_2_E6C97C2127A27B34_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1A778880)
#define CLASS_2_E6C97C2127A27B34_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1A7789A0)
#define CLASS_2_E6C97C2127A27B34__CTOR_OFFSET UNITYSDK_OFFSET(0x1A778B60)

inline static constexpr unsigned int Class_2_E6C97C2127A27B34_TypeDefinitionIndex = 48468;

class Class_2_E6C97C2127A27B34 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CharacterStoryMoveSequenceData* EABKOHGCHFP; // 0x10
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
