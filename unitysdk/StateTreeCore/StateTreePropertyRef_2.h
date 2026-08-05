#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRef_2_TypeDefinitionIndex = 31655;

	template <typename T, typename TValidator>
	struct StateTreePropertyRef_2
	{
		::StateTreeCore::StateTreePropertyRef PropertyRef; // 0x0
	};
}
