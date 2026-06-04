#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPLAYERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE0AE80)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPlayerView_TypeDefinitionIndex = 71715;

	class FiveDimPlayerView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPLAYERVIEW__CTOR_OFFSET))(this);
		}
	};
}
