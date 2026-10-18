#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A55D0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeRankRow_TypeDefinitionIndex = 10916;

	class AetherDivideChallengeRankRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID UnlockText; // 0x18
		::System::UInt32 ChallengeRank; // 0x28
		::System::UInt32 FunctionUnlockID; // 0x2C
		::System::UInt32 PreRank; // 0x30
		::System::UInt32 TrainerLevel; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::System::Boolean IsHard; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideChallengeRankRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideChallengeRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
