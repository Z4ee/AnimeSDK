#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ActiveSkillDescShowMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84C200)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillItemViewModel_TypeDefinitionIndex = 80656;

	class B51RacingCarActiveSkillItemViewModel : public ::System::Object
	{
	public:
		::System::Boolean ShowExpBar; // 0x10
		::System::Single ExpProgress; // 0x14
		::System::UInt32 SkillID; // 0x18
		::RPG::Client::B51Racing::ActiveSkillDescShowMode DescShowMode; // 0x1C
		::System::UInt32 SkillMaxLevel; // 0x20
		::System::UInt32 SkillLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
