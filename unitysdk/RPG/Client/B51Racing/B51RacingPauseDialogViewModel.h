#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGPAUSEDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC895AC0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPauseDialogViewModel_TypeDefinitionIndex = 80714;

	class B51RacingPauseDialogViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID TrackNameText; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPAUSEDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
