#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueBoardCellDataItem; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93695F0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA___C__DISPLAYCLASS2_0__GETBEFORECELLDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0x9369DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData___c__DisplayClass2_0_TypeDefinitionIndex = 54444;

	class ChessRogueBoardChangeData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 cellID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBeforeCellDataItem_b__0(::RPG::Client::ChessRogueBoardCellDataItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA___C__DISPLAYCLASS2_0__GETBEFORECELLDATAITEM_B__0_OFFSET))(this, x);
		}
	};
}
