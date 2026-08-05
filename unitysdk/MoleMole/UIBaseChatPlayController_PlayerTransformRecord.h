#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_PlayerTransformRecord_TypeDefinitionIndex = 72973;

	struct alignas(4) UIBaseChatPlayController_PlayerTransformRecord
	{
		::System::Boolean NeedRestore; // 0x10
		::UnityEngine::Vector3 Pos; // 0x14
		::UnityEngine::Vector3 Rot; // 0x20
		::System::Boolean IsKinematic; // 0x2C
	};
}
