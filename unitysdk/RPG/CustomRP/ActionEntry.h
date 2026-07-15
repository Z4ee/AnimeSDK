#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class MonoBehaviour; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ActionEntry_TypeDefinitionIndex = 36213;

	struct alignas(8) ActionEntry
	{
		::UnityEngine::MonoBehaviour* owner; // 0x10
		::System::Reflection::MethodInfo* method; // 0x18
		::System::String* displayName; // 0x20
	};
}
