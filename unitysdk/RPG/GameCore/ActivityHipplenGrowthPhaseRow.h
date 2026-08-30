#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA08040)
#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA082C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGrowthPhaseRow_TypeDefinitionIndex = 11652;

	class ActivityHipplenGrowthPhaseRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PhaseTrialTitle; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Single SpeedRatioMultiplier; // 0x24
		::System::Single BodySize; // 0x28
		::RPG::Client::TextID PhaseTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenGrowthPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenGrowthPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
