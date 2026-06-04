#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace System { class String; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E1110)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS59_0___ONGLOBALDISPATCHRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0xC2E1120)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass59_0_TypeDefinitionIndex = 64864;

	class NetworkManager___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::String* top; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnGlobalDispatchResponse_b__1(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS59_0___ONGLOBALDISPATCHRESPONSE_B__1_OFFSET))(this, a1);
		}
	};
}
