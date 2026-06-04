#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19600B80)
#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19600E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTargetConfigRow_TypeDefinitionIndex = 12343;

	class ChallengeTargetConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChallengeTargetName; // 0x10
		::System::UInt32 ChallengeTargetParam1; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::ChallengeType ChallengeTargetType; // 0x28
		::System::UInt32 ChallengeTargetParam2; // 0x2C
		::System::UInt32 ChallengeTargetParam3; // 0x30
		::System::UInt32 RewardID; // 0x34

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
