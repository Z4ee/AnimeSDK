#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectRunContextBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBIGTVMOVERUNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA9D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBigTVMoveRunContext_TypeDefinitionIndex = 43432;

	class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase
	{
	public:
		::System::Action_1<::MoleMole::HollowChessboard::HollowCell>* RefreshChessPieceCallBack; // 0x10
		::MoleMole::HollowChessboard::HollowCell bigTvIndex; // 0x18
		::ProtoScript::HollowGridLink CurMoveDir; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBIGTVMOVERUNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
