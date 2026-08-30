#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D112A10)
#define RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D112CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakBossConfigRow_TypeDefinitionIndex = 12875;

	class ChallengePeakBossConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HardTagList; // 0x10
		::Il2CppArray<::System::UInt32>* BuffList; // 0x18
		::Il2CppArray<::System::UInt32>* HardEventIDList; // 0x20
		::System::UInt32 HardTarget; // 0x28
		::System::UInt32 ColorMedalTarget; // 0x2C
		::RPG::Client::TextID HardTitle; // 0x30
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengePeakBossConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakBossConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKBOSSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
