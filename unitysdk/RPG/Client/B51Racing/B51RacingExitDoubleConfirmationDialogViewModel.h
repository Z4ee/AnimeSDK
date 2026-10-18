#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGEXITDOUBLECONFIRMATIONDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC794400)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingExitDoubleConfirmationDialogViewModel_TypeDefinitionIndex = 82041;

	class B51RacingExitDoubleConfirmationDialogViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID CalendarDisplayName; // 0x10
		::System::Int32 PlayerTeamRank; // 0x20
		::RPG::Client::TextID HintText; // 0x28
		::System::Int32 DayIndex; // 0x38
		::System::Int32 PlayerTeamScore; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGEXITDOUBLECONFIRMATIONDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
