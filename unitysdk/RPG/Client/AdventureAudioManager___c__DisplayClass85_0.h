#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB227C40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS85_0___ONOPENCHEST_B__0_OFFSET UNITYSDK_OFFSET(0xB22A150)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager___c__DisplayClass85_0_TypeDefinitionIndex = 56529;

	class AdventureAudioManager___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventureAudioManager* __4__this; // 0x10
		::System::Boolean isPreciousChest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnOpenChest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS85_0___ONOPENCHEST_B__0_OFFSET))(this);
		}
	};
}
