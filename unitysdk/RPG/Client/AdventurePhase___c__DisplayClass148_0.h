#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class ServerDispatchData; }

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182BDA40)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS148_0___CHECKKICKOFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x182C7F00)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass148_0_TypeDefinitionIndex = 57439;

	class AdventurePhase___c__DisplayClass148_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* __4__this; // 0x10
		::RPG::Client::ServerDispatchData* serverDispatchData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
		}

		::System::Void __CheckKickOffline_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS148_0___CHECKKICKOFFLINE_B__0_OFFSET))(this, a1);
		}
	};
}
