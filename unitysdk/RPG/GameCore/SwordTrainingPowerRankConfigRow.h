#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D595430)
#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5957E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPowerRankConfigRow_TypeDefinitionIndex = 12349;

	class SwordTrainingPowerRankConfigRow : public ::System::Object
	{
	public:
		::System::String* RankIcon; // 0x10
		::System::UInt32 RankGroupID; // 0x18
		::System::UInt32 RankID; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 PowerRequire; // 0x24
		::RPG::Client::TextID RankSubName; // 0x28
		::RPG::Client::TextID RankProgressName; // 0x38
		::RPG::Client::TextID RankGroupName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
