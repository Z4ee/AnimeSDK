#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingPreFillSource.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC861160)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatItemViewModel_TypeDefinitionIndex = 80691;

	class B51RacingCarStatItemViewModel : public ::System::Object
	{
	public:
		::System::Boolean ShowTargetIcon; // 0x10
		::System::Boolean IsFinished; // 0x11
		::RPG::Client::B51Racing::B51RacingPreFillSource PreFillSource; // 0x14
		::RPG::GameCore::B51RacingStatType StatType; // 0x18
		::System::Single TargetValue; // 0x1C
		::System::Single PreFillValue; // 0x20
		::System::Single CurrentValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
