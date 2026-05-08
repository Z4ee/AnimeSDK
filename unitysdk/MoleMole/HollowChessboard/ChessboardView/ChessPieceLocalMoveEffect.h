#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x10BC45C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_ONONCEFINISH_OFFSET UNITYSDK_OFFSET(0x10BC4CA0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x10BC4690)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SEARCHINNEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x10BC45D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SETNEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x10BC4C50)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC4D00)

namespace MoleMole::HollowChessboard::ChessboardView
{
	inline static constexpr unsigned int ChessPieceLocalMoveEffect_TypeDefinitionIndex = 61835;

	class ChessPieceLocalMoveEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Action* mergedEnd; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* Config; // 0x28
		::System::Action* OnEnd; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* _needChange; // 0x38
		::System::Boolean ModifyHollowRenderWorld; // 0x40
		::System::Boolean DoAllPiece; // 0x41
		::System::Boolean ForceCloseMultipleDisplay; // 0x42
		::System::Boolean PreserveVE; // 0x43
		::System::Int32 _waitCount; // 0x44
		::MoleMole::PieceModelAnimType AnimType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Boolean SearchInNeedChange(::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SEARCHINNEEDCHANGE_OFFSET))(this, cell, result);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Void SetNeedChange(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* needChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SETNEEDCHANGE_OFFSET))(this, needChange);
		}

		::System::Void OnOnceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_ONONCEFINISH_OFFSET))(this);
		}
	};
}
