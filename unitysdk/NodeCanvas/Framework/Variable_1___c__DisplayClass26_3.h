#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Component; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable_1___c__DisplayClass26_3_TypeDefinitionIndex = 27200;

	template <typename T>
	class Variable_1___c__DisplayClass26_3 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* getMethod; // 0x0
		::UnityEngine::Component* instance; // 0x0
		::System::Reflection::MethodInfo* setMethod; // 0x0
	};
}
