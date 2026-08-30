#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class Action; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CDB20)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS64_0__GETSERVERLATENCY_B__0_OFFSET UNITYSDK_OFFSET(0xD9CDB30)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass64_0_TypeDefinitionIndex = 69341;

	class NetworkManager___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::RPG::Client::NetworkManager* __4__this; // 0x10
		::System::Action* finishCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetServerLatency_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS64_0__GETSERVERLATENCY_B__0_OFFSET))(this);
		}
	};
}
