#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E7D560)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowMessageManager_Message_TypeDefinitionIndex = 66210;

	class BattleShowMessageManager_Message : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::System::String* ImagePath; // 0x18
		::RPG::Client::UIController* UI; // 0x20
		::System::Single LifetimeNormal; // 0x28
		::System::Single Begin; // 0x2C
		::System::Single LifetimeMin; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_MESSAGE__CTOR_OFFSET))(this);
		}
	};
}
