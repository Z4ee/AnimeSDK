#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCarDetailDisplayMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC717510)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailDialogViewModel_TypeDefinitionIndex = 82010;

	class B51RacingCarDetailDialogViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x10
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* TargetStatIconList; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* BuffSkillItems; // 0x20
		::System::String* DriverIconID; // 0x28
		::RPG::Client::TextID DriverBonusText; // 0x30
		::System::Single ActiveSkillExpProgress; // 0x40
		::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode DisplayMode; // 0x44
		::System::UInt32 ActiveSkillID; // 0x48
		::System::UInt32 ActiveSkillLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
