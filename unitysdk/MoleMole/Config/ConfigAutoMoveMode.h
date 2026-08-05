#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAutoMoveMode_TypeDefinitionIndex = 58616;

	struct alignas(8) ConfigAutoMoveMode
	{
		::System::Boolean EnableAutoMove; // 0x10
		::System::Single AutoMoveCD; // 0x14
		::System::Boolean AutoMoveLockDirection; // 0x18
		::Share::GridDir AutoMoveDirection; // 0x1C
		::System::Collections::Generic::List_1<::Share::GridDir>* AutoMoveManualAllowDirection; // 0x20
		::System::Single AutoMoveManualMoveFirstInterval; // 0x28
		::System::Single AutoMoveManualMoveInterval; // 0x2C
		::System::Boolean EnableAutoUseHollowItem; // 0x30
		::System::Single AutoUseHollowItemCD; // 0x34
	};
}
