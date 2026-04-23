#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188E1280)
#define RPG_GAMECORE_FIGHTFESTSCOREPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188E15B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScorePhaseRow_TypeDefinitionIndex = 12550;

	class FightFestScorePhaseRow : public ::System::Object
	{
	public:
		::System::String* TargetAvatarIcon; // 0x10
		::System::String* TargetAvatarMiniIcon; // 0x18
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 TargetScore; // 0x24
		::RPG::Client::TextID TargetTip; // 0x28
		::RPG::Client::TextID TargetAvatarName; // 0x38
		::System::UInt32 AvatarInfoID; // 0x48
		::System::UInt32 PhaseID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCOREPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestScorePhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestScorePhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCOREPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
