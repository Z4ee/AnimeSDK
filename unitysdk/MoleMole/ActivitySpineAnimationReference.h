#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class AnimationReferenceAsset; }

#define MOLEMOLE_ACTIVITYSPINEANIMATIONREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17790C70)

namespace MoleMole
{
	inline static constexpr unsigned int ActivitySpineAnimationReference_TypeDefinitionIndex = 82322;

	class ActivitySpineAnimationReference : public ::System::Object
	{
	public:
		::Spine::Unity::AnimationReferenceAsset* animation; // 0x10
		::System::Boolean isLoop; // 0x18
		::System::Single delay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYSPINEANIMATIONREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
