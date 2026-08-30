#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem; }
namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }

#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD863770)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_16706DCC9C10BC51_OFFSET UNITYSDK_OFFSET(0xD863A60)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_1A54454DFDCF7CC5_OFFSET UNITYSDK_OFFSET(0xD863AE0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xD8638C0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_START_OFFSET UNITYSDK_OFFSET(0xD8636E0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD863CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSkeletonAnimationTrigger_TypeDefinitionIndex = 68931;

	class MonoSkeletonAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* _SkeletonGraphic; // 0x18
		::Spine::Unity::SkeletonAnimation* _SkeletonAnimation; // 0x20
		::Il2CppArray<::RPG::Client::MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem*>* _Triggers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_START_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_EC2B405D0723571D_OFFSET))(this);
		}

		::Spine::AnimationState* Method_5_16706DCC9C10BC51()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_16706DCC9C10BC51_OFFSET))(this);
		}

		::System::Void Method_5_1A54454DFDCF7CC5(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_1A54454DFDCF7CC5_OFFSET))(this, a1, a2);
		}
	};
}
