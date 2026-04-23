#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURGAMEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2C0E0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourGamePuzzleBoard_TypeDefinitionIndex = 68317;

	class ParkourGamePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURGAMEPUZZLEBOARD__CTOR_OFFSET))(this);
		}
	};
}
