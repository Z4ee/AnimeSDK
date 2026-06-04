#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19600760)
#define RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19600900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryMazeExtraConfigRow_TypeDefinitionIndex = 12363;

	class ChallengeStoryMazeExtraConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleTargetID; // 0x10
		::System::UInt32 ClearScore; // 0x18
		::System::UInt32 TurnLimit; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
