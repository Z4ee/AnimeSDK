#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberAnimParam_TypeDefinitionIndex = 75009;

	struct alignas(8) SMapGroupMemberAnimParam
	{
		::UnityEngine::AnimatorControllerParameterType ParameterType; // 0x10
		::System::String* ParameterKey; // 0x18
		::System::Int32 ParameterIntValue; // 0x20
		::System::Boolean ParameterBoolValue; // 0x24
	};
}
