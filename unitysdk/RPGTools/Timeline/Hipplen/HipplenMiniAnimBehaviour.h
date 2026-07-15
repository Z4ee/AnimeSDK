#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x19A61300)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_METHOD_2_E05261A829A32D91_OFFSET UNITYSDK_OFFSET(0x19A61180)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19A61080)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A61410)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenMiniAnimBehaviour_TypeDefinitionIndex = 46859;

	class HipplenMiniAnimBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::AnimatorParameterType AnimatorParameterType; // 0x10
		::System::String* ParamName; // 0x18
		::System::String* Value; // 0x20
		::System::String* CharacterUniqueName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E05261A829A32D91(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_METHOD_2_E05261A829A32D91_OFFSET))(this, a1);
		}

		::System::Void Method_2_DF2A78D8DB25ED05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
		}
	};
}
