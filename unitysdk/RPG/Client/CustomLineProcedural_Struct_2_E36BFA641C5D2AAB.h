#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class LineRenderer; }

namespace RPG::Client
{
	inline static constexpr unsigned int CustomLineProcedural_Struct_2_E36BFA641C5D2AAB_TypeDefinitionIndex = 67243;

	struct alignas(8) CustomLineProcedural_Struct_2_E36BFA641C5D2AAB
	{
		::UnityEngine::LineRenderer* Field_2_0; // 0x10
		::UnityEngine::Matrix4x4 Field_2_1; // 0x18
	};
}
