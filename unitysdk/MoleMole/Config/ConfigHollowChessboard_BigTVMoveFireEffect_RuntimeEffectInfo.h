#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo_TypeDefinitionIndex = 43464;

	struct alignas(8) ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo
	{
		::Foundation::Unreal::FTransform transformAdditive; // 0x10
		::System::String* effectName; // 0x30
		::System::Single delay; // 0x38
		::MoleMole::HollowChessboard::HollowCell smallTVIndex; // 0x3C
	};
}
