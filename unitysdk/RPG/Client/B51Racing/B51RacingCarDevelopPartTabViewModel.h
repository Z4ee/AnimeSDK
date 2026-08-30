#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85BC60)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopPartTabViewModel_TypeDefinitionIndex = 80687;

	class B51RacingCarDevelopPartTabViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* RequiredStatIconList; // 0x10
		::System::String* PartIconPath; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x20
		::System::UInt32 PartID; // 0x28
		::System::Boolean CurrentCarHasEquipSameTypePart; // 0x2C
		::System::Boolean CanDirectAcquire; // 0x2D
		::System::Boolean IsSelected; // 0x2E
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x30
		::RPG::Client::TextID BuffDescription; // 0x38
		::RPG::Client::TextID PartName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
