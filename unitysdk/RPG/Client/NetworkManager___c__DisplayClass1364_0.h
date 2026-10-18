#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class Action; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CC590)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__SENDENTERAETHERDIVIDESCENECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD9D04E0)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__SENDENTERAETHERDIVIDESCENECSREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD9D05E0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1364_0_TypeDefinitionIndex = 69375;

	class NetworkManager___c__DisplayClass1364_0 : public ::System::Object
	{
	public:
		::RPG::Client::NetworkManager* __4__this; // 0x10
		::System::Action* doTransferAction; // 0x18
		::System::UInt32 gymID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendEnterAetherDivideSceneCsReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__SENDENTERAETHERDIVIDESCENECSREQ_B__0_OFFSET))(this);
		}

		::System::Void _SendEnterAetherDivideSceneCsReq_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1364_0__SENDENTERAETHERDIVIDESCENECSREQ_B__1_OFFSET))(this, a1);
		}
	};
}
