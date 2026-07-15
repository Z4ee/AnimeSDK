#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_48BC77A311E2788D_OFFSET UNITYSDK_OFFSET(0x1B1ABFC0)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_EEA6BF9E850632D8_OFFSET UNITYSDK_OFFSET(0x1B1AC000)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1ABFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyMazePuzzleChallenge_TypeDefinitionIndex = 21205;

	class ModifyMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazePuzzleChallengeID; // 0x18
		::System::Int32 RemainStep; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48BC77A311E2788D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_48BC77A311E2788D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EEA6BF9E850632D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_EEA6BF9E850632D8_OFFSET))(a1, a2);
		}
	};
}
