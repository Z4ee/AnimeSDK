#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RspHandler; }
namespace System { class Action; }

#define RPG_CLIENT_LOGINMODULE_ONEKEYPACKETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x9A56560)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_OneKeyPacketRequest_TypeDefinitionIndex = 53421;

	class LoginModule_OneKeyPacketRequest : public ::System::Object
	{
	public:
		::System::Action* RequestCall; // 0x10
		::RPG::Client::RspHandler* RspHandler; // 0x18
		::System::UInt16 CmdID; // 0x20

		::System::Void _ctor(::System::UInt16 cmdID, ::System::Action* requestCall, ::RPG::Client::RspHandler* rspHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action*, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_ONEKEYPACKETREQUEST__CTOR_OFFSET))(this, cmdID, requestCall, rspHandler);
		}
	};
}
