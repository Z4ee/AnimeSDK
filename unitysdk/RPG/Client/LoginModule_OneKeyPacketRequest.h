#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RspHandler; }
namespace System { class Action; }

#define RPG_CLIENT_LOGINMODULE_ONEKEYPACKETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x186287E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_OneKeyPacketRequest_TypeDefinitionIndex = 65846;

	class LoginModule_OneKeyPacketRequest : public ::System::Object
	{
	public:
		::System::Action* RequestCall; // 0x10
		::RPG::Client::RspHandler* RspHandler; // 0x18
		::System::UInt16 CmdID; // 0x20

		::System::Void _ctor(::System::UInt16 a1, ::System::Action* a2, ::RPG::Client::RspHandler* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action*, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_ONEKEYPACKETREQUEST__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
