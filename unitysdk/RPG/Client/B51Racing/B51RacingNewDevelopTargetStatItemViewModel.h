#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETSTATITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC892FB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewDevelopTargetStatItemViewModel_TypeDefinitionIndex = 80700;

	class B51RacingNewDevelopTargetStatItemViewModel : public ::System::Object
	{
	public:
		::System::String* StatIconPath; // 0x10
		::RPG::Client::TextID StatName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETSTATITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
