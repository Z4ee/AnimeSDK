#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RegionExtension; }
namespace MoleMole { class ServerGateway; }
namespace System { class String; }

#define MOLEMOLE_SERVERDISPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD0860)

namespace MoleMole
{
	inline static constexpr unsigned int ServerDispatchData_TypeDefinitionIndex = 47385;

	class ServerDispatchData : public ::System::Object
	{
	public:
		::System::String* client_secret_key; // 0x10
		::System::String* cdn_check_url; // 0x18
		::System::String* region_name; // 0x20
		::System::Int32 retcode; // 0x28
		::System::String* title; // 0x30
		::System::String* msg; // 0x38
		::System::Object* ext; // 0x40
		::MoleMole::ServerGateway* gateway; // 0x48
		::System::String* oaserver_url; // 0x50
		::System::String* force_update_url; // 0x58
		::System::Object* cdn_conf_ext; // 0x60
		::MoleMole::RegionExtension* region_ext; // 0x68
		::System::String* stop_jump_url; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERDISPATCHDATA__CTOR_OFFSET))(this);
		}
	};
}
