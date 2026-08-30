#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueBoardCellDataItem; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB9A670)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS3_0__MERGE_B__0_OFFSET UNITYSDK_OFFSET(0xCB9A7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData___c__DisplayClass3_0_TypeDefinitionIndex = 66913;

	class ChessRogueBoardCellChangeData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 cellID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Merge_b__0(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS3_0__MERGE_B__0_OFFSET))(this, a1);
		}
	};
}
