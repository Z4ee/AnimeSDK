#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System { class String; }

#define RPG_CLIENT_BASEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9176B20)
#define RPG_CLIENT_BASEMODULE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9176840)
#define RPG_CLIENT_BASEMODULE_GET__NET_OFFSET UNITYSDK_OFFSET(0x9176C40)
#define RPG_CLIENT_BASEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x91769C0)
#define RPG_CLIENT_BASEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9176A60)
#define RPG_CLIENT_BASEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9176A20)
#define RPG_CLIENT_BASEMODULE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x9176AA0)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9176BC0)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x9176960)
#define RPG_CLIENT_BASEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9176C00)
#define RPG_CLIENT_BASEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9176CD0)
#define RPG_CLIENT_BASEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9176830)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseModule_TypeDefinitionIndex = 51023;

	class BaseModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BaseModule_TypeDefinitionIndex)->GetStaticField(0x376D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_GET_NAME_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET))(this, type, handler);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void RemoveListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_REMOVELISTENER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* get__Net()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_GET__NET_OFFSET))(this);
		}
	};
}
