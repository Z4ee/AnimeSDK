#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TVModelData_TypeDefinitionIndex = 59274;

	struct alignas(8) ConfigHollowChessboard_TVModelData
	{
		::System::String* resPath; // 0x10
		::UnityEngine::Vector3 shellSize; // 0x18
		::UnityEngine::Vector3 shellCenter; // 0x24
	};
}
