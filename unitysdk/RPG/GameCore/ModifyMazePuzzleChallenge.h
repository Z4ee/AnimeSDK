#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_36AEFAC3D94EA577_OFFSET UNITYSDK_OFFSET(0x174323F0)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_EEA6BF9E850632D8_OFFSET UNITYSDK_OFFSET(0x17432470)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17432440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyMazePuzzleChallenge_TypeDefinitionIndex = 20189;

	class ModifyMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazePuzzleChallengeID; // 0x18
		::System::Int32 RemainStep; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36AEFAC3D94EA577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_36AEFAC3D94EA577_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EEA6BF9E850632D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_METHOD_3_EEA6BF9E850632D8_OFFSET))(a1, a2);
		}
	};
}
