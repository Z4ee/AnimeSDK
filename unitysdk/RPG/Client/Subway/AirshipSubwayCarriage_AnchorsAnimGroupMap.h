#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayCarriage_AnchorsAnimGroupMap_TypeDefinitionIndex = 80821;

	struct alignas(8) AirshipSubwayCarriage_AnchorsAnimGroupMap
	{
		::Il2CppArray<::UnityEngine::Transform*>* RandomOrigins; // 0x10
		::System::String* RandomAnimType; // 0x18
		::Il2CppArray<::System::String*>* RandomAnimNames; // 0x20
		::System::Boolean CanRandomRotation; // 0x28
		::UnityEngine::AnimationCurve* RandomRotationYWeightCurve; // 0x30
	};
}
