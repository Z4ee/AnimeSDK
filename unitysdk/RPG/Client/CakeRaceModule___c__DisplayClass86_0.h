#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceModule; }

#define RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0C300)
#define RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS86_0___TRYACCEPTINVITED_B__0_OFFSET UNITYSDK_OFFSET(0x9F0DFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceModule___c__DisplayClass86_0_TypeDefinitionIndex = 58043;

	class CakeRaceModule___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceModule* __4__this; // 0x10
		::System::UInt64 lobbyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryAcceptInvited_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS86_0___TRYACCEPTINVITED_B__0_OFFSET))(this);
		}
	};
}
