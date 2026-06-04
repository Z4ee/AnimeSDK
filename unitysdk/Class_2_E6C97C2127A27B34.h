#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }

#define CLASS_2_E6C97C2127A27B34_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xB031590)
#define CLASS_2_E6C97C2127A27B34_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB0315A0)
#define CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB031470)
#define CLASS_2_E6C97C2127A27B34_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB031320)
#define CLASS_2_E6C97C2127A27B34_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB0312D0)
#define CLASS_2_E6C97C2127A27B34_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xB0313F0)
#define CLASS_2_E6C97C2127A27B34__CTOR_OFFSET UNITYSDK_OFFSET(0xB0315B0)
#define CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB0315F0)
#define CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB0315D0)
#define CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB0315C0)
#define CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xB0315E0)

inline static constexpr unsigned int Class_2_E6C97C2127A27B34_TypeDefinitionIndex = 45310;

class Class_2_E6C97C2127A27B34 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CharacterStoryMoveSequenceData* Field_2_0; // 0x10
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

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E6C97C2127A27B34___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}
};
