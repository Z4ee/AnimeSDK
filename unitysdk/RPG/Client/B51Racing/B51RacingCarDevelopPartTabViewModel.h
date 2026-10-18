#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC723000)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopPartTabViewModel_TypeDefinitionIndex = 82014;

	class B51RacingCarDevelopPartTabViewModel : public ::System::Object
	{
	public:
		::System::String* PartIconPath; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x18
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* RequiredStatIconList; // 0x20
		::System::UInt32 PartID; // 0x28
		::RPG::Client::TextID PartName; // 0x30
		::RPG::Client::TextID BuffDescription; // 0x40
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x50
		::System::Boolean CanDirectAcquire; // 0x54
		::System::Boolean CurrentCarHasEquipSameTypePart; // 0x55
		::System::Boolean IsSelected; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
