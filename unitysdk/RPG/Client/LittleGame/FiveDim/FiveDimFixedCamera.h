#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMonoCamera.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A4B90)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedCamera_TypeDefinitionIndex = 70570;

	class FiveDimFixedCamera : public ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDCAMERA__CTOR_OFFSET))(this);
		}
	};
}
