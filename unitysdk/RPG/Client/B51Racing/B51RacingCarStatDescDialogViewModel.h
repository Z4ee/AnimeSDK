#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8AF0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatDescDialogViewModel_TypeDefinitionIndex = 80688;

	class B51RacingCarStatDescDialogViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::B51RacingStatType>* StatTypes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
