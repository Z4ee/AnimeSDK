#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ChessboardAnimTimeLineElement; }
namespace MoleMole::Config { class ChessboardCameraTimeLineElement; }
namespace MoleMole::Config { class ChessboardPerformEventTimeLineElement; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardTimeLineConfig_TypeDefinitionIndex = 43904;

	struct alignas(8) ChessboardTimeLineConfig
	{
		::System::Boolean isUseStartIndex; // 0x10
		::System::Int32 startChessPieceIndex; // 0x14
		::System::Single startChessPieceDelayTime; // 0x18
		::System::Int32 fairyConfigID; // 0x1C
		::System::Single performanceDelayTime; // 0x20
		::MoleMole::Config::ChessboardCameraTimeLineElement* cameraInitEvent1; // 0x28
		::MoleMole::Config::ChessboardAnimTimeLineElement* chessboardAnimEvent; // 0x30
		::MoleMole::Config::ChessboardPerformEventTimeLineElement* chessboardPerformEvent; // 0x38
		::MoleMole::Config::ChessboardCameraTimeLineElement* cameraInitEvent2; // 0x40
		::System::Single performanceEndDelayTime; // 0x48
	};
}
