#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_7;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }

#define RPG_CLIENT_CHESSROGUEMODULE___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBB1B30)
#define RPG_CLIENT_CHESSROGUEMODULE___C__DISPLAYCLASS77_0___ONCMDCHESSROGUECELLUPDATENOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xCBB4480)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule___c__DisplayClass77_0_TypeDefinitionIndex = 66932;

	class ChessRogueModule___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::Class_1_C9DFE5EE7107C629_7* protoCell; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdChessRogueCellUpdateNotify_b__0(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__DISPLAYCLASS77_0___ONCMDCHESSROGUECELLUPDATENOTIFY_B__0_OFFSET))(this, a1);
		}
	};
}
