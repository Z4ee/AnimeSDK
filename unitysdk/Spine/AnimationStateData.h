#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/AnimationStateData_AnimationPair.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class SkeletonData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET UNITYSDK_OFFSET(0x1604C2F0)
#define SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x1604D250)
#define SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1604D240)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_1_OFFSET UNITYSDK_OFFSET(0x1604D520)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET UNITYSDK_OFFSET(0x1604D380)
#define SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x1604D260)
#define SPINE_ANIMATIONSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1604D270)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_TypeDefinitionIndex = 38341;

	class AnimationStateData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Spine::AnimationStateData_AnimationPair, ::System::Single>* animationToMixTime; // 0x10
		::Spine::SkeletonData* skeletonData; // 0x18
		::System::Single defaultMix; // 0x20

		::System::Void _ctor(::Spine::SkeletonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA__CTOR_OFFSET))(this, a1);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Single get_DefaultMix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET))(this);
		}

		::System::Void set_DefaultMix(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET))(this, a1);
		}

		::System::Void SetMix(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMix_1(::Spine::Animation* a1, ::Spine::Animation* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetMix(::Spine::Animation* a1, ::Spine::Animation* a2)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Animation*, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET))(this, a1, a2);
		}
	};
}
