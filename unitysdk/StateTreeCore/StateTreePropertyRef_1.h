#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRef_1_TypeDefinitionIndex = 31653;

	template <typename T>
	struct StateTreePropertyRef_1
	{
		::StateTreeCore::StateTreePropertyRef PropertyRef; // 0x0
	};
}
