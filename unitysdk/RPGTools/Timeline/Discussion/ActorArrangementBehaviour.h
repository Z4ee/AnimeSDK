#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline::Discussion { class ActorArrangementClip; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8BC3C0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET UNITYSDK_OFFSET(0xB8BCA10)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xB8BC490)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xB8BCD90)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_C1F4FF5533AF9A70_OFFSET UNITYSDK_OFFSET(0xB8BD190)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0xB8BD430)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8BC3E0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8BC3D0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD840)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8BD850)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int ActorArrangementBehaviour_TypeDefinitionIndex = 45468;

	class ActorArrangementBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Discussion::ActorArrangementClip* _Clip_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _UniqueNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::ActorArrangementClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Discussion::ActorArrangementClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Discussion::ActorArrangementClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Discussion::ActorArrangementClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void Method_2_C4EFD31239F98A71()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_C4EFD31239F98A71_OFFSET))(this);
		}

		::System::Void Method_2_19FB5FBEA9EA66CD_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET))(this);
		}

		::System::Void Method_2_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_C1F4FF5533AF9A70(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_METHOD_2_C1F4FF5533AF9A70_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
