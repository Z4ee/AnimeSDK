#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS112_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9CAE070)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS112_0___DOENTITYMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x9CBDC20)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass112_0_TypeDefinitionIndex = 55448;

	class AdventurePhase___c__DisplayClass112_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* __4__this; // 0x10
		::RPG::GameCore::TransitionLoadingType teleportType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS112_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoEntityMove_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS112_0___DOENTITYMOVE_B__0_OFFSET))(this);
		}
	};
}
