#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_INPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x839C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteGamePadInput_InputInfo_TypeDefinitionIndex = 76752;

	struct alignas(4) FiveDimFluteGamePadInput_InputInfo
	{
		::System::UInt32 ID; // 0x10
		::System::Single Angle; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEGAMEPADINPUT_INPUTINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
