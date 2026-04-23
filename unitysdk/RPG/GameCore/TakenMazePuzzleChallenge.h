#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_METHOD_3_15D1EA72CAAA9698_OFFSET UNITYSDK_OFFSET(0x18ECE100)
#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_METHOD_3_FF7655CB66D322A3_OFFSET UNITYSDK_OFFSET(0x18ECDFC0)
#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECE070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakenMazePuzzleChallenge_TypeDefinitionIndex = 20867;

	class TakenMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x20
		::RPG::GameCore::DynamicString* AttachQuestID; // 0x28
		::System::Boolean AutoClosePuzzle; // 0x30
		::System::Boolean AutoResetPuzzle; // 0x31
		::System::Boolean AutoFinishChallenge; // 0x32
		::System::UInt32 PrepareTime; // 0x34
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnWaitPrepareEnd; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF7655CB66D322A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakenMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakenMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_METHOD_3_FF7655CB66D322A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_15D1EA72CAAA9698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_METHOD_3_15D1EA72CAAA9698_OFFSET))(a1, a2);
		}
	};
}
