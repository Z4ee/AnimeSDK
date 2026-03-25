#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem; }
namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }

#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9D349C0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_16706DCC9C10BC51_OFFSET UNITYSDK_OFFSET(0x9D34C90)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_2FC095E35C3F5C08_OFFSET UNITYSDK_OFFSET(0x9D34D10)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x9D34B20)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x9D34930)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D34EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSkeletonAnimationTrigger_TypeDefinitionIndex = 56328;

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

		::System::Void Method_5_2FC095E35C3F5C08(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_METHOD_5_2FC095E35C3F5C08_OFFSET))(this, a1, a2);
		}
	};
}
