#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84B3E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarTargetPartIconViewModel_TypeDefinitionIndex = 80693;

	class B51RacingCarTargetPartIconViewModel : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
