#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace MoleMole::Photo
{
	inline static constexpr unsigned int KeyBone_TypeDefinitionIndex = 58451;

	struct alignas(8) KeyBone
	{
		::UnityEngine::Transform* bone; // 0x10
		::System::Boolean includeChildren; // 0x18
	};
}
