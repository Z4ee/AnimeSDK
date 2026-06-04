#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingGameBoyChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1962D460)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1962D7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyChallengeRow_TypeDefinitionIndex = 13429;

	class ChenLingGameBoyChallengeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Parameter2; // 0x10
		::RPG::GameCore::DynamicValue* Parameter3; // 0x18
		::RPG::GameCore::DynamicValue* Parameter1; // 0x20
		::RPG::GameCore::ChenLingGameBoyChallengeType ChallengeType; // 0x28
		::System::UInt32 GameBoyChallengeID; // 0x2C
		::RPG::Client::TextID TextmapMazePuzzle; // 0x30
		::System::UInt32 RewardID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingGameBoyChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
