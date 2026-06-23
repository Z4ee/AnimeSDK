#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerParameterInfo_TypeDefinitionIndex = 84965;

	struct alignas(4) AnimatorControllerParameterInfo
	{
		::System::Int32 paramHash; // 0x10
		::UnityEngine::AnimatorControllerParameterType paramType; // 0x14
		::System::Single defaultFloat; // 0x18
		::System::Int32 defaultInt; // 0x1C
		::System::Boolean defaultBool; // 0x20
	};
}
