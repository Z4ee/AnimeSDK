#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGREADYVEHICLEDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC896060)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingReadyVehicleDetailViewModel_TypeDefinitionIndex = 80722;

	class B51RacingReadyVehicleDetailViewModel : public ::System::Object
	{
	public:
		::System::String* LevelText; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 CarId; // 0x20
		::RPG::Client::TextID NameText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGREADYVEHICLEDETAILVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
