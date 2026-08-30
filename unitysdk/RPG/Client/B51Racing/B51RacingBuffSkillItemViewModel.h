#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGBUFFSKILLITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED3E70)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingBuffSkillItemViewModel_TypeDefinitionIndex = 80681;

	class B51RacingBuffSkillItemViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingPartType Type; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFSKILLITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
