#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueBoardCellDataItem; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9367C00)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS4_0__GETBEFORECELLDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0x9367C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData___c__DisplayClass4_0_TypeDefinitionIndex = 54435;

	class ChessRogueBoardCellChangeData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 cellID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBeforeCellDataItem_b__0(::RPG::Client::ChessRogueBoardCellDataItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA___C__DISPLAYCLASS4_0__GETBEFORECELLDATAITEM_B__0_OFFSET))(this, x);
		}
	};
}
