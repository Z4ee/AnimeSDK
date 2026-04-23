#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameFloatData; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameQuaternionData; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames_RPG_Client_LittleGame_Move_MoveState_AutoGen; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames_System_Boolean_AutoGen; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_METHOD_1_5A8144964C1A6642_OFFSET UNITYSDK_OFFSET(0x17EF6590)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF6930)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerRecordFrames_TypeDefinitionIndex = 39399;

	class PhantomPlayerRecordFrames : public ::System::Object
	{
	public:
		::System::Int32 MaxFrameCount; // 0x10
		::System::Single FrameDeltaTime; // 0x14
		::Il2CppArray<::System::Int32>* AnimatorInitState; // 0x18
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* PositionX; // 0x20
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* PositionY; // 0x28
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* PositionZ; // 0x30
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameQuaternionData* Rotation; // 0x38
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsJump; // 0x40
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* NormalizedXSpeed; // 0x48
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* NormalizedYSpeed; // 0x50
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_RPG_Client_LittleGame_Move_MoveState_AutoGen* MoveState; // 0x58
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsGround; // 0x60
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsMove; // 0x68
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsInputMoveX; // 0x70
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameFloatData* ClimbSpeed; // 0x78
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* NeedJumpBS; // 0x80
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsLadderFlip; // 0x88
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsLadder; // 0x90
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsInAir; // 0x98
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsWallSlide; // 0xA0
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsDoubleJump; // 0xA8
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsSkillArrow; // 0xB0
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsSkillSummon; // 0xB8
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsSquat; // 0xC0
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames_System_Boolean_AutoGen* IsUseProp; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES__CTOR_OFFSET))(this);
		}

		::Struct_2_52A902145F5BE51F_1 Method_1_5A8144964C1A6642(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::Struct_2_52A902145F5BE51F_1(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_METHOD_1_5A8144964C1A6642_OFFSET))(this, a1, a2, a3);
		}
	};
}
