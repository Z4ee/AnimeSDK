#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVSWITCHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvSwitchType_TypeDefinitionIndex = 64433;

	struct alignas(4) ConfigHollowChessboard_TvSwitchType
	{
		::MoleMole::HollowPieceRepresentType from; // 0x10
		::MoleMole::HollowPieceRepresentType to; // 0x14

		::System::Void _ctor(::MoleMole::HollowPieceRepresentType from, ::MoleMole::HollowPieceRepresentType to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVSWITCHTYPE__CTOR_OFFSET))(this, from, to);
		}
	};
}
