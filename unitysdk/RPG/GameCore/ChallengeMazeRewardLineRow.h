#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF87660)
#define RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF877A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeMazeRewardLineRow_TypeDefinitionIndex = 12869;

	class ChallengeMazeRewardLineRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 StarCount; // 0x14
		::System::UInt32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeMazeRewardLineRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeMazeRewardLineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
