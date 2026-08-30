#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ActiveSkillDescShowMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED4A40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillItemViewModel_TypeDefinitionIndex = 80655;

	class B51RacingCarActiveSkillItemViewModel : public ::System::Object
	{
	public:
		::System::Single ExpProgress; // 0x10
		::System::UInt32 SkillID; // 0x14
		::RPG::Client::B51Racing::ActiveSkillDescShowMode DescShowMode; // 0x18
		::System::UInt32 SkillMaxLevel; // 0x1C
		::System::UInt32 SkillLevel; // 0x20
		::System::Boolean ShowExpBar; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
