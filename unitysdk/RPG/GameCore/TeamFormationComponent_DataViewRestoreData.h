#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_DataViewRestoreData_TypeDefinitionIndex = 55140;

	struct alignas(4) TeamFormationComponent_DataViewRestoreData
	{
		::RPG::MVector3 TeamCenter; // 0x10
	};
}
