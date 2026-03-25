#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }

#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD7C70E0)
#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD7C6F90)
#define CLASS_2_3B69B182CC21A6B6_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xD7C7060)
#define CLASS_2_3B69B182CC21A6B6__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C7200)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD7C7230)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD7C7210)
#define CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xD7C7220)

inline static constexpr unsigned int Class_2_3B69B182CC21A6B6_TypeDefinitionIndex = 38863;

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

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}
};
