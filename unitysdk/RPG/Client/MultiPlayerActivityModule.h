#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9DA93B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9DA9370)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA9580)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DA95A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityModule_TypeDefinitionIndex = 50157;

	class MultiPlayerActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::UInt32 get_CurMultiPlayerActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
