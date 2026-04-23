#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_INPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD82E0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteGamePadInput_InputInfo_TypeDefinitionIndex = 70926;

	struct alignas(4) FiveDimFluteGamePadInput_InputInfo
	{
		::System::UInt32 ID; // 0x10
		::System::Single Angle; // 0x14

		::System::Void _ctor(::System::UInt32 id, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_INPUTINFO__CTOR_OFFSET))(this, id, angle);
		}
	};
}
