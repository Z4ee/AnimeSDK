#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class PrepareEditPhase; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA8660)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS3_0__REQUESTUSEHANDCARD_B__0_OFFSET UNITYSDK_OFFSET(0x9FA9F80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase___c__DisplayClass3_0_TypeDefinitionIndex = 70068;

	class PrepareEditPhase___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Grid* grid; // 0x10
		::RPG::Client::ChenLingBattle::PrepareEditPhase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestUseHandCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS3_0__REQUESTUSEHANDCARD_B__0_OFFSET))(this);
		}
	};
}
