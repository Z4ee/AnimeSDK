#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/AnimationPlayableAsset.h"

namespace MoleMole::Timeline::OverrideAnimation { class SkinOverrideAnimationTrack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONPLAYABLEASSET_ANICLIPKEYS_OFFSET UNITYSDK_OFFSET(0x1E757720)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E757730)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int SkinOverrideAnimationPlayableAsset_TypeDefinitionIndex = 32234;

	class SkinOverrideAnimationPlayableAsset : public ::UnityEngine::Timeline::AnimationPlayableAsset
	{
	public:
		::System::String* AnimationClipKey; // 0x60
		::MoleMole::Timeline::OverrideAnimation::SkinOverrideAnimationTrack* overrideParent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* AniClipKeys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONPLAYABLEASSET_ANICLIPKEYS_OFFSET))(this);
		}
	};
}
