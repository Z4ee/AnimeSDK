#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Lod { class NPCCrowdPositionAgent; }

#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x141B7850)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x141B7680)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x141B7840)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x141B7670)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x141B71F0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x141B7690)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x141B73D0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x141B72D0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x141B7530)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x141B7160)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x141B7660)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimePreLoadBehavior_TypeDefinitionIndex = 83170;

	class RuntimePreLoadBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 preLodPos; // 0x10
		::NPCCrowd::Lod::NPCCrowdPositionAgent* posAgent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
