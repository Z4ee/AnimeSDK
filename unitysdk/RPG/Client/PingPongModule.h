#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_2_DB451539D71E1725;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }

#define RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET UNITYSDK_OFFSET(0xAC939F0)
#define RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET UNITYSDK_OFFSET(0xAC93990)
#define RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAC93820)
#define RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAC938F0)
#define RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAC93940)
#define RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC93A50)
#define RPG_CLIENT_PINGPONGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAC93A70)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_TypeDefinitionIndex = 61219;

	class PingPongModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PingPongModule_PingPongUIInfo* _UIInfo; // 0x10
		::Class_2_DB451539D71E1725* _GameInstance; // 0x18
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
