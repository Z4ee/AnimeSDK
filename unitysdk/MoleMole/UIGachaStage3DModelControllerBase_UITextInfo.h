#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase_UITextInfo_TypeDefinitionIndex = 54987;

	struct alignas(8) UIGachaStage3DModelControllerBase_UITextInfo
	{
		::System::String* MatBlackboard; // 0x10
		::System::String* MoveTransBlackboard; // 0x18
		::UnityEngine::Transform* Parent; // 0x20
		::UnityEngine::Transform* MoveTransform; // 0x28
		::UnityEngine::Vector3 OriginPos; // 0x30
	};
}
