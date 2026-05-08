#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceObjectWrapper_TypeDefinitionIndex = 28318;

	struct alignas(8) StateTreeInstanceObjectWrapper
	{
		::System::Object* InstanceObject; // 0x10
	};
}
