#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCarDetailDisplayMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84FA10)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailDialogViewModel_TypeDefinitionIndex = 80683;

	class B51RacingCarDetailDialogViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x10
		::System::String* DriverIconID; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* BuffSkillItems; // 0x20
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* TargetStatIconList; // 0x28
		::System::UInt32 ActiveSkillID; // 0x30
		::System::Single ActiveSkillExpProgress; // 0x34
		::System::UInt32 ActiveSkillLevel; // 0x38
		::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode DisplayMode; // 0x3C
		::RPG::Client::TextID DriverBonusText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
