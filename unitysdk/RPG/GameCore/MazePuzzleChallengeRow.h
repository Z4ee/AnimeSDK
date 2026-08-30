#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D27C2C0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27CBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleChallengeRow_TypeDefinitionIndex = 13926;

	class MazePuzzleChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressList; // 0x10
		::System::UInt32 IsResetable; // 0x18
		::System::UInt32 MazePuzzleID; // 0x1C
		::System::UInt32 LimitTime; // 0x20
		::System::UInt32 RemainingStep; // 0x24
		::System::UInt32 NormalModeID; // 0x28
		::System::UInt32 SpecialModeID; // 0x2C
		::System::UInt32 TutorialID; // 0x30
		::System::UInt32 IsBeginPrepare; // 0x34
		::System::Boolean IsShowWaypoint; // 0x38
		::System::Boolean IsShowToast; // 0x39
		::System::Boolean IsTopPriority; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
