#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerFrameData_1.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_RPG_CLIENT_LITTLEGAME_MOVE_MOVESTATE_AUTOGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9C350)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerRecordFrames_RPG_Client_LittleGame_Move_MoveState_AutoGen_TypeDefinitionIndex = 41994;

	class PhantomPlayerRecordFrames_RPG_Client_LittleGame_Move_MoveState_AutoGen : public ::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::RPG::Client::LittleGame::Move::MoveState>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_RPG_CLIENT_LITTLEGAME_MOVE_MOVESTATE_AUTOGEN__CTOR_OFFSET))(this);
		}
	};
}
