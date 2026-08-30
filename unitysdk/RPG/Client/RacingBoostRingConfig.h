#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RACINGBOOSTRINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF1600)

namespace RPG::Client
{
	inline static constexpr unsigned int RacingBoostRingConfig_TypeDefinitionIndex = 59909;

	class RacingBoostRingConfig : public ::System::Object
	{
	public:
		::System::String* effectPrefab; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ringTransforms; // 0x18
		::System::Single triggerDistanceOffset; // 0x20
		::System::String* moveEffectTriggerName; // 0x28
		::System::String* ringEffectTriggerName; // 0x30
		::System::Single speedBoostDuration; // 0x38
		::UnityEngine::AnimationCurve* speedBoostCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RACINGBOOSTRINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
