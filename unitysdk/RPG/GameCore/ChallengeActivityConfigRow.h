#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEACTIVITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17055390)
#define RPG_GAMECORE_CHALLENGEACTIVITYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17055590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityConfigRow_TypeDefinitionIndex = 11804;

	class ChallengeActivityConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MarkScoreList; // 0x10
		::Il2CppArray<::System::UInt32>* ChallengeList; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityRewardList; // 0x20
		::System::UInt32 ActivityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeActivityConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeActivityConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
