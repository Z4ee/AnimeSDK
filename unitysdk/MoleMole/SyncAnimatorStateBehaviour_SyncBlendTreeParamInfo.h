#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo_TypeDefinitionIndex = 43367;

	struct alignas(8) SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo
	{
		::System::String* ParamName; // 0x10
		::System::Int32 ParamHash; // 0x18
		::UnityEngine::AnimatorControllerParameterType ParamType; // 0x1C
	};
}
