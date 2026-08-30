#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGTRTOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CDE20)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingTRToastViewModel_TypeDefinitionIndex = 80711;

	class B51RacingTRToastViewModel : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 VoiceID; // 0x18
		::System::UInt32 TrID; // 0x1C
		::System::UInt32 EnemyID; // 0x20
		::RPG::Client::TextID ContentText; // 0x28
		::RPG::Client::TextID TitleText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRTOASTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
