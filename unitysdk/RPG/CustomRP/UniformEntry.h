#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/UniformType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class MonoBehaviour; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UniformEntry_TypeDefinitionIndex = 36212;

	struct alignas(8) UniformEntry
	{
		::UnityEngine::MonoBehaviour* owner; // 0x10
		::System::Reflection::FieldInfo* field; // 0x18
		::System::String* displayName; // 0x20
		::RPG::CustomRP::UniformType type; // 0x28
	};
}
