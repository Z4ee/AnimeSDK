#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_2_DB451539D71E1725;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }

#define RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET UNITYSDK_OFFSET(0x9F6DBC0)
#define RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET UNITYSDK_OFFSET(0x9F6DB60)
#define RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F6D9F0)
#define RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9F6DAC0)
#define RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9F6DB10)
#define RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6DC20)
#define RPG_CLIENT_PINGPONGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F6DC40)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_TypeDefinitionIndex = 54056;

	class PingPongModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_2_DB451539D71E1725* _GameInstance; // 0x10
		::RPG::Client::PingPongModule_PingPongUIInfo* _UIInfo; // 0x18
		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* _AddPointUIInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET))(this);
		}

		::System::Void RegisterGameController(::Class_2_DB451539D71E1725* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DB451539D71E1725*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, instance);
		}

		::System::Void UnregisterGameController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongUIInfo* GetPingPongUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* GetAddPointUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongAddPointUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
