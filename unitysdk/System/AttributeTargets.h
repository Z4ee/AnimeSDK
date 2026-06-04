#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int AttributeTargets_TypeDefinitionIndex = 201;

	enum class AttributeTargets : ::System::Int32
	{
		Assembly = 1,
		Module = 2,
		Class = 4,
		Struct = 8,
		Enum = 16,
		Constructor = 32,
		Method = 64,
		Property = 128,
		Field = 256,
		Event = 512,
		Interface = 1024,
		Parameter = 2048,
		Delegate = 4096,
		ReturnValue = 8192,
		GenericParameter = 16384,
		All = 32767,
	};
}
