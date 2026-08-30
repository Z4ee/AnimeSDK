#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC895AB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPartRetentionItemViewModel_TypeDefinitionIndex = 80681;

	class B51RacingPartRetentionItemViewModel : public ::System::Object
	{
	public:
		::System::String* PartIconPath; // 0x10
		::RPG::Client::TextID PartName; // 0x18
		::System::Boolean IsNew; // 0x28
		::System::UInt32 PartID; // 0x2C
		::RPG::Client::TextID HintText; // 0x30
		::RPG::Client::TextID NewTagText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPARTRETENTIONITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
