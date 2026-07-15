#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class Action; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18261B40)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__SENDENTERAETHERDIVIDESCENECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x18261B50)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__SENDENTERAETHERDIVIDESCENECSREQ_B__1_OFFSET UNITYSDK_OFFSET(0x18261C50)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1321_0_TypeDefinitionIndex = 66264;

	class NetworkManager___c__DisplayClass1321_0 : public ::System::Object
	{
	public:
		::System::Action* doTransferAction; // 0x10
		::RPG::Client::NetworkManager* __4__this; // 0x18
		::System::UInt32 gymID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendEnterAetherDivideSceneCsReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__SENDENTERAETHERDIVIDESCENECSREQ_B__0_OFFSET))(this);
		}

		::System::Void _SendEnterAetherDivideSceneCsReq_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1321_0__SENDENTERAETHERDIVIDESCENECSREQ_B__1_OFFSET))(this, a1);
		}
	};
}
