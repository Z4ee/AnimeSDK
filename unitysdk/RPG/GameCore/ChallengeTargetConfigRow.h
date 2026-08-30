#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF89A20)
#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF89CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTargetConfigRow_TypeDefinitionIndex = 12867;

	class ChallengeTargetConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengeType ChallengeTargetType; // 0x10
		::System::UInt32 ChallengeTargetParam3; // 0x14
		::System::UInt32 ChallengeTargetParam2; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::RPG::Client::TextID ChallengeTargetName; // 0x20
		::System::UInt32 ChallengeTargetParam1; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeTargetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
