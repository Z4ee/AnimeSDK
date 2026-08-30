#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8610)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatDescItemViewModel_TypeDefinitionIndex = 80689;

	class B51RacingCarStatDescItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::B51RacingStatType Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
