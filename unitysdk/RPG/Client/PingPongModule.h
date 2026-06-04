#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_2_DB451539D71E1725;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }

#define RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET UNITYSDK_OFFSET(0xC3A6570)
#define RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET UNITYSDK_OFFSET(0xC3A6510)
#define RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC3A63A0)
#define RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC3A6470)
#define RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC3A64C0)
#define RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A65D0)
#define RPG_CLIENT_PINGPONGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC3A65F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_TypeDefinitionIndex = 62143;

	class PingPongModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_2_DB451539D71E1725* _GameInstance; // 0x10
		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* _AddPointUIInfo; // 0x18
		::RPG::Client::PingPongModule_PingPongUIInfo* _UIInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET))(this);
		}

		::System::Void RegisterGameController(::Class_2_DB451539D71E1725* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DB451539D71E1725*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, a1);
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
