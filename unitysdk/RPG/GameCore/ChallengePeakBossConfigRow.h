#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705D790)
#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1705DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakBossConfigRow_TypeDefinitionIndex = 11834;

	class ChallengePeakBossConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HardTagList; // 0x10
		::Il2CppArray<::System::UInt32>* BuffList; // 0x18
		::Il2CppArray<::System::UInt32>* HardEventIDList; // 0x20
		::System::UInt32 ColorMedalTarget; // 0x28
		::System::UInt32 HardTarget; // 0x2C
		::System::UInt32 ID; // 0x30
		::RPG::Client::TextID HardTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengePeakBossConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakBossConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
