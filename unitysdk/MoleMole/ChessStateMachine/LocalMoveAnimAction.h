#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class Class_1_43BD383C98B4C0C5_24;
class Class_4_DA19DD65175B97CF;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }

#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x13FF5370)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_BUILDLOCALMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x13FF4780)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_CHECKISBIGTVMOVE_OFFSET UNITYSDK_OFFSET(0x13FF46B0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_DORISEORSINKBYCONFIG_OFFSET UNITYSDK_OFFSET(0x13FF4820)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x13FF5210)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x13FF5140)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_OFFSET UNITYSDK_OFFSET(0x13FF4B10)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x13FF53C0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x13FF5290)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x13FF4650)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUN_OFFSET UNITYSDK_OFFSET(0x13FF4420)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_STOP_OFFSET UNITYSDK_OFFSET(0x13FF5250)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF53D0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x13FF53E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int LocalMoveAnimAction_TypeDefinitionIndex = 78598;

	class LocalMoveAnimAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean ForceCloseMultipleDisplay; // 0x28
		::MoleMole::PieceModelAnimType animType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUN_OFFSET))(this, context);
		}

		static ::System::Void RunInner(::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType animType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay)
		{
			return ((::System::Void(*)(::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUNINNER_OFFSET))(chessPieceProxy, animType, onEnd, forceCloseMultipleDisplay);
		}

		static ::System::Boolean CheckIsBigTVMove(::Class_5_A6F8D19602712D95* chessPiece3dModel, ::MoleMole::PieceModelAnimType pieceModelAnimType)
		{
			return ((::System::Boolean(*)(::Class_5_A6F8D19602712D95*, ::MoleMole::PieceModelAnimType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_CHECKISBIGTVMOVE_OFFSET))(chessPiece3dModel, pieceModelAnimType);
		}

		static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* BuildLocalMoveEffect(::MoleMole::PieceModelAnimType animType, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::System::Action* onEnd)
		{
			return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_BUILDLOCALMOVEEFFECT_OFFSET))(animType, forceCloseMultipleDisplay, config, onEnd);
		}

		static ::System::Void DoRiseOrSinkByConfig(::MoleMole::PieceModelAnimType animType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::Class_5_A6F8D19602712D95* chessPiece3dModel, ::System::Boolean preserveVE, ::System::Single speed)
		{
			return ((::System::Void(*)(::MoleMole::PieceModelAnimType, ::System::Action*, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::Class_5_A6F8D19602712D95*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_DORISEORSINKBYCONFIG_OFFSET))(animType, onEnd, forceCloseMultipleDisplay, config, chessPiece3dModel, preserveVE, speed);
		}

		static ::System::Boolean GetChangeStructConfig(::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config)
		{
			return ((::System::Boolean(*)(::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_OFFSET))(chessPieceProxy, changeType, config);
		}

		static ::System::Boolean GetChangeStructConfig_1(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config, ::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup* configGroup)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&, ::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_1_OFFSET))(config, chessPieceProxy, changeType, configGroup);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_STOP_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ONSTOP_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
