#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value_ValueType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int MatPropertyData_Value_TypeDefinitionIndex = 72195;

	struct alignas(4) MatPropertyData_Value
	{
		::MoleMole::HollowChessboard::MatPropertyData_Value_ValueType valueType; // 0x10
		::System::Single floatValue; // 0x14
		::UnityEngine::Vector4 Vector4Value; // 0x18
	};
}
