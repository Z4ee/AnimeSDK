#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialReplaceUnit_TypeDefinitionIndex = 66963;

	struct alignas(8) MaterialReplaceUnit
	{
		::System::String* rendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
	};
}
