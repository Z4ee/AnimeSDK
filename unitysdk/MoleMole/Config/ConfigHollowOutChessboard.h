#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x158A9D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOutChessboard_TypeDefinitionIndex = 59084;

	class ConfigHollowOutChessboard : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single FogFxStartOffset; // 0x58
		::System::Single FogFxEndOffset; // 0x5C
		::System::Single FogFxBlendDuaration; // 0x60
		::DG::Tweening::Ease BlendType; // 0x64
		::System::Single ChessboardDistance; // 0x68
		::System::Int32 ChessboardMaxShowLayers; // 0x6C
		::System::String* HollowOutLayerEffectPath; // 0x70
		::System::String* ElevatorEffectPath; // 0x78
		::System::String* ElevatorTVEffectPath; // 0x80
		::System::Single ElevatorTargetDitherAlpha; // 0x88
		::System::Single ElevatorTargetDitherAlpha2; // 0x8C
		::System::Single ElevatorTargetOpacity; // 0x90
		::System::String* ElevatorTargetTVEffectPath; // 0x98
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashOutInfo; // 0xA0
		::System::Single ElevatorSummonDelayAfterFlash; // 0xA8
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashInInfo; // 0xB0
		::System::String* ElevatorFadeInModelAnim; // 0xB8
		::System::String* BackgroundMatPath; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD__CTOR_OFFSET))(this);
		}
	};
}
