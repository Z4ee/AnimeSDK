#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB050)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPartRetentionItemViewModel_TypeDefinitionIndex = 80680;

	class B51RacingPartRetentionItemViewModel : public ::System::Object
	{
	public:
		::System::String* PartIconPath; // 0x10
		::RPG::Client::TextID HintText; // 0x18
		::RPG::Client::TextID NewTagText; // 0x28
		::RPG::Client::TextID PartName; // 0x38
		::System::Boolean IsNew; // 0x48
		::System::UInt32 PartID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
