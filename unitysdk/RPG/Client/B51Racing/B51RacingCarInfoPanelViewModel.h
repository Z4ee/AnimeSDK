#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85E830)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarInfoPanelViewModel_TypeDefinitionIndex = 80661;

	class B51RacingCarInfoPanelViewModel : public ::System::Object
	{
	public:
		::System::String* ActiveSkillIconPath; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x18
		::RPG::Client::TextID CarName; // 0x20
		::RPG::Client::TextID ActiveSkillName; // 0x30
		::System::UInt32 ActiveSkillLevel; // 0x40
		::System::UInt32 CarID; // 0x44
		::RPG::Client::TextID ActiveSkillLevelText; // 0x48
		::RPG::Client::TextID ActiveSkillDescription; // 0x58
		::System::UInt32 ActiveMaxSkillLevel; // 0x68
		::System::UInt32 ActiveSkillID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
