#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class ServerDispatchData; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS174_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91B7790)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS174_0___CHECKKICKOFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x91B82D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass174_0_TypeDefinitionIndex = 49430;

	class BattleGamePhase___c__DisplayClass174_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* __4__this; // 0x10
		::RPG::Client::ServerDispatchData* serverDispatchData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS174_0__CTOR_OFFSET))(this);
		}

		::System::Void __CheckKickOffline_b__0(::System::Boolean isPSSubpack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS174_0___CHECKKICKOFFLINE_B__0_OFFSET))(this, isPSSubpack);
		}
	};
}
