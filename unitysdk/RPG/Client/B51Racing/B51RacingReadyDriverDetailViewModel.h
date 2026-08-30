#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGREADYDRIVERDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB460)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingReadyDriverDetailViewModel_TypeDefinitionIndex = 80716;

	class B51RacingReadyDriverDetailViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* DriverBuffIconList; // 0x10
		::RPG::Client::TextID DriverName; // 0x18
		::System::UInt32 DriverID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGREADYDRIVERDETAILVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
