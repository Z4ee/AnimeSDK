#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System { class String; }

#define RPG_CLIENT_BASEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8CCC80)
#define RPG_CLIENT_BASEMODULE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC8CC870)
#define RPG_CLIENT_BASEMODULE_GET__NET_OFFSET UNITYSDK_OFFSET(0xC8CCDA0)
#define RPG_CLIENT_BASEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC8CCA60)
#define RPG_CLIENT_BASEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC8CCBC0)
#define RPG_CLIENT_BASEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC8CCB80)
#define RPG_CLIENT_BASEMODULE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xC8CCC00)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8CCD20)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC8CCA00)
#define RPG_CLIENT_BASEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8CCD60)
#define RPG_CLIENT_BASEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8CCE30)
#define RPG_CLIENT_BASEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8CC860)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseModule_TypeDefinitionIndex = 62939;

	class BaseModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BaseModule_TypeDefinitionIndex)->GetStaticField(0x49B0);
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

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
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
