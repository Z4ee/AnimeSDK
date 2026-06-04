#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleItemConfig_TypeDefinitionIndex = 73289;

	struct alignas(8) PinballPuzzleItemConfig
	{
		::UnityEngine::Vector2Int Pos; // 0x10
		::RPG::Client::Prop::PinballPuzzleItemType ItemType; // 0x18
		::RPG::Client::Prop::ChessDirection Rot; // 0x1C
		::UnityEngine::Vector3 ModelOffset; // 0x20
		::System::UInt32 PropID; // 0x2C
		::System::UInt32 StationAnchorID; // 0x30
		::System::String* RotateAttachPointName; // 0x38
		::System::UInt32 EnterStationAnchorID; // 0x40
		::System::UInt32 ExitStationAnchorID; // 0x44
	};
}
