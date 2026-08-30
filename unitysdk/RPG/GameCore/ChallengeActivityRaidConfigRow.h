#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D10B090)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityRaidConfigRow_TypeDefinitionIndex = 12842;

	class ChallengeActivityRaidConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x18
		::System::UInt32 ChallengeID; // 0x20
		::System::UInt32 ScoringGroupID; // 0x24
		::System::UInt32 ScheduleDataID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeActivityRaidConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeActivityRaidConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
