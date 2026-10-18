#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGBUFFSKILLITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC719580)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingBuffSkillItemViewModel_TypeDefinitionIndex = 82010;

	class B51RacingBuffSkillItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::GameCore::B51RacingPartType Type; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFSKILLITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
