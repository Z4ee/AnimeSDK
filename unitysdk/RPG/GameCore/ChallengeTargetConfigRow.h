#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187C4A40)
#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187C4CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTargetConfigRow_TypeDefinitionIndex = 12256;

	class ChallengeTargetConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID ChallengeTargetName; // 0x18
		::System::UInt32 ChallengeTargetParam1; // 0x28
		::System::UInt32 ChallengeTargetParam2; // 0x2C
		::RPG::GameCore::ChallengeType ChallengeTargetType; // 0x30
		::System::UInt32 ChallengeTargetParam3; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeTargetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
