#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1B594310)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B594280)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B594430)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveAddGiftToShowBehaviour_TypeDefinitionIndex = 48250;

	class IdleLiveAddGiftToShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GiftIds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_3B7145E79424FB75()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_METHOD_2_3B7145E79424FB75_OFFSET))(this);
		}
	};
}
