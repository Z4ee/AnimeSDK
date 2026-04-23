#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/AnimationStateData_AnimationPair.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class SkeletonData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET UNITYSDK_OFFSET(0x19DCEF30)
#define SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x19DCFC40)
#define SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x19DCFC30)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_1_OFFSET UNITYSDK_OFFSET(0x19DCFEF0)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET UNITYSDK_OFFSET(0x19DCFD50)
#define SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x19DCFC50)
#define SPINE_ANIMATIONSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCFC60)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_TypeDefinitionIndex = 36400;

	class AnimationStateData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Spine::AnimationStateData_AnimationPair, ::System::Single>* animationToMixTime; // 0x10
		::Spine::SkeletonData* skeletonData; // 0x18
		::System::Single defaultMix; // 0x20

		::System::Void _ctor(::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA__CTOR_OFFSET))(this, skeletonData);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Single get_DefaultMix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET))(this);
		}

		::System::Void set_DefaultMix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET))(this, value);
		}

		::System::Void SetMix(::System::String* fromName, ::System::String* toName, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET))(this, fromName, toName, duration);
		}

		::System::Void SetMix_1(::Spine::Animation* from, ::Spine::Animation* to, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_1_OFFSET))(this, from, to, duration);
		}

		::System::Single GetMix(::Spine::Animation* from, ::Spine::Animation* to)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Animation*, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET))(this, from, to);
		}
	};
}
