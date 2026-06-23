#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility_CachedSerializationBackendResult_TypeDefinitionIndex = 7599;

	struct alignas(1) UnitySerializationUtility_CachedSerializationBackendResult
	{
		::System::Boolean HasCalculatedSerializeUnityFieldsTrueResult; // 0x10
		::System::Boolean HasCalculatedSerializeUnityFieldsFalseResult; // 0x11
		::System::Boolean SerializeUnityFieldsTrueResult; // 0x12
		::System::Boolean SerializeUnityFieldsFalseResult; // 0x13
	};
}
