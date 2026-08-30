#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterMotionParamData_TypeDefinitionIndex = 73159;

	struct alignas(8) CharacterMotionParamData
	{
		::System::Double WalkSpeed; // 0x10
		::System::Double RunSpeed; // 0x18
		::System::Double FastRunSpeed; // 0x20
		::System::Double RunStartTime; // 0x28
		::System::Double RunStartSpeed; // 0x30
		::System::Double RunStartAcc; // 0x38
		::System::Double RunStopTime; // 0x40
		::System::Double RunStopSpeed; // 0x48
		::System::Double RunStopAcc; // 0x50
	};
}
