#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_METHOD_3_6270F8A0D8B29C30_OFFSET UNITYSDK_OFFSET(0x1E0850C0)
#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_METHOD_3_B91866F18E913CC9_OFFSET UNITYSDK_OFFSET(0x1E085120)
#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E085100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMazePuzzleChallengeProgress_TypeDefinitionIndex = 21766;

	class SetMazePuzzleChallengeProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazePuzzleChallengeID; // 0x18
		::System::Int32 ProgressIndex; // 0x1C
		::System::Int32 ProgressAdd; // 0x20
		::System::Int32 ProgressSet; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6270F8A0D8B29C30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMazePuzzleChallengeProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMazePuzzleChallengeProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_METHOD_3_6270F8A0D8B29C30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B91866F18E913CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMazePuzzleChallengeProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMazePuzzleChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_METHOD_3_B91866F18E913CC9_OFFSET))(a1, a2);
		}
	};
}
