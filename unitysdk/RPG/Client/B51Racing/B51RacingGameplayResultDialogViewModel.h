#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_41DC55EACF71282F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC8833B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayResultDialogViewModel_TypeDefinitionIndex = 80715;

	class B51RacingGameplayResultDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* RankEntries; // 0x10
		::System::Int32 PlayerFinalRank; // 0x18
		::RPG::Client::B51Racing::EB51RacingResultState ResultState; // 0x1C
		::RPG::Client::TextID TitleText; // 0x20
		::System::Boolean ShowRestartButton; // 0x30
		::System::Boolean IsChallenge; // 0x31
		::System::Boolean ShowHintPanel; // 0x32
		::System::Boolean ShowEmptyCloseButton; // 0x33
		::System::Boolean ShowExitButton; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
