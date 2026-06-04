#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }

#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1422B290)
#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1422B140)
#define CLASS_2_3B69B182CC21A6B6_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1422B210)
#define CLASS_2_3B69B182CC21A6B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1422B3B0)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1422B3E0)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1422B3C0)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1422B3D0)

inline static constexpr unsigned int Class_2_3B69B182CC21A6B6_TypeDefinitionIndex = 45313;

class Class_2_3B69B182CC21A6B6 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CharacterStoryMoveStartData* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}
};
