#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int BlendShapeData_TypeDefinitionIndex = 84229;

	struct alignas(8) BlendShapeData
	{
		::System::String* path; // 0x10
		::Il2CppArray<::System::Int32>* indices; // 0x18
		::System::Int32 nameIndex; // 0x20
	};
}
