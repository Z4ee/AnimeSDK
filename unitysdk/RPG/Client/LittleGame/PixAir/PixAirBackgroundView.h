#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBACKGROUNDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB2980)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirBackgroundView_TypeDefinitionIndex = 73367;

	class PixAirBackgroundView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBACKGROUNDVIEW__CTOR_OFFSET))(this);
		}
	};
}
