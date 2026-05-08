#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_MoveEffectPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo_TypeDefinitionIndex = 43463;

	struct alignas(8) ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo
	{
		::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_MoveEffectPoint Point; // 0x10
		::System::String* LeftMoveEffectName_RightDir; // 0x18
		::System::String* RightMoveEffectName_RightDir; // 0x20
		::System::String* LeftMoveEffectName_UpDir; // 0x28
		::System::String* RightMoveEffectName_UpDir; // 0x30
		::System::Single Delay; // 0x38
	};
}
