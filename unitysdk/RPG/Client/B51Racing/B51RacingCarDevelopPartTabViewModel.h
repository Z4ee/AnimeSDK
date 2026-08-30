#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE4690)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopPartTabViewModel_TypeDefinitionIndex = 80686;

	class B51RacingCarDevelopPartTabViewModel : public ::System::Object
	{
	public:
		::System::String* PartIconPath; // 0x10
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* RequiredStatIconList; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x20
		::RPG::Client::TextID PartName; // 0x28
		::System::UInt32 PartID; // 0x38
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x3C
		::RPG::Client::TextID BuffDescription; // 0x40
		::System::Boolean CanDirectAcquire; // 0x50
		::System::Boolean CurrentCarHasEquipSameTypePart; // 0x51
		::System::Boolean IsSelected; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
