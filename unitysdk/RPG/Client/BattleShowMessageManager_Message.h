#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBDBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowMessageManager_Message_TypeDefinitionIndex = 68593;

	class BattleShowMessageManager_Message : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::UIController* UI; // 0x18
		::System::String* Text; // 0x20
		::System::Single LifetimeMin; // 0x28
		::System::Single LifetimeNormal; // 0x2C
		::System::Single Begin; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_MESSAGE__CTOR_OFFSET))(this);
		}
	};
}
