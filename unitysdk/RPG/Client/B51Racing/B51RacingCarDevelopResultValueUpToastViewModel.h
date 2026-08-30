#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDEBC0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopResultValueUpToastViewModel_TypeDefinitionIndex = 80687;

	class B51RacingCarDevelopResultValueUpToastViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingStatType StatType; // 0x10
		::System::UInt32 DeltaValue; // 0x14
		::RPG::Client::TextID ResultText; // 0x18
		::System::UInt32 BoostLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
