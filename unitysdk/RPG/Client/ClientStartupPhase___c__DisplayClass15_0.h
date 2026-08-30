#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClientStartupPhase; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC2A1D0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS15_0___FETCHGLOBALDISPATCHINFO_B__1_OFFSET UNITYSDK_OFFSET(0xCC2A280)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c__DisplayClass15_0_TypeDefinitionIndex = 61235;

	class ClientStartupPhase___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* resolve; // 0x10
		::RPG::Client::ClientStartupPhase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __FetchGlobalDispatchInfo_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS15_0___FETCHGLOBALDISPATCHINFO_B__1_OFFSET))(this, a1);
		}
	};
}
